/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1406DD990
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x140569294 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x14076C240 (PopEsWorker.c)
 *     PnpBootPhaseComplete @ 0x14078A6C4 (PnpBootPhaseComplete.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407BE30C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407BEDFC (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407BEE38 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407BEE74 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407BEEB0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407BEEEC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407BEF28 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407BEF64 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x140914E78 (RtlpCtContextInit.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     PopNetInitialize @ 0x140A3BD6C (PopNetInitialize.c)
 *     PopEsInit @ 0x140A3CACC (PopEsInit.c)
 *     SshpSubscribeCallbacks @ 0x140A3D028 (SshpSubscribeCallbacks.c)
 *     PiUEventInit @ 0x140A4B668 (PiUEventInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6BB18 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140668404 (ExpWnfSubscribeWnfStateChange.c)
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
