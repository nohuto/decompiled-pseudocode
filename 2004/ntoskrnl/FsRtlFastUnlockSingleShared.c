/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x1402D5F9C
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x1402D6420 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1404EAB10 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1402D7C48 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlDelete @ 0x1402D8030 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402D80D0 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140330474 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1403308E8 (FsRtlSplitLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // r15
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v18; // r9
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // r12
  __int64 v23; // rdx
  _QWORD *v24; // r8
  bool v25; // cc
  __int64 v26; // r8
  unsigned __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  unsigned __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+90h] [rbp+8h] BYREF
  __int64 v44; // [rsp+98h] [rbp+10h]
  __int64 v45; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v46; // [rsp+A8h] [rbp+20h]

  v46 = a4;
  v44 = a2;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v42 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v14 = v10[1];
  v15 = 0;
  v16 = v13;
  if ( v14 )
  {
    v45 = *a4 + v9 - 1;
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                   v14,
                                   (unsigned int)&v42,
                                   (unsigned int)&v45,
                                   0,
                                   0LL);
    v18 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
    if ( FirstOverlappingSharedNode )
    {
      v19 = (_QWORD *)(FirstOverlappingSharedNode - 24);
      v20 = 0LL;
      v21 = (_QWORD *)*v19;
      v22 = v19;
      v43 = 0LL;
      if ( v21 )
      {
        v23 = v44;
        v24 = v46;
        while ( 1 )
        {
          if ( v21[4] == v44 && v21[5] == a5 && *((_DWORD *)v21 + 7) == a6 )
          {
            v25 = v21[1] <= v9;
            if ( v21[1] != v9 )
              goto LABEL_29;
            if ( v21[2] == *v46 )
            {
              if ( *(_QWORD **)(v44 + 120) == v21 + 1 )
                *(_QWORD *)(v44 + 120) = 0LL;
              if ( *v22 == v19[6] )
                v19[6] = v22;
              *v22 = *v21;
              if ( v22 == v19 )
              {
                if ( !*v19 )
                {
                  v10[1] = (KSPIN_LOCK)RtlDelete(v18);
                  ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
                  v19 = 0LL;
                }
                if ( *(_QWORD *)a1 == v21[1] )
                  FsRtlPrivateResetLowestLockOffset(a1, v23, v24, v18);
              }
              if ( v19 )
                FsRtlSplitLocks(v19, v22, v21 + 6, &v43);
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
                      v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                      v33 = (v32 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v32;
                      if ( v33 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                }
                __writecr8(v16);
                (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a7, v21 + 1);
                LOBYTE(v16) = KeAcquireSpinLockRaiseToDpc(v10);
              }
              ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v21);
              if ( a9 && v10[3] )
              {
                LOBYTE(v26) = v16;
                FsRtlPrivateCheckWaitingLocks(a1, v10, v26);
              }
              KxReleaseSpinLock(v10);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v34 = KeGetCurrentIrql();
                  if ( v34 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v34 >= 2u )
                  {
                    v35 = KeGetCurrentPrcb();
                    v36 = v35->SchedulerAssist;
                    v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                    v33 = (v37 & v36[5]) == 0;
                    v36[5] &= v37;
                    if ( v33 )
                      KiRemoveSystemWorkPriorityKick(v35);
                  }
                }
              }
              goto LABEL_27;
            }
          }
          v25 = v21[1] <= v9;
LABEL_29:
          if ( v25 )
          {
            v28 = v21[6];
            v22 = v21;
            v21 = (_QWORD *)*v21;
            if ( v20 < v28 )
              v20 = v28;
            v43 = v20;
            if ( v21 )
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
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v33 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
  }
  v15 = -1073741698;
LABEL_27:
  __writecr8((unsigned __int8)v16);
  return v15;
}
