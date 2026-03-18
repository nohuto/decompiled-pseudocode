/*
 * XREFs of ExQueryWnfStateData @ 0x1407EEE10
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403DE440 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x1405CA0A0 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x1405CA1A0 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x1405CFD70 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1406EB9B0 (PopWnfMixedRealityCallback.c)
 *     PopWnfAudioCallback @ 0x1407EE7A0 (PopWnfAudioCallback.c)
 *     SshpWnfCallback @ 0x1408097A0 (SshpWnfCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14081CD10 (PopWnfSprActiveSessionChangeCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140933280 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x1409404B0 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14098CB20 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14098CBC0 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140995780 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140998940 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x14099A030 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x14099A120 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopAdaptiveWnfCallback @ 0x14099CB50 (PopAdaptiveWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409A4000 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfReadStateData @ 0x1407944BC (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407EEEB8 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    ExReleaseRundownProtection(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
