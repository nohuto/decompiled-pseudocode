/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x14021DEB4
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x14021DDD0 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x140542018 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14021DCF4 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14021EF80 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021F280 (FsRtlPrivateCheckWaitingLocks.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
  __int64 v22; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  __int64 v36; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v38; // [rsp+88h] [rbp+20h]

  v38 = a4;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v37 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v15 = (_QWORD *)v10[2];
  v16 = 0;
  v17 = v14;
  if ( v15 )
  {
    v36 = (__int64)*a4 + v9 - 1;
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        v15,
                                                        &v37,
                                                        (unsigned __int64 *)&v36,
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
          if ( FirstOverlappingExclusiveNode[1].LeftChild == *v38 )
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
                    v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                    v27 = (v26 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v26;
                    if ( v27 )
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
            {
              LOBYTE(v22) = v17;
              FsRtlPrivateCheckWaitingLocks(a1, v10, v22);
            }
            KxReleaseSpinLock(v10);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v28 = KeGetCurrentIrql();
                if ( v28 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v28 >= 2u )
                {
                  v29 = KeGetCurrentPrcb();
                  v30 = v29->SchedulerAssist;
                  v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                  v27 = (v31 & v30[5]) == 0;
                  v30[5] &= v31;
                  if ( v27 )
                    KiRemoveSystemWorkPriorityKick(v29);
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
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v27 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
  }
  v16 = -1073741698;
LABEL_4:
  __writecr8((unsigned __int8)v17);
  return v16;
}
