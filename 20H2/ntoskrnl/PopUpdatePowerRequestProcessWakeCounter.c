/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x14072002C
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14071EAC4 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407CFE38 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PsReleaseProcessWakeCounter @ 0x1405E59A0 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestInactive @ 0x14071CBD0 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x14071CD70 (PopStatsMarkPowerRequestActive.c)
 */

void __fastcall PopUpdatePowerRequestProcessWakeCounter(__int64 a1, char a2)
{
  char v2; // al
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(_BYTE *)(a1 + 112);
  if ( a2 )
  {
    if ( !v2 )
    {
      if ( qword_140C542D0 )
      {
        PopStatsMarkPowerRequestActive(a1);
        LOBYTE(v4) = 1;
        ((void (__fastcall *)(__int64))qword_140C542D0)(v4);
        *(_BYTE *)(a1 + 112) = 1;
      }
    }
  }
  else
  {
    if ( v2 )
    {
      ((void (__fastcall *)(_QWORD))qword_140C542D0)(0LL);
      *(_BYTE *)(a1 + 112) = 0;
      PopStatsMarkPowerRequestInactive(a1);
    }
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      PsReleaseProcessWakeCounter(v5);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
  }
}
