/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x14031AC90
 * Callers:
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1402D1EDC (CcNotifyOfMappedWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFindBitmapRangeToClean @ 0x14023802C (CcFindBitmapRangeToClean.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FD5C8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcFindBcb @ 0x140319E7C (CcFindBcb.c)
 *     CcDeductDirtyPages @ 0x14031DB3C (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
  __int64 v10; // rax
  __int64 *BitmapRangeToClean; // r12
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
  _DWORD *v35; // r9
  _DWORD *v36; // r9
  unsigned int v37; // ecx
  signed __int64 v38; // r13
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  signed __int64 v44; // rax
  __int64 v45; // r13
  unsigned __int64 v46; // rax
  int v47; // r8d
  int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rbx
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 *v59; // rax
  unsigned __int64 v60; // rcx
  _DWORD *v61; // r9
  unsigned __int64 v62; // rdx
  __int64 v63; // r9
  unsigned __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v70; // eax
  bool v71; // zf
  struct _FAST_MUTEX *Mutex; // [rsp+50h] [rbp-118h]
  int v73; // [rsp+58h] [rbp-110h]
  __int64 v74; // [rsp+60h] [rbp-108h]
  unsigned __int64 v75; // [rsp+68h] [rbp-100h]
  __int64 v76; // [rsp+70h] [rbp-F8h]
  __int64 v77; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int64 v78; // [rsp+80h] [rbp-E8h]
  int v79; // [rsp+94h] [rbp-D4h]
  __int64 v80; // [rsp+A8h] [rbp-C0h]
  __int64 v81; // [rsp+B0h] [rbp-B8h]
  __int64 Partition; // [rsp+B8h] [rbp-B0h]
  unsigned int *v83; // [rsp+C0h] [rbp-A8h]
  __int64 v84; // [rsp+E8h] [rbp-80h]
  __int64 v85; // [rsp+F0h] [rbp-78h]
  __int64 v86; // [rsp+100h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp-60h] BYREF

  v10 = a1;
  v83 = a6;
  v81 = a1;
  v77 = 0LL;
  v80 = 0LL;
  v73 = 0;
  v79 = 0;
  BitmapRangeToClean = 0LL;
  v75 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v74 = 0LL;
  v84 = 0LL;
  v78 = 0LL;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v85 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
  {
    PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
    v10 = a1;
  }
  Partition = CcGetPartition(v10, (_BYTE)a2, a3);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (struct _FAST_MUTEX *)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v15 = a1;
  v16 = *(_QWORD *)(a1 + 160);
  v76 = v16;
  if ( v16 && *(_DWORD *)(v16 + 8) && (*(_DWORD *)(v16 + 4) || a3) )
  {
    if ( !a2 )
    {
      v38 = 0LL;
      if ( !a3 )
        v38 = *(_QWORD *)(v16 + 32);
      BitmapRangeToClean = CcFindBitmapRangeToClean(v16, v38);
      v40 = *((unsigned int *)BitmapRangeToClean + 7);
      v41 = BitmapRangeToClean[2];
      if ( v38 > (__int64)(v40 + v41) )
        v38 = v41 + *((unsigned int *)BitmapRangeToClean + 6);
      v42 = BitmapRangeToClean[5];
      goto LABEL_70;
    }
    v38 = *a2 >> 12;
    v74 = v38;
    v14 = (a3 + *a2 - 1) >> 12;
    v59 = CcFindBitmapRangeToClean(v16, v38);
    BitmapRangeToClean = v59;
    v41 = v59[2];
    if ( v14 >= v41 + *((unsigned int *)v59 + 6) )
    {
      v40 = *((unsigned int *)v59 + 7);
      if ( v38 <= (__int64)(v40 + v41) )
      {
        v42 = v59[5];
        v39 = v76;
        if ( v14 < (__int64)(v40 + v41) )
        {
          v43 = v42 + 4 * (((unsigned __int64)(v14 - v41) >> 5) & 0x7FFFFFF);
          goto LABEL_71;
        }
LABEL_70:
        v43 = v42 + 4 * (v40 >> 5);
LABEL_71:
        v75 = v43;
        v44 = v38;
        v45 = v41 + *((unsigned int *)BitmapRangeToClean + 6);
        if ( v44 >= v45 )
          v45 = v44;
        v74 = v45;
        v46 = (unsigned int)(v45 - *((_DWORD *)BitmapRangeToClean + 4));
        v47 = v45 - *((_DWORD *)BitmapRangeToClean + 4);
        v78 = v46;
        v12 = (int *)(v42 + 4 * (v46 >> 5));
        v13 = -1 << (v45 % 32);
        v48 = *v12;
        if ( (*v12 & v13) == 0 )
        {
          v13 = -1;
          v45 &= 0xFFFFFFFFFFFFFFE0uLL;
          v60 = v75;
          do
          {
            ++v12;
            v45 += 32LL;
            v74 = v45;
            if ( (unsigned __int64)v12 > v60 )
            {
              if ( !v27 )
                *((_DWORD *)BitmapRangeToClean + 7) = v47 - 1;
              do
              {
                BitmapRangeToClean = (__int64 *)*BitmapRangeToClean;
                if ( BitmapRangeToClean == (__int64 *)(v39 + 16) )
                {
                  if ( v27 )
                    goto LABEL_6;
                  BitmapRangeToClean = (__int64 *)*BitmapRangeToClean;
                }
              }
              while ( !*((_DWORD *)BitmapRangeToClean + 8) );
              v62 = *((unsigned int *)BitmapRangeToClean + 6);
              v63 = BitmapRangeToClean[2];
              if ( v14 < (__int64)(v63 + v62) )
                goto LABEL_6;
              v64 = *((unsigned int *)BitmapRangeToClean + 7);
              if ( v45 > (__int64)(v64 + v63) )
                goto LABEL_6;
              v65 = BitmapRangeToClean[5];
              v12 = (int *)(v65 + 4 * (v62 >> 5));
              v75 = v65 + 4 * (v64 >> 5);
              v45 = v63 + ((unsigned int)v62 & 0xFFFFFFE0);
              v74 = v45;
              v47 = *((_DWORD *)BitmapRangeToClean + 6);
              v78 = (unsigned int)v62;
              v39 = v76;
              v60 = v75;
            }
            v48 = *v12;
          }
          while ( !*v12 );
        }
        v13 = -v13;
        if ( (v48 & v13) == 0 )
        {
          do
          {
            v13 *= 2;
            ++v45;
          }
          while ( (v48 & v13) == 0 );
          v74 = v45;
        }
        if ( !a2 )
        {
LABEL_76:
          if ( (gCcTrace & 1) != 0 )
          {
            if ( a2 )
              v66 = *a2;
            else
              v66 = 0LL;
            DbgPrintEx(
              0x7Fu,
              0,
              "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
              v66,
              v27,
              (const void *)v15,
              v45,
              BitmapRangeToClean,
              *((_DWORD *)BitmapRangeToClean + 8));
            v27 = a3;
          }
          while ( (v13 & *v12) != 0 )
          {
            if ( a2 && v45 + *a6 >= (unsigned int)((*a2 + 4095 + v27) >> 12) )
              break;
            if ( (unsigned __int64)v12 > BitmapRangeToClean[5]
                                       + 4 * ((unsigned __int64)*((unsigned int *)BitmapRangeToClean + 7) >> 5) )
              KeBugCheckEx(0x34u, 0x11D4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            if ( !a2 && *a6 >= CcMaxLazyWritePages )
              break;
            *v12 -= v13;
            ++*a6;
            v13 *= 2;
            if ( !v13 )
            {
              ++v12;
              v13 = 1;
              if ( (unsigned __int64)v12 > v75 )
                break;
            }
          }
          v49 = *a6;
          v50 = *(_DWORD *)(v76 + 4);
          if ( *a6 < v50 )
            v51 = v50 - v49;
          else
            v51 = 0;
          *(_DWORD *)(v76 + 4) = v51;
          v52 = *(_DWORD *)(v76 + 8);
          if ( v52 < v49 )
            KeBugCheckEx(0x34u, 0x1203uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_DWORD *)(v76 + 8) = v52 - v49;
          *((_DWORD *)BitmapRangeToClean + 8) -= v49;
          v53 = Partition;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
          CcDeductDirtyPages(a1, *a6);
          v54 = *(_DWORD *)(v53 + 496);
          if ( v54 <= *a6 )
            v55 = 0;
          else
            v55 = v54 - *a6;
          *(_DWORD *)(v53 + 496) = v55;
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
                v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v71 = (v70 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v70;
                if ( v71 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          if ( *((_DWORD *)BitmapRangeToClean + 8) )
          {
            v58 = *v83;
            if ( *((_DWORD *)BitmapRangeToClean + 6) == (_DWORD)v78 )
              *((_DWORD *)BitmapRangeToClean + 6) = v58 + v45 - *((_DWORD *)BitmapRangeToClean + 4);
            if ( a3 )
              goto LABEL_95;
            v57 = v58 + v45;
          }
          else
          {
            *((_DWORD *)BitmapRangeToClean + 6) = -1;
            *((_DWORD *)BitmapRangeToClean + 7) = 0;
            v57 = BitmapRangeToClean[2] + 0x2000;
          }
          *(_QWORD *)(v76 + 32) = v57;
LABEL_95:
          if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
            *(_DWORD *)(a1 + 192) = *(_DWORD *)(v76 + 4);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
          *a6 <<= 12;
          *a5 = v45 << 12;
          *a7 = 0LL;
          goto LABEL_41;
        }
        if ( v45 < (v27 + *a2 + 4095) >> 12 )
        {
          if ( *(_QWORD *)(v15 + 16) == v15 + 16 )
            goto LABEL_76;
          v73 = 1;
        }
      }
    }
  }
LABEL_6:
  v17 = (__int64 *)(v81 + 200);
  v18 = v80;
  while ( 2 )
  {
    v19 = *(_QWORD *)(v15 + 24) - 16LL;
    v77 = v19;
    if ( (*(_DWORD *)(v15 + 152) & 0x200) != 0 )
    {
      if ( a2 )
        v17 = a2;
      if ( *v17 )
      {
        v86 = *v17 + 4096;
        Bcb = CcFindBcb(v15, (__int64)v17, &v86, &v77);
        v15 = a1;
        if ( Bcb )
        {
          v19 = v77;
        }
        else
        {
          v19 = *(_QWORD *)(v77 + 24) - 16LL;
          v77 = v19;
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
        if ( v73 && v74 <= (unsigned int)(*(__int64 *)(v19 + 8) >> 12) )
        {
          v27 = a3;
          goto LABEL_147;
        }
      }
      ++*(_DWORD *)(v19 + 64);
      KeReleaseGuardedMutex(Mutex);
      if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
      {
        CcUnpinFileDataEx((char *)v19, 1, 2, v35);
        ExAcquireFastMutex(Mutex);
        v15 = a1;
LABEL_52:
        v73 = 0;
        v37 = *a6;
        if ( !*a6 )
          *a5 = *(_QWORD *)(v19 + 8);
        *a7 = v19;
        *a6 = *(_DWORD *)(v19 + 4) + v37;
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
      CcUnpinFileDataEx((char *)v19, 0, 0, v61);
      v23 = (struct _FAST_MUTEX *)(a1 + 280);
      ExAcquireFastMutex(Mutex);
      if ( *a6 )
        goto LABEL_18;
      v15 = a1;
      v22 = *(_QWORD *)(a1 + 24);
      v21 = a1 + 16;
LABEL_16:
      v19 = v22 - 16;
      v77 = v19;
      if ( v19 + 16 == v21 )
        goto LABEL_17;
    }
    CcUnpinFileDataEx((char *)v19, 1, 0, v36);
    v23 = (struct _FAST_MUTEX *)(a1 + 280);
    ExAcquireFastMutex(Mutex);
LABEL_18:
    v24 = a5;
LABEL_31:
    v27 = a3;
LABEL_32:
    if ( v73 )
    {
      v15 = a1;
LABEL_147:
      v45 = v74;
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
    v33 = *(_QWORD *)(v81 + 240);
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
