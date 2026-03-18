/*
 * XREFs of PnprWakeDevices @ 0x140A6927C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A69140 (PnprQuiesceWorker.c)
 * Callees:
 *     PoUnblockConsoleSwitch @ 0x1407FE774 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407FE7BC (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x1408025E8 (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x14098FC84 (PoEndPartitionReplace.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x140A67C14 (PnprGetMillisecondCounter.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  int MillisecondCounter; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  MillisecondCounter = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_DWORD *)(PnprContext + 33320) = MillisecondCounter;
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4, v3, v4, v5);
  PoClearBroadcast();
  PoEndPartitionReplace((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  PoEndPowerStateTasks(a1 + 36);
  PoUnblockConsoleSwitch(a1 + 36, *(_DWORD *)(a1 + 32));
  *(_DWORD *)(PnprContext + 33324) = PnprGetMillisecondCounter(0);
  return 0LL;
}
