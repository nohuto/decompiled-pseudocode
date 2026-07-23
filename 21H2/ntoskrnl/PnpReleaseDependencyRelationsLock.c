/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14074B860
 * Callers:
 *     IoResolveDependency @ 0x1403BF8D0 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14074B654 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B72C (PipProcessRebuildPowerRelationsQueue.c)
 *     PiDeviceDependencyInit @ 0x140A54ADC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
