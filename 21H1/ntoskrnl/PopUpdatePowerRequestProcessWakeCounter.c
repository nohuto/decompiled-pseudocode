/*
 * XREFs of PopUpdatePowerRequestProcessWakeCounter @ 0x14070099C
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14070E454 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407BE388 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     Feature_Servicing_25906437__private_IsEnabled @ 0x1403F0F38 (Feature_Servicing_25906437__private_IsEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PsReleaseProcessWakeCounter @ 0x14064B800 (PsReleaseProcessWakeCounter.c)
 *     PopStatsMarkPowerRequestInactive @ 0x1406FF6C0 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsMarkPowerRequestActive @ 0x1406FF820 (PopStatsMarkPowerRequestActive.c)
 */

char __fastcall PopUpdatePowerRequestProcessWakeCounter(__int64 a1, char a2)
{
  int IsEnabled; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx

  LOBYTE(IsEnabled) = *(_BYTE *)(a1 + 112);
  if ( a2 )
  {
    if ( !(_BYTE)IsEnabled && qword_140C54350 )
    {
      PopStatsMarkPowerRequestActive(a1);
      LOBYTE(v4) = 1;
      LOBYTE(IsEnabled) = ((__int64 (__fastcall *)(__int64))qword_140C54350)(v4);
      *(_BYTE *)(a1 + 112) = 1;
    }
  }
  else
  {
    if ( (_BYTE)IsEnabled )
    {
      ((void (__fastcall *)(_QWORD))qword_140C54350)(0LL);
      *(_BYTE *)(a1 + 112) = 0;
      PopStatsMarkPowerRequestInactive(a1);
    }
    IsEnabled = Feature_Servicing_25906437__private_IsEnabled();
    if ( IsEnabled )
    {
      v5 = *(_QWORD *)(a1 + 128);
      if ( v5 )
      {
        LOBYTE(IsEnabled) = PsReleaseProcessWakeCounter(v5, a1);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
    }
  }
  return IsEnabled;
}
