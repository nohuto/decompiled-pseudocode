/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1406D3EE0
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x14056D314 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x14077D410 (PopEsWorker.c)
 *     PnpBootPhaseComplete @ 0x140798CD4 (PnpBootPhaseComplete.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407CFDBC (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407D0AFC (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407D0B38 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407D0B74 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407D0BB0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407D0BEC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407D0C28 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407D0C64 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x14091BD18 (RtlpCtContextInit.c)
 *     PopNetInitialize @ 0x140A41C60 (PopNetInitialize.c)
 *     PopEsInit @ 0x140A429C4 (PopEsInit.c)
 *     SshpSubscribeCallbacks @ 0x140A42F20 (SshpSubscribeCallbacks.c)
 *     PiUEventInit @ 0x140A51880 (PiUEventInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140A72684 (PopBatteryInitPhaseTwo.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A77428 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140653E94 (ExpWnfSubscribeWnfStateChange.c)
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
