/*
 * XREFs of PnpCheckForActiveDependencies @ 0x140777C08
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipIsDevNodeDNStarted @ 0x1402DEAB0 (PipIsDevNodeDNStarted.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1407750C0 (PipCheckForUnsatisfiedDependencies.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned __int8 a2)
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
