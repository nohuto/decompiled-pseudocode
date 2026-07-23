/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14074B4C0
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140738734 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     PipProcessRestartPhase2 @ 0x1408B5490 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x14074B4F8 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
