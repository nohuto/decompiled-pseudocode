/*
 * XREFs of ExQueryWnfStateData @ 0x1407090A0
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403CB930 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x140563920 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x140563A20 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x1405699B0 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x14075FBB0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14077C4D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14077C6C0 (PopWnfMixedRealityCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x14088D5E0 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140898800 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E0B10 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1408E0BB0 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408EAA40 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408EECA0 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1408EF3B0 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408EF490 (PopEsWnfSubscriptionOverrideCallback.c)
 *     SshpWnfCallback @ 0x1408F8790 (SshpWnfCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x140623D34 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140709148 (ExpWnfAcquireSubscriptionNameInstance.c)
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
