/*
 * XREFs of PnprWakeDevices @ 0x1409ABF2C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409ABDF0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoUnblockConsoleSwitch @ 0x140761C7C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140761CA4 (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x140765200 (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x1408E4184 (PoEndPartitionReplace.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1409AA92C (PnprGetMillisecondCounter.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  int MillisecondCounter; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  MillisecondCounter = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_DWORD *)(PnprContext + 21032) = MillisecondCounter;
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4, v3, v4, v5);
  PoClearBroadcast();
  PoEndPartitionReplace((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  PoEndPowerStateTasks((_DWORD *)(a1 + 36));
  PoUnblockConsoleSwitch((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  *(_DWORD *)(PnprContext + 21036) = PnprGetMillisecondCounter(0);
  return 0LL;
}
