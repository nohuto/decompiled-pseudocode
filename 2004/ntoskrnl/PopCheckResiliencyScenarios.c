/*
 * XREFs of PopCheckResiliencyScenarios @ 0x1406A723C
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1402DE9DC (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x140569784 (PopCoalescingSetActiveState.c)
 *     PopUpdateConsoleDisplayState @ 0x14076BFE8 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1407C08E0 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407C0C20 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x1408EC660 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ECC3C (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402DED68 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402DEDF0 (PopDeepSleepClearDisengageReason.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402DF038 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PopDeepSleepEnabled @ 0x1402DF2E0 (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14056083C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1405698B0 (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_140C23A74 )
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
      if ( byte_140C23A74 && !PopDeepSleepEnabled() )
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
