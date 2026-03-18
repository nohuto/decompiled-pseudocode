/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x14073331C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x14075E568 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140710724 (PnpAcquireDependencyRelationsLock.c)
 *     IopAllocateRelationList @ 0x1407330DC (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1407331A0 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1407332CC (PnpAllocateCriticalMemory.c)
 *     IopEnumerateRelations @ 0x140733D30 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x140733EC4 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1408AE1E4 (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x1408AE308 (IopMergeRelationLists.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, _QWORD **a2, int a3, int a4)
{
  PVOID *CriticalMemory; // rbx
  _QWORD *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // rsi
  PVOID *v11; // r14
  PVOID **v12; // rax
  char v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID *v20; // rdi
  __int64 v21; // r8
  _BYTE *RelationList; // rax
  PVOID *v23; // rax
  PVOID **v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF

  v26 = 0LL;
  CriticalMemory = 0LL;
  v25 = 0LL;
  v6 = *a2;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v6;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v11 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v11 != &IopPendingSurpriseRemovals )
  {
    v20 = v11;
    v11 = (PVOID *)*v11;
    if ( v20[7] == a1 )
    {
      CriticalMemory = v20;
      v10 = v20[8];
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v20[8], v10) )
    {
      if ( v10 == v6 )
      {
        CriticalMemory = v20;
        RelationList = IopAllocateRelationList(3LL);
        v10 = RelationList;
        if ( !RelationList )
        {
          v10 = v6;
          break;
        }
        IopMergeRelationLists(RelationList, v6, 0LL);
      }
      LOBYTE(v21) = 1;
      IopMergeRelationLists(v10, v20[8], v21);
      IopFreeRelationList(v20[8]);
      if ( CriticalMemory == v20 )
      {
        CriticalMemory[8] = 0LL;
      }
      else
      {
        v23 = (PVOID *)*v20;
        if ( *((PVOID **)*v20 + 1) != v20 )
          goto LABEL_27;
        v24 = (PVOID **)v20[1];
        if ( *v24 != v20 )
          goto LABEL_27;
        *v24 = v23;
        v23[1] = v24;
        ExFreePoolWithTag(v20, 0);
      }
    }
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( v6 == v10 )
  {
    CriticalMemory = (PVOID *)PnpAllocateCriticalMemory(3, NonPagedPoolNx, 0x70uLL, 0x54706E50u);
    v12 = (PVOID **)qword_140C44BC8;
    if ( *(PVOID **)qword_140C44BC8 != &IopPendingSurpriseRemovals )
LABEL_27:
      __fastfail(3u);
    *CriticalMemory = &IopPendingSurpriseRemovals;
    CriticalMemory[1] = v12;
    *v12 = CriticalMemory;
    qword_140C44BC8 = (__int64)CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v6);
  }
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v10, (unsigned int)&v25, (unsigned int)&v26, 0, 0LL) )
  {
    if ( v26 )
      v14 = *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL);
    else
      v14 = 0LL;
    if ( (*(_BYTE *)(v14 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v10) )
      {
        *(_QWORD *)(v15 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v15 + 648) + 656LL);
      }
    }
  }
  CriticalMemory[7] = a1;
  *((_DWORD *)CriticalMemory + 21) = a3;
  *((_BYTE *)CriticalMemory + 88) = v13;
  CriticalMemory[8] = v10;
  *((_DWORD *)CriticalMemory + 27) = a4;
  *((_BYTE *)CriticalMemory + 104) = v13;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
}
