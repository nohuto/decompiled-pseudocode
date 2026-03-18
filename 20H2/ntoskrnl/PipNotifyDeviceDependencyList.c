/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x14073AD24
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x14073ACBC (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x14050A9C8 (PiListEntryToDependencyEdge.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14071FAB4 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1407361A4 (PiGetProviderList.c)
 *     PiGetDependentList @ 0x14073AB9C (PiGetDependentList.c)
 *     PipNotifyDependenciesChanged @ 0x1408A099C (PipNotifyDependenciesChanged.c)
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
