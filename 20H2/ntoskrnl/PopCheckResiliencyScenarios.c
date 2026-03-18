/*
 * XREFs of PopCheckResiliencyScenarios @ 0x14071EB50
 * Callers:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1403632DC (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopCoalescingSetActiveState @ 0x14056D1B4 (PopCoalescingSetActiveState.c)
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1407CF170 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1407CF4B0 (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x1408F2270 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F284C (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14033D9E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x14033FD68 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x14033FDF0 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepEnabled @ 0x140363428 (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14056421C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14056D2E0 (PopEnsureCoalescingWorkerWillRun.c)
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
    if ( byte_140C23EF4 )
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
      if ( byte_140C23EF4 && !PopDeepSleepEnabled() )
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
