/*
 * XREFs of ExQueryWnfStateData @ 0x1406DB8B0
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403CE550 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140567300 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x140567400 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x14056D3E0 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x14076E220 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14078AAD0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14078ACC0 (PopWnfMixedRealityCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140893130 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14089E330 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E6950 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1408E69F0 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408F0650 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408F48B0 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1408F4FC0 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408F50A0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     SshpWnfCallback @ 0x1408FE3A0 (SshpWnfCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfReadStateData @ 0x140654E40 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406DB958 (ExpWnfAcquireSubscriptionNameInstance.c)
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
    ExReleaseRundownProtection_0(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)StateData;
}
