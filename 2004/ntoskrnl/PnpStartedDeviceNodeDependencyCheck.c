/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14072C098
 * Callers:
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x1407320D0 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1408B2230 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x14072C0D0 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
