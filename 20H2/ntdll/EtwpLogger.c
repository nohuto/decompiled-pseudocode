/*
 * XREFs of EtwpLogger @ 0x180055030
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 *     EtwpFlushActiveBuffers @ 0x180055234 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeLogFileHeader @ 0x1800556B4 (EtwpFinalizeLogFileHeader.c)
 *     EtwpSendSessionNotification @ 0x180055EA4 (EtwpSendSessionNotification.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFreeLoggerContext @ 0x180058314 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x1800585C0 (EtwpStopLoggerInstance.c)
 *     NtWaitForSingleObject @ 0x18009D130 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18009D270 (ZwSetEvent.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 a1)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // edi
  signed int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rsi
  int v13; // eax
  int v14; // ecx
  int v15; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  v15 = 2;
  NtSetInformationThread(-2LL, 3LL, &v15, 4LL);
  while ( *(_DWORD *)(a1 + 328) )
  {
    v2 = 0LL;
    if ( *(_QWORD *)(a1 + 344) )
      v2 = (LARGE_INTEGER *)(a1 + 344);
    v3 = NtWaitForSingleObject(*(HANDLE *)(a1 + 128), 0, v2);
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(a1 + 332) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v4);
    v7 = *(_DWORD *)(a1 + 332);
    v8 = active;
    if ( (v7 & 1) != 0 && active >= 0 && !v4 )
    {
      v11 = EtwpFlushActiveBuffers(a1, 1LL);
      v7 = *(_DWORD *)(a1 + 332);
      v8 = v11;
    }
    if ( (v7 & 4) != 0 || (v7 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0LL);
      v12 = *(void **)(a1 + 144);
      *(_QWORD *)(a1 + 144) = 0LL;
      v13 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 40) = v13;
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = *(_DWORD *)(a1 + 332);
        *(_QWORD *)(a1 + 144) = v12;
        if ( (v14 & 4) != 0 )
          v8 = 0;
      }
      else
      {
        NtClose(v12);
        v14 = *(_DWORD *)(a1 + 332);
        if ( (v14 & 1) != 0 )
        {
          EtwpSendSessionNotification(a1, 1LL, 0LL);
          v14 = *(_DWORD *)(a1 + 332);
        }
      }
      v7 = v14 & 0xFFFFFFFE;
      *(_DWORD *)(a1 + 332) = v7;
    }
    if ( (v7 & 0x10) != 0 )
    {
      v7 &= ~0x10u;
      *(_DWORD *)(a1 + 332) = v7;
      if ( *(_QWORD *)(a1 + 144) )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(a1, v6);
        v7 = *(_DWORD *)(a1 + 332);
      }
    }
    if ( (v7 & 6) != 0 )
    {
      *(_DWORD *)(a1 + 332) = v7 & 0xFFFFFFF9;
      ZwSetEvent(*(_QWORD *)(a1 + 136), 0LL);
    }
    if ( v8 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v9 = EtwpFinalizeLogFileHeader(a1, 0LL);
  NtClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v9 > 0 )
    v9 = (unsigned __int16)v9 | 0xC0070000;
  v10 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 40) = v9;
  ZwSetEvent(v10, 0LL);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0);
}
