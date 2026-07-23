/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x140363A3C
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140363BD0 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1404EFEC0 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x14021D2F0 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021D334 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14022C01C (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDelete @ 0x1403646B0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140364750 (FsRtlPrivateResetLowestLockOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleExclusive(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        unsigned __int64 *a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // r15
  KIRQL v14; // al
  _QWORD *v15; // rcx
  unsigned int v16; // edi
  unsigned __int64 v17; // r14
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rsi
  int v20; // r12d
  bool v21; // cc
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  __int64 v35; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v37; // [rsp+88h] [rbp+20h]

  v37 = a4;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v36 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v15 = (_QWORD *)v10[2];
  v16 = 0;
  v17 = v14;
  if ( v15 )
  {
    v35 = (__int64)*a4 + v9 - 1;
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        v15,
                                                        &v36,
                                                        (unsigned __int64 *)&v35,
                                                        0LL,
                                                        0LL);
    if ( FirstOverlappingExclusiveNode )
    {
      v20 = a6;
      while ( 1 )
      {
        if ( FirstOverlappingExclusiveNode[2].Parent == a2
          && FirstOverlappingExclusiveNode[2].LeftChild == a5
          && HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) == v20 )
        {
          v21 = FirstOverlappingExclusiveNode[1].Parent <= (_RTL_SPLAY_LINKS *)v9;
          if ( FirstOverlappingExclusiveNode[1].Parent != (_RTL_SPLAY_LINKS *)v9 )
            goto LABEL_24;
          if ( FirstOverlappingExclusiveNode[1].LeftChild == *v37 )
          {
            if ( a2[5].Parent == &FirstOverlappingExclusiveNode[1] )
              a2[5].Parent = 0LL;
            v10[2] = (KSPIN_LOCK)RtlDelete(FirstOverlappingExclusiveNode);
            if ( *(_RTL_SPLAY_LINKS **)a1 == FirstOverlappingExclusiveNode[1].Parent )
              FsRtlPrivateResetLowestLockOffset(a1);
            if ( !a8 && *(_QWORD *)(a1 + 16) )
            {
              KxReleaseSpinLock(v10);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                    v26 = (v25 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v25;
                    if ( v26 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
              }
              __writecr8(v17);
              (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(a1 + 16))(a7, FirstOverlappingExclusiveNode + 1);
              LOBYTE(v17) = KeAcquireSpinLockRaiseToDpc(v10);
            }
            ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, FirstOverlappingExclusiveNode);
            if ( a9 && v10[3] )
              FsRtlPrivateCheckWaitingLocks(a1, v10, v17);
            KxReleaseSpinLock(v10);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v27 = KeGetCurrentIrql();
                if ( v27 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v27 >= 2u )
                {
                  v28 = KeGetCurrentPrcb();
                  v29 = v28->SchedulerAssist;
                  v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                  v26 = (v30 & v29[5]) == 0;
                  v29[5] &= v30;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick(v28);
                }
              }
            }
            goto LABEL_4;
          }
        }
        v21 = FirstOverlappingExclusiveNode[1].Parent <= (_RTL_SPLAY_LINKS *)v9;
LABEL_24:
        if ( v21 )
        {
          FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
          if ( FirstOverlappingExclusiveNode )
            continue;
        }
        break;
      }
    }
  }
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v26 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  v16 = -1073741698;
LABEL_4:
  __writecr8((unsigned __int8)v17);
  return v16;
}
