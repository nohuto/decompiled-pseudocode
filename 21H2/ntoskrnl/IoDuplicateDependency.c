/*
 * XREFs of IoDuplicateDependency @ 0x14089D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x14050C738 (PiListEntryToDependencyEdge.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x14074B534 (PiGetDependentList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14074B72C (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B6460 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipQueryBindingResolution @ 0x1407B6518 (PipQueryBindingResolution.c)
 *     PipCreateDependencyNode @ 0x1407B65BC (PipCreateDependencyNode.c)
 *     PipDeleteDependencyNode @ 0x1407CD820 (PipDeleteDependencyNode.c)
 *     PipDependencyCopyEdge @ 0x14089DDCC (PipDependencyCopyEdge.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *BindingResolution; // rax
  __int64 DependencyNode; // rdi
  __int64 *DependentList; // r14
  __int64 *v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  _DWORD v13[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v13[1] = 0;
  if ( a1 && a2 )
  {
    PnpAcquireDependencyRelationsLock(1);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) )
    {
LABEL_4:
      ExReleaseResourceLite(&PiDependencyRelationsLock);
      PpDevNodeUnlockTree(0);
      return v2;
    }
    v13[0] = 0;
    v14 = a2;
    BindingResolution = PipQueryBindingResolution((__int64)v13);
    DependencyNode = (__int64)BindingResolution;
    if ( BindingResolution )
    {
      ++*((_DWORD *)BindingResolution + 22);
    }
    else
    {
      DependencyNode = PipCreateDependencyNode((__int64)v13);
      if ( !DependencyNode )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    DependentList = PiGetDependentList(a1);
    v8 = (__int64 *)*DependentList;
    if ( (__int64 *)*DependentList != DependentList )
    {
      while ( 1 )
      {
        v9 = PiListEntryToDependencyEdge((__int64)v8, 1);
        v8 = (__int64 *)*v8;
        v10 = PipDependencyCopyEdge(v9, DependencyNode);
        if ( v10 < 0 )
          break;
        if ( v8 == DependentList )
          goto LABEL_14;
      }
      v2 = v10;
    }
LABEL_14:
    if ( (*(_DWORD *)(DependencyNode + 88))-- == 1 )
      PipDeleteDependencyNode((_QWORD *)DependencyNode);
    PipAddDependentsToRebuildPowerRelationsQueue(a2);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue();
    return v2;
  }
  return 3221225485LL;
}
