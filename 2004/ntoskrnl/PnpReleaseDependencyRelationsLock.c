/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14072C44C
 * Callers:
 *     IoResolveDependency @ 0x1403BC7D0 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14072C22C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14072C304 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiDeviceDependencyInit @ 0x140A51E54 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
