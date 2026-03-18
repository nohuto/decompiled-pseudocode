/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1407006B0
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x1405698E4 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x14076E9E0 (PopEsWorker.c)
 *     PnpBootPhaseComplete @ 0x14078C594 (PnpBootPhaseComplete.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     PopSetupMixedRealitytNotification @ 0x1407C15B8 (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407C22FC (PopSetupMobileHotspotNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407C2338 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupAirplaneModeNotification @ 0x1407C2374 (PopSetupAirplaneModeNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407C23B0 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407C23EC (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407C2428 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407C2464 (PopSetupAudioEventNotification.c)
 *     RtlpCtContextInit @ 0x1409160E8 (RtlpCtContextInit.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     PopNetInitialize @ 0x140A3BBDC (PopNetInitialize.c)
 *     PopEsInit @ 0x140A3C724 (PopEsInit.c)
 *     SshpSubscribeCallbacks @ 0x140A3CC80 (SshpSubscribeCallbacks.c)
 *     PiUEventInit @ 0x140A51200 (PiUEventInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140A6BDA0 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140622CE4 (ExpWnfSubscribeWnfStateChange.c)
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
