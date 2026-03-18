/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x14071031C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036C538 (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x1407101A0 (IopDeleteDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140730E58 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14079DFC0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1407B7940 (PipDeleteAllDependencyRelations.c)
 */

__int64 __fastcall PnpDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rsi

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL);
    if ( v3 )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(v2);
      PipDeleteAllDependencyRelations(v2);
    }
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0LL);
    if ( v3 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
