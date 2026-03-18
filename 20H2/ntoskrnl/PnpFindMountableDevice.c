/*
 * XREFs of PnpFindMountableDevice @ 0x14036F668
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407302BC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1408BB234 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall PnpFindMountableDevice(__int64 a1)
{
  KIRQL v2; // dl

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 && ((*(_DWORD *)(a1 + 48) & 0x40) == 0 || !*(_QWORD *)(a1 + 56)) )
    a1 = *(_QWORD *)(a1 + 24);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return a1;
}
