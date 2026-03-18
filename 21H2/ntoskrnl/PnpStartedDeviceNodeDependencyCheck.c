/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14076AC70
 * Callers:
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1409473F0 (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14095B398 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipAttemptDependentsStart @ 0x14076ACA8 (PipAttemptDependentsStart.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0LL);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  return PpDevNodeUnlockTree(0LL);
}
