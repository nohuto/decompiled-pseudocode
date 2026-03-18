/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x14022E960
 * Callers:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14022CA64 (CcNotifyOfMappedWrite.c)
 * Callees:
 *     CcDeductDirtyPages @ 0x14022BD4C (CcDeductDirtyPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     CcFindBcb @ 0x140231CF4 (CcFindBcb.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FF48C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcFindBitmapRangeToClean @ 0x14030806C (CcFindBitmapRangeToClean.c)
 *     FsRtlIsNtstatusExpected @ 0x140312560 (FsRtlIsNtstatusExpected.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        char a8)
{
  _QWORD *v10; // rax
  __int64 BitmapRangeToClean; // r12
  int *v12; // rsi
  int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r13
  char Bcb; // al
  __int64 v21; // rcx
  __int64 v22; // r13
  struct _FAST_MUTEX *v23; // r13
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r11d
  unsigned int v28; // ecx
  __int64 v29; // rdi
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v35; // ecx
  __int64 v36; // r13
  __int64 v37; // r9
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r13
  unsigned __int64 v44; // rax
  int v45; // r8d
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rbx
  unsigned int v52; // eax
  int v53; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v67; // eax
  bool v68; // zf
  struct _FAST_MUTEX *Mutex; // [rsp+50h] [rbp-118h]
  int v70; // [rsp+58h] [rbp-110h]
  __int64 v71; // [rsp+60h] [rbp-108h]
  unsigned __int64 v72; // [rsp+68h] [rbp-100h]
  __int64 v73; // [rsp+70h] [rbp-F8h]
  __int64 v74; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int64 v75; // [rsp+80h] [rbp-E8h]
  int v76; // [rsp+94h] [rbp-D4h]
  __int64 v77; // [rsp+A8h] [rbp-C0h]
  __int64 v78; // [rsp+B0h] [rbp-B8h]
  __int64 Partition; // [rsp+B8h] [rbp-B0h]
  unsigned int *v80; // [rsp+C0h] [rbp-A8h]
  __int64 v81; // [rsp+E8h] [rbp-80h]
  __int64 v82; // [rsp+F0h] [rbp-78h]
  __int64 v83; // [rsp+100h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp-60h] BYREF

  v10 = (_QWORD *)a1;
  v80 = a6;
  v78 = a1;
  v74 = 0LL;
  v77 = 0LL;
  v70 = 0;
  v76 = 0;
  BitmapRangeToClean = 0LL;
  v72 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v71 = 0LL;
  v81 = 0LL;
  v75 = 0LL;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v82 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
  {
    PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
    v10 = (_QWORD *)a1;
  }
  Partition = CcGetPartition(v10);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (struct _FAST_MUTEX *)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v15 = a1;
  v16 = *(_QWORD *)(a1 + 160);
  v73 = v16;
  if ( v16 && *(_DWORD *)(v16 + 8) && (*(_DWORD *)(v16 + 4) || a3) )
  {
    if ( !a2 )
    {
      v36 = 0LL;
      if ( !a3 )
        v36 = *(_QWORD *)(v16 + 32);
      BitmapRangeToClean = CcFindBitmapRangeToClean(v16, v36);
      v38 = *(unsigned int *)(BitmapRangeToClean + 28);
      v39 = *(_QWORD *)(BitmapRangeToClean + 16);
      if ( v36 > (__int64)(v38 + v39) )
        v36 = v39 + *(unsigned int *)(BitmapRangeToClean + 24);
      v40 = *(_QWORD *)(BitmapRangeToClean + 40);
      goto LABEL_70;
    }
    v36 = *a2 >> 12;
    v71 = v36;
    v14 = (a3 + *a2 - 1) >> 12;
    v57 = CcFindBitmapRangeToClean(v16, v36);
    BitmapRangeToClean = v57;
    v39 = *(_QWORD *)(v57 + 16);
    if ( v14 >= v39 + *(unsigned int *)(v57 + 24) )
    {
      v38 = *(unsigned int *)(v57 + 28);
      if ( v36 <= (__int64)(v38 + v39) )
      {
        v40 = *(_QWORD *)(v57 + 40);
        v37 = v73;
        if ( v14 < (__int64)(v38 + v39) )
        {
          v41 = v40 + 4 * (((unsigned __int64)(v14 - v39) >> 5) & 0x7FFFFFF);
          goto LABEL_71;
        }
LABEL_70:
        v41 = v40 + 4 * (v38 >> 5);
LABEL_71:
        v72 = v41;
        v42 = v36;
        v43 = v39 + *(unsigned int *)(BitmapRangeToClean + 24);
        if ( v42 >= v43 )
          v43 = v42;
        v71 = v43;
        v44 = (unsigned int)(v43 - *(_DWORD *)(BitmapRangeToClean + 16));
        v45 = v43 - *(_DWORD *)(BitmapRangeToClean + 16);
        v75 = v44;
        v12 = (int *)(v40 + 4 * (v44 >> 5));
        v13 = -1 << (v43 % 32);
        v46 = *v12;
        if ( (*v12 & v13) == 0 )
        {
          v13 = -1;
          v43 &= 0xFFFFFFFFFFFFFFE0uLL;
          v58 = v72;
          do
          {
            ++v12;
            v43 += 32LL;
            v71 = v43;
            if ( (unsigned __int64)v12 > v58 )
            {
              if ( !v27 )
                *(_DWORD *)(BitmapRangeToClean + 28) = v45 - 1;
              do
              {
                BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
                if ( BitmapRangeToClean == v37 + 16 )
                {
                  if ( v27 )
                    goto LABEL_6;
                  BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
                }
              }
              while ( !*(_DWORD *)(BitmapRangeToClean + 32) );
              v59 = *(unsigned int *)(BitmapRangeToClean + 24);
              v60 = *(_QWORD *)(BitmapRangeToClean + 16);
              if ( v14 < (__int64)(v60 + v59) )
                goto LABEL_6;
              v61 = *(unsigned int *)(BitmapRangeToClean + 28);
              if ( v43 > (__int64)(v61 + v60) )
                goto LABEL_6;
              v62 = *(_QWORD *)(BitmapRangeToClean + 40);
              v12 = (int *)(v62 + 4 * (v59 >> 5));
              v72 = v62 + 4 * (v61 >> 5);
              v43 = v60 + ((unsigned int)v59 & 0xFFFFFFE0);
              v71 = v43;
              v45 = *(_DWORD *)(BitmapRangeToClean + 24);
              v75 = (unsigned int)v59;
              v37 = v73;
              v58 = v72;
            }
            v46 = *v12;
          }
          while ( !*v12 );
        }
        v13 = -v13;
        if ( (v46 & v13) == 0 )
        {
          do
          {
            v13 *= 2;
            ++v43;
          }
          while ( (v46 & v13) == 0 );
          v71 = v43;
        }
        if ( !a2 )
        {
LABEL_76:
          if ( (gCcTrace & 1) != 0 )
          {
            if ( a2 )
              v63 = *a2;
            else
              v63 = 0LL;
            DbgPrintEx(
              0x7Fu,
              0,
              "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
              v63,
              v27,
              (const void *)v15,
              v43,
              (const void *)BitmapRangeToClean,
              *(_DWORD *)(BitmapRangeToClean + 32));
            v27 = a3;
          }
          while ( (v13 & *v12) != 0 )
          {
            if ( a2 && v43 + *a6 >= (unsigned int)((*a2 + 4095 + v27) >> 12) )
              break;
            if ( (unsigned __int64)v12 > *(_QWORD *)(BitmapRangeToClean + 40)
                                       + 4 * ((unsigned __int64)*(unsigned int *)(BitmapRangeToClean + 28) >> 5) )
              KeBugCheckEx(0x34u, 0x11CDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            if ( !a2 && *a6 >= CcMaxLazyWritePages )
              break;
            *v12 -= v13;
            ++*a6;
            v13 *= 2;
            if ( !v13 )
            {
              ++v12;
              v13 = 1;
              if ( (unsigned __int64)v12 > v72 )
                break;
            }
          }
          v47 = *a6;
          v48 = *(_DWORD *)(v73 + 4);
          if ( *a6 < v48 )
            v49 = v48 - v47;
          else
            v49 = 0;
          *(_DWORD *)(v73 + 4) = v49;
          v50 = *(_DWORD *)(v73 + 8);
          if ( v50 < v47 )
            KeBugCheckEx(0x34u, 0x11FCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_DWORD *)(v73 + 8) = v50 - v47;
          *(_DWORD *)(BitmapRangeToClean + 32) -= v47;
          v51 = Partition;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
          CcDeductDirtyPages(a1, *a6);
          v52 = *(_DWORD *)(v51 + 496);
          if ( v52 <= *a6 )
            v53 = 0;
          else
            v53 = v52 - *a6;
          *(_DWORD *)(v51 + 496) = v53;
          if ( !*(_DWORD *)(a1 + 112) )
            CcInsertIntoCleanSharedCacheMapList(a1);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v68 = (v67 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v67;
                if ( v68 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          if ( *(_DWORD *)(BitmapRangeToClean + 32) )
          {
            v56 = *v80;
            if ( *(_DWORD *)(BitmapRangeToClean + 24) == (_DWORD)v75 )
              *(_DWORD *)(BitmapRangeToClean + 24) = v56 + v43 - *(_DWORD *)(BitmapRangeToClean + 16);
            if ( a3 )
              goto LABEL_95;
            v55 = v56 + v43;
          }
          else
          {
            *(_DWORD *)(BitmapRangeToClean + 24) = -1;
            *(_DWORD *)(BitmapRangeToClean + 28) = 0;
            v55 = *(_QWORD *)(BitmapRangeToClean + 16) + 0x2000LL;
          }
          *(_QWORD *)(v73 + 32) = v55;
LABEL_95:
          if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
            *(_DWORD *)(a1 + 192) = *(_DWORD *)(v73 + 4);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
          *a6 <<= 12;
          *a5 = v43 << 12;
          *a7 = 0LL;
          goto LABEL_41;
        }
        if ( v43 < (v27 + *a2 + 4095) >> 12 )
        {
          if ( *(_QWORD *)(v15 + 16) == v15 + 16 )
            goto LABEL_76;
          v70 = 1;
        }
      }
    }
  }
LABEL_6:
  v17 = (__int64 *)(v78 + 200);
  v18 = v77;
  while ( 2 )
  {
    v19 = *(_QWORD *)(v15 + 24) - 16LL;
    v74 = v19;
    if ( (*(_DWORD *)(v15 + 152) & 0x200) != 0 )
    {
      if ( a2 )
        v17 = a2;
      if ( *v17 )
      {
        v83 = *v17 + 4096;
        Bcb = CcFindBcb(v15, v17, &v83, &v74);
        v15 = a1;
        if ( Bcb )
        {
          v19 = v74;
        }
        else
        {
          v19 = *(_QWORD *)(v74 + 24) - 16LL;
          v74 = v19;
        }
      }
    }
    v21 = v15 + 16;
    if ( v19 + 16 == v15 + 16 )
    {
LABEL_17:
      v23 = (struct _FAST_MUTEX *)(a1 + 280);
      goto LABEL_18;
    }
    while ( 1 )
    {
      if ( *(_WORD *)v19 != 765 )
        goto LABEL_15;
      if ( (*(_DWORD *)(v15 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v19 + 48) > *a4 )
      {
        v22 = *(_QWORD *)(v19 + 24);
        ++CcDbgLsnLargerThanHint;
        goto LABEL_16;
      }
      if ( a2 )
      {
        v27 = a3;
        if ( *a2 + a3 <= *(_QWORD *)(v19 + 8) )
        {
          v23 = (struct _FAST_MUTEX *)(a1 + 280);
          v24 = a5;
          goto LABEL_32;
        }
      }
      v25 = *a6;
      if ( (_DWORD)v25 )
      {
        v24 = a5;
        if ( !*(_BYTE *)(v19 + 2)
          || (v26 = *(_QWORD *)(v19 + 8), v26 != *a5 + v25)
          || *(_DWORD *)(v19 + 64)
          || (v26 & 0x1FFFFFF) == 0 )
        {
          v23 = (struct _FAST_MUTEX *)(a1 + 280);
          goto LABEL_31;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v19 + 2) )
          goto LABEL_15;
        if ( a2 )
        {
          if ( *a2 >= *(_QWORD *)(v19 + 32) )
            goto LABEL_15;
        }
        else if ( *(_QWORD *)(v19 + 8) < *(_QWORD *)(v15 + 200) )
        {
          goto LABEL_15;
        }
        if ( v70 && v71 <= (unsigned int)(*(__int64 *)(v19 + 8) >> 12) )
        {
          v27 = a3;
          goto LABEL_147;
        }
      }
      ++*(_DWORD *)(v19 + 64);
      KeReleaseGuardedMutex(Mutex);
      if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
      {
        CcUnpinFileDataEx((PVOID)v19);
        ExAcquireFastMutex(Mutex);
        v15 = a1;
LABEL_52:
        v70 = 0;
        v35 = *a6;
        if ( !*a6 )
          *a5 = *(_QWORD *)(v19 + 8);
        *a7 = v19;
        *a6 = *(_DWORD *)(v19 + 4) + v35;
        if ( (*(_DWORD *)(v15 + 152) & 0x3000000) != 0 && *(_QWORD *)(v19 + 48) > v18 )
          v18 = *(_QWORD *)(v19 + 48);
        v21 = v15 + 16;
LABEL_15:
        v22 = *(_QWORD *)(v19 + 24);
        goto LABEL_16;
      }
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 72), *a6 == 0) )
        break;
      ExAcquireFastMutex(Mutex);
      if ( *(_BYTE *)(v19 + 2) )
      {
        v15 = a1;
        if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v19 + 48) <= *a4 )
          goto LABEL_52;
        ++CcDbgLsnLargerThanHint;
      }
      KeReleaseGuardedMutex(Mutex);
      CcUnpinFileDataEx((PVOID)v19);
      v23 = (struct _FAST_MUTEX *)(a1 + 280);
      ExAcquireFastMutex(Mutex);
      if ( *a6 )
        goto LABEL_18;
      v15 = a1;
      v22 = *(_QWORD *)(a1 + 24);
      v21 = a1 + 16;
LABEL_16:
      v19 = v22 - 16;
      v74 = v19;
      if ( v19 + 16 == v21 )
        goto LABEL_17;
    }
    CcUnpinFileDataEx((PVOID)v19);
    v23 = (struct _FAST_MUTEX *)(a1 + 280);
    ExAcquireFastMutex(Mutex);
LABEL_18:
    v24 = a5;
LABEL_31:
    v27 = a3;
LABEL_32:
    if ( v70 )
    {
      v15 = a1;
LABEL_147:
      v43 = v71;
      goto LABEL_76;
    }
    v28 = *a6;
    if ( *a6 )
    {
      v29 = a1;
      if ( !a2 )
      {
        *(_QWORD *)(a1 + 200) = *v24 + v28;
        v30 = v28 >> 12;
        v31 = *(_DWORD *)(a1 + 192);
        if ( v31 <= v30 )
          *(_DWORD *)(a1 + 192) = 0;
        else
          *(_DWORD *)(a1 + 192) = v31 - v30;
      }
    }
    else
    {
      v15 = a1;
      v17 = (__int64 *)(a1 + 200);
      if ( *(_QWORD *)(a1 + 200) && !a2 )
      {
        *v17 = 0LL;
        continue;
      }
      v29 = a1;
    }
    break;
  }
  KeReleaseGuardedMutex(v23);
  if ( v18 )
  {
    v33 = *(_QWORD *)(v78 + 240);
    if ( (*(_DWORD *)(v29 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(v29 + 248))(v33, v18);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(v33 + 8))(*(_QWORD *)v33, v18);
  }
LABEL_41:
  if ( a8 )
  {
    LOBYTE(v32) = 1;
    PsBoostThreadIoEx(KeGetCurrentThread(), v32, 0LL, 0LL);
  }
  return *a6 != 0;
}
