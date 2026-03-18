/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14073AB28
 * Callers:
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x140741474 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1408B7E50 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x14073AB60 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
