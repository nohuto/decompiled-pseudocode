/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x14074B6BC
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x14074B654 (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x14050C738 (PiListEntryToDependencyEdge.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x140741B18 (PiGetProviderList.c)
 *     PiGetDependentList @ 0x14074B534 (PiGetDependentList.c)
 *     PipNotifyDependenciesChanged @ 0x14089E0CC (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipNotifyDeviceDependencyList(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 *DependentList; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  PnpAcquireDependencyRelationsLock(0);
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    DependentList = PiGetDependentList(v2);
  }
  else
  {
    DependentList = PiGetProviderList(v2);
  }
  v5 = (__int64 *)*DependentList;
  v6 = DependentList;
  while ( v5 != v6 )
  {
    v7 = PiListEntryToDependencyEdge((__int64)v5, a2);
    v5 = (__int64 *)*v5;
    if ( a2 )
    {
      v9 = *(_QWORD *)(v7 + 40);
      v8 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 32);
      v9 = 0LL;
    }
    PipNotifyDependenciesChanged(v9, v8);
  }
LABEL_5:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
