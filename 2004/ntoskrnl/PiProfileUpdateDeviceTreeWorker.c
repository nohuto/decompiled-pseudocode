/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x1408A8030
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140707250 (PipForDeviceNodeSubtree.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(P, 0);
}
