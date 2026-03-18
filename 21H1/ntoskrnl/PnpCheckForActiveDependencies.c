/*
 * XREFs of PnpCheckForActiveDependencies @ 0x140726F40
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x14072E914 (PiProcessQueryDeviceState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     PipIsDevNodeDNStarted @ 0x14035D624 (PipIsDevNodeDNStarted.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140726F98 (PipCheckForUnsatisfiedDependencies.c)
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
