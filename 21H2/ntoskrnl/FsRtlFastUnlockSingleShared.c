/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x140363F58
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140363BD0 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1404EFEC0 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021D334 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x14021D7A8 (FsRtlSplitLocks.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140364180 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlDelete @ 0x1403646B0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140364750 (FsRtlPrivateResetLowestLockOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  KSPIN_LOCK *v10; // r15
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v18; // r9
  _RTL_SPLAY_LINKS *v19; // rsi
  _RTL_SPLAY_LINKS *v20; // rax
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v22; // r12
  bool v23; // cc
  _RTL_SPLAY_LINKS *v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  _RTL_SPLAY_LINKS *v39; // [rsp+30h] [rbp-58h] BYREF
  _RTL_SPLAY_LINKS *v40; // [rsp+90h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v41; // [rsp+98h] [rbp+10h]
  __int64 v42; // [rsp+A0h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v41 = a2;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v39 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v14 = v10[1];
  v15 = 0;
  v16 = v13;
  if ( v14 )
  {
    v42 = (__int64)v9 + (_QWORD)*a4 - 1;
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                   v14,
                                   (unsigned int)&v39,
                                   (unsigned int)&v42,
                                   0,
                                   0LL);
    v18 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
    if ( FirstOverlappingSharedNode )
    {
      v19 = (_RTL_SPLAY_LINKS *)(FirstOverlappingSharedNode - 24);
      v20 = 0LL;
      Parent = v19->Parent;
      v22 = v19;
      v40 = 0LL;
      if ( Parent )
      {
        while ( 1 )
        {
          if ( Parent[1].LeftChild == v41 && Parent[1].RightChild == a5 && HIDWORD(Parent[1].Parent) == a6 )
          {
            v23 = Parent->LeftChild <= v9;
            if ( Parent->LeftChild != v9 )
              goto LABEL_28;
            if ( Parent->RightChild == *v43 )
            {
              if ( v41[5].Parent == (_RTL_SPLAY_LINKS *)&Parent->LeftChild )
                v41[5].Parent = 0LL;
              if ( v22->Parent == v19[2].Parent )
                v19[2].Parent = v22;
              v22->Parent = Parent->Parent;
              if ( v22 == v19 )
              {
                if ( !v19->Parent )
                {
                  v10[1] = (KSPIN_LOCK)RtlDelete(v18);
                  ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
                  v19 = 0LL;
                }
                if ( *(_RTL_SPLAY_LINKS **)a1 == Parent->LeftChild )
                  FsRtlPrivateResetLowestLockOffset(a1);
              }
              if ( v19 )
                FsRtlSplitLocks((__int64)v19, v22, (unsigned __int64 *)&Parent[2], &v40);
              if ( !a8 && *(_QWORD *)(a1 + 16) )
              {
                KxReleaseSpinLock(v10);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                      v30 = (v29 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v29;
                      if ( v30 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                }
                __writecr8(v16);
                (*(void (__fastcall **)(__int64, _RTL_SPLAY_LINKS **))(a1 + 16))(a7, &Parent->LeftChild);
                LOBYTE(v16) = KeAcquireSpinLockRaiseToDpc(v10);
              }
              ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
              if ( a9 && v10[3] )
                FsRtlPrivateCheckWaitingLocks(a1, v10, v16);
              KxReleaseSpinLock(v10);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v31 = KeGetCurrentIrql();
                  if ( v31 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v31 >= 2u )
                  {
                    v32 = KeGetCurrentPrcb();
                    v33 = v32->SchedulerAssist;
                    v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                    v30 = (v34 & v33[5]) == 0;
                    v33[5] &= v34;
                    if ( v30 )
                      KiRemoveSystemWorkPriorityKick(v32);
                  }
                }
              }
              goto LABEL_26;
            }
          }
          v23 = Parent->LeftChild <= v9;
LABEL_28:
          if ( v23 )
          {
            v25 = Parent[2].Parent;
            v22 = Parent;
            Parent = Parent->Parent;
            if ( v20 < v25 )
              v20 = v25;
            v40 = v20;
            if ( Parent )
              continue;
          }
          break;
        }
      }
    }
  }
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v30 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  v15 = -1073741698;
LABEL_26:
  __writecr8((unsigned __int8)v16);
  return v15;
}
