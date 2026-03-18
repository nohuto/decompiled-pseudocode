/*
 * XREFs of PopCheckResiliencyScenarios @ 0x14070E4E0
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x14035CAF0 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x140569134 (PopCoalescingSetActiveState.c)
 *     PopUpdateConsoleDisplayState @ 0x14076D0B4 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1407BD770 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407BDA00 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x1408EB3E0 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408EB9BC (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x14035CE78 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14035CF00 (PopDeepSleepClearDisengageReason.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14035D148 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PopDeepSleepEnabled @ 0x14035D3F0 (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1405601EC (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x140569260 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // al
  char v4; // cl

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( byte_140C24014 )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( byte_140C24014 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock(&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
