/*
 * XREFs of PnprWakeDevices @ 0x1409AB0CC
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409AAF90 (PnprQuiesceWorker.c)
 * Callees:
 *     PoUnblockConsoleSwitch @ 0x14076039C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407603C4 (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x1407637E0 (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x1408E2F04 (PoEndPartitionReplace.c)
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1409A9ACC (PnprGetMillisecondCounter.c)
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
