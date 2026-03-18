/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x14053B55C
 * Callers:
 *     CcUnmapInactiveViews @ 0x14053B3F8 (CcUnmapInactiveViews.c)
 * Callees:
 *     CcReleaseBcbLockAndVacbLock @ 0x140247800 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140247840 (CcAcquireBcbLockAndVacbLock.c)
 *     CcGetVacbLargeOffset @ 0x140282064 (CcGetVacbLargeOffset.c)
 *     CcDecrementOpenCount @ 0x140282AF4 (CcDecrementOpenCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetVacbInFreeList @ 0x1402856A8 (CcSetVacbInFreeList.c)
 *     SetVacb @ 0x140285740 (SetVacb.c)
 *     CcReferenceVacbArray @ 0x140285868 (CcReferenceVacbArray.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CcCanReuseVacb @ 0x14053B018 (CcCanReuseVacb.c)
 *     CcDereferenceVacbArray @ 0x14053B0B8 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14053B160 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x14053B200 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandom @ 0x1406E2E20 (RtlRandom.c)
 *     CcUnmapVacb @ 0x1406FAEA0 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  _DWORD *RandomVacbArrayWithReference; // rdi
  int v6; // r13d
  __int64 v7; // r14
  unsigned int v8; // r15d
  bool v9; // si
  __int64 v10; // rbx
  unsigned int v11; // ebx
  KIRQL v12; // si
  unsigned int v13; // ebx
  ULONG v14; // eax
  __int64 v15; // rsi
  bool CanReuseVacb; // al
  __int64 v17; // r9
  KIRQL v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rbx
  unsigned int v24; // r12d
  int v25; // r12d
  __int64 v26; // r13
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r9
  unsigned int v31; // ecx
  KIRQL v32; // al
  KIRQL v33; // bl
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 v48; // r14
  int v49; // esi
  __int64 v50; // rbx
  bool v52; // [rsp+28h] [rbp-49h]
  unsigned int v53; // [rsp+2Ch] [rbp-45h]
  int v54; // [rsp+30h] [rbp-41h]
  unsigned int v55; // [rsp+34h] [rbp-3Dh]
  int v56; // [rsp+38h] [rbp-39h]
  int v57; // [rsp+3Ch] [rbp-35h]
  int v58; // [rsp+40h] [rbp-31h]
  __int64 v59; // [rsp+48h] [rbp-29h]
  unsigned int v60; // [rsp+50h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE v61; // [rsp+58h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v64; // [rsp+E0h] [rbp+6Fh]
  int v65; // [rsp+E8h] [rbp+77h]

  v64 = a2;
  v54 = -1;
  v55 = 0;
  v60 = 0;
  v58 = 0;
  v57 = 0;
  v4 = 0;
  v56 = 0;
  RandomVacbArrayWithReference = 0LL;
  v59 = 0LL;
  v6 = 0;
  v53 = 0;
  v7 = 0LL;
  v8 = 0;
  memset(&v61, 0, sizeof(v61));
  if ( a4 )
  {
    *a4 = 0LL;
    v57 = 1;
  }
  v65 = a3 & 1;
  v9 = !(a3 & 1);
  v52 = v9;
  do
  {
    while ( v4 < a2 && v8 <= CcVacbArraysHighestUsedIndex )
    {
      if ( RandomVacbArrayWithReference )
      {
        LODWORD(v10) = v54;
LABEL_19:
        if ( v9 )
        {
          v13 = 0;
          do
          {
            v14 = RtlRandom(&CcRandomSeed);
            v15 = (__int64)&RandomVacbArrayWithReference[8 * (v14 % (RandomVacbArrayWithReference[2] + 1))
                                                       + 4
                                                       + 2 * (v14 % (RandomVacbArrayWithReference[2] + 1))];
            if ( CcCanReuseVacb(v15, 0LL) )
            {
              if ( v15 )
                goto LABEL_32;
            }
            else
            {
              ++v13;
            }
          }
          while ( v13 <= 0x10 );
          ++CcDbgRandomFailed;
          v9 = 0;
          v52 = 0;
          goto LABEL_72;
        }
        if ( (_DWORD)v10 == -1 )
        {
          LODWORD(v10) = RandomVacbArrayWithReference[2] + 1;
          v54 = v10;
        }
        if ( !(_DWORD)v10 )
          goto LABEL_72;
        do
        {
          v10 = (unsigned int)(v10 - 1);
          CanReuseVacb = CcCanReuseVacb((__int64)&RandomVacbArrayWithReference[8 * v10 + 4 + 2 * (unsigned int)v10], v7);
        }
        while ( !CanReuseVacb && (_DWORD)v10 );
        v54 = v10;
        v15 = v17 & -(__int64)CanReuseVacb;
        if ( !v15 )
        {
          v9 = v52;
LABEL_72:
          CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
          RandomVacbArrayWithReference = 0LL;
          goto LABEL_73;
        }
LABEL_32:
        v18 = KeAcquireQueuedSpinLock(4uLL);
        if ( CcCanReuseVacb(v15, v7) )
        {
          v19 = *(_QWORD *)(v15 + 8);
          *(_QWORD *)&LockHandle.OldIrql = 0LL;
          v20 = *(_QWORD *)(v19 + 528);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 704);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v20 + 704));
          v21 = *(_QWORD *)(v15 + 8);
          if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v21 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) != v21 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            goto LABEL_70;
          }
          ++*(_DWORD *)(v21 + 4);
          ++*(_DWORD *)(v21 + 536);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v22 = *(_QWORD *)(v15 + 8);
          v23 = *(_QWORD *)(v15 + 16);
          v24 = *(_DWORD *)(v22 + 152);
          KeReleaseQueuedSpinLock(4uLL, v18);
          v25 = (v24 >> 9) & 1;
          CcAcquireBcbLockAndVacbLock(v25, (struct _FAST_MUTEX *)v22);
          v26 = *(_QWORD *)(v22 + 528);
          if ( a1 == v26 )
          {
            v27 = 0;
            if ( v23 >= 0 )
            {
              v28 = *(_QWORD *)(v22 + 32);
              if ( v23 < v28 )
              {
                v29 = v28 <= 0x2000000
                    ? *(_QWORD *)(*(_QWORD *)(v22 + 88) + 8 * ((unsigned __int64)(unsigned int)v23 >> 18))
                    : CcGetVacbLargeOffset(v22, v23);
                if ( v29 && !*(_WORD *)(v29 + 16) )
                {
                  SetVacb(v22, v23, 0LL, 0LL);
                  if ( *(_DWORD *)(v26 + 1184) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
                  {
                    if ( !v57 )
                    {
                      v31 = v56 & 0xFFFFFFFD;
                      v56 &= ~2u;
                      if ( !v59 && v65 )
                        v59 = *(_QWORD *)v29;
                      goto LABEL_45;
                    }
                  }
                  else
                  {
                    v27 = 1;
                  }
                  v31 = v56 | 2;
                  v59 = 0LL;
                  v56 |= 2u;
LABEL_45:
                  CcUnmapVacb(v29, v22, v31, v30);
                  CcReleaseBcbLockAndVacbLock(v25, (struct _FAST_MUTEX *)v22);
                  v4 = v55;
                  if ( !v27 )
                  {
                    v4 = v55 + 1;
                    v60 = 1;
                    ++v55;
                    if ( v57 )
                    {
                      v57 = 0;
                      *a4 = *(_QWORD *)v29;
                      *(_QWORD *)v29 = 0LL;
                    }
                  }
                  v32 = KeAcquireQueuedSpinLock(4uLL);
                  *(_QWORD *)(v29 + 8) = 0LL;
                  v33 = v32;
                  CcSetVacbInFreeList(v26, (_QWORD *)v29, v27);
                  KeReleaseQueuedSpinLock(4uLL, v33);
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 704), &v61);
                  CcDecrementOpenCount(v22, v34, v35);
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
                  OldIrql = v61.OldIrql;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      if ( CurrentIrql <= 0xFu && v61.OldIrql <= 0xFu && CurrentIrql >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v40 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
                        v41 = (v40 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v40;
                        if ( v41 )
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                      }
                    }
                  }
                  goto LABEL_68;
                }
              }
            }
          }
          CcReleaseBcbLockAndVacbLock(v25, (struct _FAST_MUTEX *)v22);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 704), &v61);
          CcDecrementOpenCount(v22, v42, v43);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
          OldIrql = v61.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v44 = KeGetCurrentIrql();
              if ( v44 <= 0xFu && v61.OldIrql <= 0xFu && v44 >= 2u )
              {
                v45 = KeGetCurrentPrcb();
                v46 = v45->SchedulerAssist;
                v47 = ~(unsigned __int16)(-1LL << (v61.OldIrql + 1));
                v41 = (v47 & v46[5]) == 0;
                v46[5] &= v47;
                if ( v41 )
                  KiRemoveSystemWorkPriorityKick((__int64)v45);
              }
            }
          }
          v4 = v55;
LABEL_68:
          v9 = v52;
          v7 = v59;
          __writecr8(OldIrql);
          v8 = v53;
          a2 = v64;
          v6 = v58;
        }
        else
        {
LABEL_70:
          v59 = 0LL;
          v7 = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v18);
          a2 = v64;
          v9 = v52;
          v8 = v53;
        }
      }
      else
      {
        LODWORD(v10) = -1;
        v54 = -1;
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
        v9 = v52;
        v53 = ++v8;
        if ( RandomVacbArrayWithReference )
        {
          LODWORD(v10) = -1;
          goto LABEL_15;
        }
LABEL_73:
        a2 = v64;
      }
    }
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray((__int64)RandomVacbArrayWithReference, 0);
      a2 = v64;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( v6 || v4 >= a2 )
      break;
    v6 = 1;
    v48 = (a2 - v4) << 18;
    v49 = 0;
    v58 = 1;
    ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
    v50 = CcBcbTrimNotificationList;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
        v49 |= (*(__int64 (__fastcall **)(__int64))(v50 + 16))(v48);
        ExAcquireFastMutex(&CcBcbTrimNotificationListLock);
        v50 = *(_QWORD *)v50;
      }
      while ( (__int64 *)v50 != &CcBcbTrimNotificationList );
      v8 = v53;
    }
    KeReleaseGuardedMutex(&CcBcbTrimNotificationListLock);
    v7 = v59;
    a2 = v64;
    v41 = v49 == 0;
    v9 = v52;
  }
  while ( !v41 );
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v60;
}
