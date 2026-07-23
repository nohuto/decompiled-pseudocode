/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x1404EB784
 * Callers:
 *     CcUnmapInactiveViews @ 0x1404EB620 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetVacbLargeOffset @ 0x14022C898 (CcGetVacbLargeOffset.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x14031A94C (CcSetVacbInFreeList.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14031BA74 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14031BAF4 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReferenceVacbArray @ 0x14031DB04 (CcReferenceVacbArray.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     SetVacb @ 0x14031E6D0 (SetVacb.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x1404EB240 (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x1404EB2E0 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404EB388 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1404EB428 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandom @ 0x14061C280 (RtlRandom.c)
 *     CcUnmapVacb @ 0x140701758 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  _DWORD *RandomVacbArrayWithReference; // rdi
  int v6; // r13d
  __int64 v7; // r15
  unsigned int v8; // r14d
  bool v9; // si
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // si
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  ULONG v15; // eax
  bool CanReuseVacb; // al
  bool v17; // dl
  __int64 v18; // r9
  __int64 v19; // rsi
  bool v20; // al
  __int64 v21; // r9
  KIRQL v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  _QWORD *v26; // rcx
  __int64 Partition; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rsi
  unsigned int v31; // r12d
  int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // r14
  int v39; // r15d
  unsigned int v40; // ecx
  KIRQL v41; // bl
  char v42; // dl
  char v43; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  bool v49; // zf
  char v50; // dl
  char v51; // r8
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  __int64 v56; // r14
  int v57; // esi
  __int64 v58; // rbx
  bool v60; // [rsp+28h] [rbp-49h]
  unsigned int v61; // [rsp+2Ch] [rbp-45h]
  int v62; // [rsp+30h] [rbp-41h]
  unsigned int v63; // [rsp+34h] [rbp-3Dh]
  int v64; // [rsp+38h] [rbp-39h]
  int v65; // [rsp+3Ch] [rbp-35h]
  int v66; // [rsp+40h] [rbp-31h]
  __int64 v67; // [rsp+48h] [rbp-29h]
  unsigned int v68; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE v69; // [rsp+58h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v72; // [rsp+E0h] [rbp+6Fh]
  int v73; // [rsp+E8h] [rbp+77h]

  v72 = a2;
  v62 = -1;
  v63 = 0;
  v68 = 0;
  v66 = 0;
  v65 = 0;
  v4 = 0;
  v64 = 0;
  RandomVacbArrayWithReference = 0LL;
  v67 = 0LL;
  v6 = 0;
  v61 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(&v69, 0, sizeof(v69));
  if ( a4 )
  {
    *a4 = 0LL;
    v65 = 1;
  }
  v73 = a3 & 1;
  v9 = !(a3 & 1);
  v60 = v9;
  do
  {
    while ( v4 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
      {
        LODWORD(v10) = v62;
LABEL_19:
        if ( v9 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = v13;
            v15 = RtlRandom(&CcRandomSeed);
            CanReuseVacb = CcCanReuseVacb(
                             (__int64)&RandomVacbArrayWithReference[8 * (v15 % (RandomVacbArrayWithReference[2] + 1))
                                                                  + 4
                                                                  + 2 * (v15 % (RandomVacbArrayWithReference[2] + 1))],
                             0LL);
            v13 = v14 + 1;
            if ( CanReuseVacb )
              v13 = v14;
            v19 = v18 & -(__int64)CanReuseVacb;
            if ( v19 )
              break;
            if ( v13 > 0x10 )
            {
              ++CcDbgRandomFailed;
              v9 = v17;
              v60 = v17;
              goto LABEL_72;
            }
          }
        }
        else
        {
          if ( (_DWORD)v10 == -1 )
          {
            LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
            v62 = v10;
          }
          if ( !(_DWORD)v10 )
            goto LABEL_72;
          do
          {
            v10 = (unsigned int)(v10 - 1);
            v20 = CcCanReuseVacb((__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10], v7);
          }
          while ( !v20 && (_DWORD)v10 );
          v62 = v10;
          v19 = v21 & -(__int64)v20;
          if ( !v19 )
          {
            v9 = v60;
LABEL_72:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_73;
          }
        }
        v22 = KeAcquireQueuedSpinLock(4uLL);
        if ( CcCanReuseVacb(v19, v7) )
        {
          v26 = *(_QWORD **)(v19 + 8);
          memset(&LockHandle, 0, sizeof(LockHandle));
          Partition = CcGetPartition(v26, v23, v24, v25);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
          v28 = *(_QWORD *)(v19 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v28 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v28 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            goto LABEL_70;
          }
          ++*(_DWORD *)(v28 + 4);
          ++*(_DWORD *)(v28 + 536);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v29 = *(_QWORD *)(v19 + 16);
          v30 = *(_QWORD *)(v19 + 8);
          v31 = *(_DWORD *)(v30 + 152);
          KeReleaseQueuedSpinLock(4uLL, v22);
          v32 = (v31 >> 9) & 1;
          CcAcquireBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)v30);
          v36 = CcGetPartition((_QWORD *)v30, v33, v34, v35);
          if ( a1 == v36 && v29 >= 0 )
          {
            v37 = *(_QWORD *)(v30 + 32);
            if ( v29 < v37 )
            {
              v38 = v37 <= 0x2000000
                  ? *(_QWORD *)(*(_QWORD *)(v30 + 88) + 8 * ((unsigned __int64)(unsigned int)v29 >> 18))
                  : CcGetVacbLargeOffset(v30, v29);
              if ( v38 && !*(_WORD *)(v38 + 16) )
              {
                SetVacb(v30, v29, 0LL, 0LL);
                if ( *(_DWORD *)(v36 + 920) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
                {
                  v39 = 0;
                  if ( !v65 )
                  {
                    v40 = v64 & 0xFFFFFFFD;
                    v64 &= ~2u;
                    if ( !v67 && v73 )
                      v67 = *(_QWORD *)v38;
                    goto LABEL_45;
                  }
                }
                else
                {
                  v39 = 1;
                }
                v40 = v64 | 2;
                v67 = 0LL;
                v64 |= 2u;
LABEL_45:
                CcUnmapVacb(v38, v30, v40);
                CcReleaseBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)v30);
                v4 = v63;
                if ( !v39 )
                {
                  v4 = v63 + 1;
                  v68 = 1;
                  ++v63;
                  if ( v65 )
                  {
                    v65 = 0;
                    *a4 = *(_QWORD *)v38;
                    *(_QWORD *)v38 = 0LL;
                  }
                }
                v41 = KeAcquireQueuedSpinLock(4uLL);
                *(_QWORD *)(v38 + 8) = 0LL;
                CcSetVacbInFreeList(v36, (_QWORD *)v38, v39);
                KeReleaseQueuedSpinLock(4uLL, v41);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 128), &v69);
                CcDecrementOpenCount(v30, v42, v43);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69);
                OldIrql = v69.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && v69.OldIrql <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v48 = ~(unsigned __int16)(-1LL << (v69.OldIrql + 1));
                      v49 = (v48 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v48;
                      if ( v49 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                }
                v7 = v67;
                goto LABEL_68;
              }
            }
          }
          CcReleaseBcbLockAndVacbLock(v32, (struct _FAST_MUTEX *)v30);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v36 + 128), &v69);
          CcDecrementOpenCount(v30, v50, v51);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69);
          OldIrql = v69.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v52 = KeGetCurrentIrql();
              if ( v52 <= 0xFu && v69.OldIrql <= 0xFu && v52 >= 2u )
              {
                v53 = KeGetCurrentPrcb();
                v54 = v53->SchedulerAssist;
                v55 = ~(unsigned __int16)(-1LL << (v69.OldIrql + 1));
                v49 = (v55 & v54[5]) == 0;
                v54[5] &= v55;
                if ( v49 )
                  KiRemoveSystemWorkPriorityKick((__int64)v53);
              }
            }
          }
          v4 = v63;
LABEL_68:
          v9 = v60;
          __writecr8(OldIrql);
          v8 = v61;
          a2 = v72;
          v6 = v66;
        }
        else
        {
LABEL_70:
          v67 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v22);
          a2 = v72;
          v9 = v60;
          v8 = v61;
        }
      }
      else
      {
        LODWORD(v10) = -1;
        v62 = -1;
        if ( v9 )
        {
          RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_15:
          if ( RandomVacbArrayWithReference[1] == 1 )
            goto LABEL_72;
          goto LABEL_19;
        }
        v11 = v8;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          RandomVacbArrayWithReference = CcReferenceVacbArray(v11);
          if ( RandomVacbArrayWithReference )
            break;
          if ( ++v11 >= 0x500 )
          {
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_13;
          }
        }
        CcRecalculateVacbArrayHighwaterMark((__int64)RandomVacbArrayWithReference);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v12);
        v9 = v60;
        v61 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
LABEL_73:
        a2 = v72;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v72;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v56 = (a2 - v4) << 18;
    v57 = 0;
    v66 = 1;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v58 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v57 |= (*(__int64 (__fastcall **)(__int64))(v58 + 16))(v56);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v58 = *(_QWORD *)v58;
      }
      while ( (__int64 *)v58 != &CcBcbTrimNotificationList );
      v7 = v67;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v8 = v61;
    a2 = v72;
    v49 = v57 == 0;
    v9 = v60;
  }
  while ( !v49 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v68;
}
