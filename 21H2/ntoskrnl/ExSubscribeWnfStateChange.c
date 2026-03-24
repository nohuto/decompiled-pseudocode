/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1406B17B0
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x14056ED24 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x1407811F0 (PopEsWorker.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     PnpBootPhaseComplete @ 0x1407A31F4 (PnpBootPhaseComplete.c)
 *     PopSetupMixedRealitytNotification @ 0x1407D41AC (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D4F2C (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D4F68 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D4FA4 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D4FE0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D501C (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D5058 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D5094 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x1409194D8 (RtlpCtContextInit.c)
 *     PopNetInitialize @ 0x140A3F7C8 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A4052C (PopEsInit.c)
 *     SshpSubscribeCallbacks @ 0x140A40C14 (SshpSubscribeCallbacks.c)
 *     PiUEventInit @ 0x140A52E88 (PiUEventInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6F604 (PopBatteryInitPhaseTwo.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A74328 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14060EAF4 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
