/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140775C4C
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14033D9E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x14033FD68 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14033FDF0 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x140363428 (PopDeepSleepEnabled.c)
 *     KeSetMaxDynamicTickDuration @ 0x140512E08 (KeSetMaxDynamicTickDuration.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14056D2E0 (PopEnsureCoalescingWorkerWillRun.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  char v2; // r8
  int v3; // r9d
  int v4; // ecx

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  if ( PopDeepSleepEnabled() && PopPdcIdleResiliency )
    v2 = 1;
  if ( !v3 )
  {
    if ( !v2 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( v2 )
  {
LABEL_12:
    if ( PopDeepSleepEnforced )
    {
      KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
      PopDeepSleepEnforced = 0;
      PopDeepSleepSetDisengageReason(0);
      if ( !byte_140C23EF4 )
        PopDeepSleepSetDisengageReason(1u);
    }
    goto LABEL_6;
  }
  if ( !PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration((unsigned int)(10000000 * v3));
    PopDeepSleepEnforced = 1;
    PopDeepSleepClearDisengageReason(0);
    PopDeepSleepClearDisengageReason(1u);
  }
LABEL_6:
  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock(&PopFxSystemLatencyLock);
  v4 = *a1;
  if ( *a1 )
  {
    if ( !PopCurrentCoalescingSpindownTimeout )
    {
      PopCoalescingState |= 2u;
      PopCoalescingEnforced = 1;
      PopEnforcedCoalescingSpindownTimeout = v4;
LABEL_19:
      PopEnsureCoalescingWorkerWillRun();
    }
  }
  else if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingState &= ~2u;
    PopCoalescingEnforced = 0;
    goto LABEL_19;
  }
}
