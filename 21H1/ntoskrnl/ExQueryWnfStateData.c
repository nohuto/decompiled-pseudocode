/*
 * XREFs of ExQueryWnfStateData @ 0x1406E54C0
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1403CAB50 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x1405632D0 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x1405633D0 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x140569360 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x14075D8A0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14077A0C0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14077A2B0 (PopWnfMixedRealityCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x14088C2C0 (VslpConnectedStandbyWnfCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x1408974E0 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408DF8B0 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1408DF950 (PopWnfUserAwayPredictionCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408E97C0 (PopUsbErrorWNFNotificationCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408ED9B0 (PopNetWnfLowPowerEpochCallback.c)
 *     PopEsInStandbyEvaluate @ 0x1408EE0C0 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408EE1A0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     SshpWnfCallback @ 0x1408F74A0 (SshpWnfCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfReadStateData @ 0x140669454 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406E5568 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _EX_RUNDOWN_REF *v12; // rdi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v12 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    ExReleaseRundownProtection_0(v12 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return (unsigned int)StateData;
}
