/*
 * XREFs of PnpCheckForActiveDependencies @ 0x1407360FC
 * Callers:
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x140739218 (PiProcessQueryDeviceState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PipIsDevNodeDNStarted @ 0x140363608 (PipIsDevNodeDNStarted.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140736154 (PipCheckForUnsatisfiedDependencies.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned int a2)
{
  char v5; // bl

  if ( PipIsDevNodeDNStarted(a1) )
    return 0;
  PnpAcquireDependencyRelationsLock(0);
  v5 = PipCheckForUnsatisfiedDependencies(a1, a2);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return v5;
}
