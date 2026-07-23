/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140610760
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x14056EF64 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x1407813B0 (PopEsWorker.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     PnpBootPhaseComplete @ 0x1407A33F4 (PnpBootPhaseComplete.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D431C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D509C (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D50D8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D5114 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D5150 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D518C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D51C8 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D5204 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x140919638 (RtlpCtContextInit.c)
 *     PopNetInitialize @ 0x140A407C8 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A4152C (PopEsInit.c)
 *     SshpSubscribeCallbacks @ 0x140A41C14 (SshpSubscribeCallbacks.c)
 *     PiUEventInit @ 0x140A53E88 (PiUEventInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140A70604 (PopBatteryInitPhaseTwo.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A75328 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14069E5A4 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
