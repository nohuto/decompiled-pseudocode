/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x1406A8670
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A71B0 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407C1634 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PsReleaseProcessWakeCounter @ 0x14062DC50 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestActive @ 0x14064DED0 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsMarkPowerRequestInactive @ 0x14064E188 (PopStatsMarkPowerRequestInactive.c)
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
      if ( qword_140C54250 )
      {
        PopStatsMarkPowerRequestActive(a1);
        LOBYTE(v4) = 1;
        ((void (__fastcall *)(__int64))qword_140C54250)(v4);
        *(_BYTE *)(a1 + 112) = 1;
      }
    }
  }
  else
  {
    if ( v2 )
    {
      ((void (__fastcall *)(_QWORD))qword_140C54250)(0LL);
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
