/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x140730BEC
 * Callers:
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x140733DB4 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1408B0F10 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x140730C24 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
