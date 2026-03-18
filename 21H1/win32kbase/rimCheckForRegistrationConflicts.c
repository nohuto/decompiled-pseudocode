/*
 * XREFs of rimCheckForRegistrationConflicts @ 0x1C00A4174
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0161B74 (WPP_RECORDER_SF_qqqd.c)
 */

char __fastcall rimCheckForRegistrationConflicts(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  char v5; // si
  struct _LIST_ENTRY *v6; // rbx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v5 = 0;
  while ( Flink != &gObRimList )
  {
    v6 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(v6[5].Flink) && (a1 & HIDWORD(v6[5].Flink)) != 0 )
    {
      if ( LODWORD(v6[54].Flink) )
      {
        CurrentProcess = (PVOID)PsGetCurrentProcess(v3, v2);
        if ( !CurrentProcess
          || CurrentProcess != g_pepDwm
          || v6[2].Flink == (struct _LIST_ENTRY *)PsGetCurrentProcess(v3, v9) )
        {
          v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqd(v3, v6[2].Flink, v10, v11);
          break;
        }
      }
    }
    Flink = Flink->Flink;
  }
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
