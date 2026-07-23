/*
 * XREFs of EtwpLogger @ 0x180054FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800545F0 (RtlExitUserThread.c)
 *     EtwpFlushActiveBuffers @ 0x1800551E4 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x180055664 (EtwpFinalizeLogFileHeader.c)
 *     EtwpSendSessionNotification @ 0x180055E54 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFreeLoggerContext @ 0x1800582C4 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x180058570 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x18009CE90 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18009CFB0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18009CFD0 (ZwSetEvent.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(char *BaseAddress)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // edi
  signed int v9; // edi
  void *v10; // rcx
  int v11; // eax
  void *v12; // rsi
  int v13; // eax
  int v14; // ecx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)BaseAddress + 3) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  v15 = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v15, 4u);
  while ( *((_DWORD *)BaseAddress + 82) )
  {
    v2 = 0LL;
    if ( *((_QWORD *)BaseAddress + 43) )
      v2 = (LARGE_INTEGER *)(BaseAddress + 344);
    v3 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 16), 0, v2);
    v4 = v3 == 258 || !v3 && (BaseAddress[332] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v4);
    v7 = *((_DWORD *)BaseAddress + 83);
    v8 = active;
    if ( (v7 & 1) != 0 && active >= 0 && !v4 )
    {
      v11 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
      v7 = *((_DWORD *)BaseAddress + 83);
      v8 = v11;
    }
    if ( (v7 & 4) != 0 || (v7 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v12 = (void *)*((_QWORD *)BaseAddress + 18);
      *((_QWORD *)BaseAddress + 18) = 0LL;
      v13 = EtwpAddLogHeaderToLogFile(BaseAddress, 0LL, 0LL, 0LL);
      *((_DWORD *)BaseAddress + 10) = v13;
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = *((_DWORD *)BaseAddress + 83);
        *((_QWORD *)BaseAddress + 18) = v12;
        if ( (v14 & 4) != 0 )
          v8 = 0;
      }
      else
      {
        NtClose(v12);
        v14 = *((_DWORD *)BaseAddress + 83);
        if ( (v14 & 1) != 0 )
        {
          EtwpSendSessionNotification(BaseAddress, 1LL, 0LL);
          v14 = *((_DWORD *)BaseAddress + 83);
        }
      }
      v7 = v14 & 0xFFFFFFFE;
      *((_DWORD *)BaseAddress + 83) = v7;
    }
    if ( (v7 & 0x10) != 0 )
    {
      v7 &= ~0x10u;
      *((_DWORD *)BaseAddress + 83) = v7;
      if ( *((_QWORD *)BaseAddress + 18) )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v6);
        v7 = *((_DWORD *)BaseAddress + 83);
      }
    }
    if ( (v7 & 6) != 0 )
    {
      *((_DWORD *)BaseAddress + 83) = v7 & 0xFFFFFFF9;
      ZwSetEvent(*((HANDLE *)BaseAddress + 17), 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v9 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*((HANDLE *)BaseAddress + 18));
  *((_QWORD *)BaseAddress + 18) = 0LL;
  if ( v9 > 0 )
    v9 = (unsigned __int16)v9 | 0xC0070000;
  v10 = (void *)*((_QWORD *)BaseAddress + 17);
  *((_DWORD *)BaseAddress + 10) = v9;
  ZwSetEvent(v10, 0LL);
  EtwpFreeLoggerContext(BaseAddress);
  RtlExitUserThread(0);
}
