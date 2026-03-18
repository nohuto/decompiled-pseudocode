/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x1404E99B4
 * Callers:
 *     CcUnmapInactiveViews @ 0x1404E9850 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140298304 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140298384 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReferenceVacbArray @ 0x14029A394 (CcReferenceVacbArray.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     SetVacb @ 0x14029AF60 (SetVacb.c)
 *     CcSetVacbInFreeList @ 0x14029CA88 (CcSetVacbInFreeList.c)
 *     CcGetVacbLargeOffset @ 0x14030BE30 (CcGetVacbLargeOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x1404E9470 (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x1404E9510 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404E95B8 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1404E9658 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcUnmapVacb @ 0x14067DAE8 (CcUnmapVacb.c)
 *     RtlRandom @ 0x1406DD300 (RtlRandom.c)
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
  _QWORD *v23; // rcx
  __int64 Partition; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rsi
  unsigned int v28; // r12d
  int v29; // r12d
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // r14
  int v33; // r15d
  unsigned int v34; // ecx
  KIRQL v35; // bl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  bool v41; // zf
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  __int64 v46; // r14
  int v47; // esi
  __int64 v48; // rbx
  bool v50; // [rsp+28h] [rbp-49h]
  unsigned int v51; // [rsp+2Ch] [rbp-45h]
  int v52; // [rsp+30h] [rbp-41h]
  unsigned int v53; // [rsp+34h] [rbp-3Dh]
  int v54; // [rsp+38h] [rbp-39h]
  int v55; // [rsp+3Ch] [rbp-35h]
  int v56; // [rsp+40h] [rbp-31h]
  __int64 v57; // [rsp+48h] [rbp-29h]
  unsigned int v58; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE v59; // [rsp+58h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v62; // [rsp+E0h] [rbp+6Fh]
  int v63; // [rsp+E8h] [rbp+77h]

  v62 = a2;
  v52 = -1;
  v53 = 0;
  v58 = 0;
  v56 = 0;
  v55 = 0;
  v4 = 0;
  v54 = 0;
  RandomVacbArrayWithReference = 0LL;
  v57 = 0LL;
  v6 = 0;
  v51 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(&v59, 0, sizeof(v59));
  if ( a4 )
  {
    *a4 = 0LL;
    v55 = 1;
  }
  v63 = a3 & 1;
  v9 = !(a3 & 1);
  v50 = v9;
  do
  {
    while ( v4 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
      {
        LODWORD(v10) = v52;
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
              v50 = v17;
              goto LABEL_72;
            }
          }
        }
        else
        {
          if ( (_DWORD)v10 == -1 )
          {
            LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
            v52 = v10;
          }
          if ( !(_DWORD)v10 )
            goto LABEL_72;
          do
          {
            v10 = (unsigned int)(v10 - 1);
            v20 = CcCanReuseVacb((__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10], v7);
          }
          while ( !v20 && (_DWORD)v10 );
          v52 = v10;
          v19 = v21 & -(__int64)v20;
          if ( !v19 )
          {
            v9 = v50;
LABEL_72:
            CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_73;
          }
        }
        v22 = KeAcquireQueuedSpinLock(4uLL);
        if ( CcCanReuseVacb(v19, v7) )
        {
          v23 = *(_QWORD **)(v19 + 8);
          memset(&LockHandle, 0, sizeof(LockHandle));
          Partition = CcGetPartition(v23);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
          v25 = *(_QWORD *)(v19 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v25 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v25 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            goto LABEL_70;
          }
          ++*(_DWORD *)(v25 + 4);
          ++*(_DWORD *)(v25 + 536);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v26 = *(_QWORD *)(v19 + 16);
          v27 = *(_QWORD *)(v19 + 8);
          v28 = *(_DWORD *)(v27 + 152);
          KeReleaseQueuedSpinLock(4uLL, v22);
          v29 = (v28 >> 9) & 1;
          CcAcquireBcbLockAndVacbLock(v29, (struct _FAST_MUTEX *)v27);
          v30 = CcGetPartition((_QWORD *)v27);
          if ( a1 == v30 && v26 >= 0 )
          {
            v31 = *(_QWORD *)(v27 + 32);
            if ( v26 < v31 )
            {
              v32 = v31 <= 0x2000000
                  ? *(_QWORD *)(*(_QWORD *)(v27 + 88) + 8 * ((unsigned __int64)(unsigned int)v26 >> 18))
                  : CcGetVacbLargeOffset(v27, v26);
              if ( v32 && !*(_WORD *)(v32 + 16) )
              {
                SetVacb(v27, v26, 0LL, 0LL);
                if ( *(_DWORD *)(v30 + 920) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
                {
                  v33 = 0;
                  if ( !v55 )
                  {
                    v34 = v54 & 0xFFFFFFFD;
                    v54 &= ~2u;
                    if ( !v57 && v63 )
                      v57 = *(_QWORD *)v32;
                    goto LABEL_45;
                  }
                }
                else
                {
                  v33 = 1;
                }
                v34 = v54 | 2;
                v57 = 0LL;
                v54 |= 2u;
LABEL_45:
                CcUnmapVacb(v32, v27, v34);
                CcReleaseBcbLockAndVacbLock(v29, (struct _FAST_MUTEX *)v27);
                v4 = v53;
                if ( !v33 )
                {
                  v4 = v53 + 1;
                  v58 = 1;
                  ++v53;
                  if ( v55 )
                  {
                    v55 = 0;
                    *a4 = *(_QWORD *)v32;
                    *(_QWORD *)v32 = 0LL;
                  }
                }
                v35 = KeAcquireQueuedSpinLock(4uLL);
                *(_QWORD *)(v32 + 8) = 0LL;
                CcSetVacbInFreeList(v30, (_QWORD *)v32, v33);
                KeReleaseQueuedSpinLock(4uLL, v35);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 128), &v59);
                CcDecrementOpenCount(v27);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v59);
                OldIrql = v59.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && v59.OldIrql <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v40 = ~(unsigned __int16)(-1LL << (v59.OldIrql + 1));
                      v41 = (v40 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v40;
                      if ( v41 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                }
                v7 = v57;
                goto LABEL_68;
              }
            }
          }
          CcReleaseBcbLockAndVacbLock(v29, (struct _FAST_MUTEX *)v27);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 128), &v59);
          CcDecrementOpenCount(v27);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v59);
          OldIrql = v59.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v42 = KeGetCurrentIrql();
              if ( v42 <= 0xFu && v59.OldIrql <= 0xFu && v42 >= 2u )
              {
                v43 = KeGetCurrentPrcb();
                v44 = v43->SchedulerAssist;
                v45 = ~(unsigned __int16)(-1LL << (v59.OldIrql + 1));
                v41 = (v45 & v44[5]) == 0;
                v44[5] &= v45;
                if ( v41 )
                  KiRemoveSystemWorkPriorityKick((__int64)v43);
              }
            }
          }
          v4 = v53;
LABEL_68:
          v9 = v50;
          __writecr8(OldIrql);
          v8 = v51;
          a2 = v62;
          v6 = v56;
        }
        else
        {
LABEL_70:
          v57 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v22);
          a2 = v62;
          v9 = v50;
          v8 = v51;
        }
      }
      else
      {
        LODWORD(v10) = -1;
        v52 = -1;
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
        v9 = v50;
        v51 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
LABEL_73:
        a2 = v62;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v62;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v46 = (a2 - v4) << 18;
    v47 = 0;
    v56 = 1;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v48 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v47 |= (*(__int64 (__fastcall **)(__int64))(v48 + 16))(v46);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v48 = *(_QWORD *)v48;
      }
      while ( (__int64 *)v48 != &CcBcbTrimNotificationList );
      v7 = v57;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v8 = v51;
    a2 = v62;
    v41 = v47 == 0;
    v9 = v50;
  }
  while ( !v41 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v58;
}
