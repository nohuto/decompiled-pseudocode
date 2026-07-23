/*
 * XREFs of EtwpLogger @ 0x18004C5E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpSendSessionNotification @ 0x1800481EC (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFlushActiveBuffers @ 0x18004C7E4 (EtwpFlushActiveBuffers.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x18004F8C0 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x18009D680 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18009D7A0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18009D7C0 (ZwSetEvent.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(char *BaseAddress)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // edi
  void *v9; // rcx
  int v10; // eax
  void *v11; // rsi
  int v12; // eax
  int v13; // ecx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)BaseAddress + 3) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  v14 = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v14, 4u);
  while ( *((_DWORD *)BaseAddress + 82) )
  {
    v2 = 0LL;
    if ( *((_QWORD *)BaseAddress + 43) )
      v2 = (LARGE_INTEGER *)(BaseAddress + 344);
    v3 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 16), 0, v2);
    v4 = v3 == 258 || !v3 && (BaseAddress[332] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v4);
    v6 = *((_DWORD *)BaseAddress + 83);
    v7 = active;
    if ( (v6 & 1) != 0 && active >= 0 && !v4 )
    {
      v10 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
      v6 = *((_DWORD *)BaseAddress + 83);
      v7 = v10;
    }
    if ( (v6 & 4) != 0 || (v6 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader((__int64)BaseAddress, 0);
      v11 = (void *)*((_QWORD *)BaseAddress + 18);
      *((_QWORD *)BaseAddress + 18) = 0LL;
      v12 = EtwpAddLogHeaderToLogFile((__int64)BaseAddress, 0LL, 0, 0);
      *((_DWORD *)BaseAddress + 10) = v12;
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = *((_DWORD *)BaseAddress + 83);
        *((_QWORD *)BaseAddress + 18) = v11;
        if ( (v13 & 4) != 0 )
          v7 = 0;
      }
      else
      {
        NtClose(v11);
        v13 = *((_DWORD *)BaseAddress + 83);
        if ( (v13 & 1) != 0 )
        {
          EtwpSendSessionNotification((__int64)BaseAddress, 1, 0);
          v13 = *((_DWORD *)BaseAddress + 83);
        }
      }
      v6 = v13 & 0xFFFFFFFE;
      *((_DWORD *)BaseAddress + 83) = v6;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v6 &= ~0x10u;
      *((_DWORD *)BaseAddress + 83) = v6;
      if ( *((_QWORD *)BaseAddress + 18) )
      {
        EtwpFinalizeLogFileHeader((__int64)BaseAddress, 1);
        v6 = *((_DWORD *)BaseAddress + 83);
      }
    }
    if ( (v6 & 6) != 0 )
    {
      *((_DWORD *)BaseAddress + 83) = v6 & 0xFFFFFFF9;
      ZwSetEvent(*((HANDLE *)BaseAddress + 17), 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v8 = EtwpFinalizeLogFileHeader((__int64)BaseAddress, 0);
  NtClose(*((HANDLE *)BaseAddress + 18));
  *((_QWORD *)BaseAddress + 18) = 0LL;
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0xC0070000;
  v9 = (void *)*((_QWORD *)BaseAddress + 17);
  *((_DWORD *)BaseAddress + 10) = v8;
  ZwSetEvent(v9, 0LL);
  EtwpFreeLoggerContext(BaseAddress);
  RtlExitUserThread(0);
}
