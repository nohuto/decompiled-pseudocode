/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x140730F50
 * Callers:
 *     IoResolveDependency @ 0x1403BB4B0 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140730D80 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140730E58 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiDeviceDependencyInit @ 0x140A4C154 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
