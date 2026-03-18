/*
 * XREFs of ACPITableLoadCallBack @ 0x1C001F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalMoveList @ 0x1C0002C10 (ACPIInternalMoveList.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C0007924 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C0008120 (ACPIPowerScheduleDpc.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001D4E0 (ACPIGpeBuildWakeMasks.c)
 *     Simulator_RefreshTree @ 0x1C0065440 (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(_QWORD *a1, char a2)
{
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIGpeBuildWakeMasks(RootDeviceExtension);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, (__int64)&AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(a1, (__int64)ACPITableLoadNotifyPnp, 0LL) < 0 )
      KeBugCheckEx(0xA3u, 1uLL, 0x1100A2uLL, 0LL, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
