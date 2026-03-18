/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x140297520
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140295F24 (CcNotifyOfMappedWrite.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeductDirtyPages @ 0x14029A3CC (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     CcFindBcb @ 0x14030A574 (CcFindBcb.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14030EA14 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcFindBitmapRangeToClean @ 0x1403171BC (CcFindBitmapRangeToClean.c)
 *     FsRtlIsNtstatusExpected @ 0x140320A00 (FsRtlIsNtstatusExpected.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
  __int64 v32; // rcx
  unsigned int v34; // ecx
  __int64 v35; // r13
  __int64 v36; // r9
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  int v44; // r8d
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rbx
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  unsigned __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v66; // eax
  bool v67; // zf
  struct _FAST_MUTEX *Mutex; // [rsp+50h] [rbp-118h]
  int v69; // [rsp+58h] [rbp-110h]
  __int64 v70; // [rsp+60h] [rbp-108h]
  unsigned __int64 v71; // [rsp+68h] [rbp-100h]
  __int64 v72; // [rsp+70h] [rbp-F8h]
  __int64 v73; // [rsp+78h] [rbp-F0h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-E8h]
  int v75; // [rsp+94h] [rbp-D4h]
  __int64 v76; // [rsp+A8h] [rbp-C0h]
  __int64 v77; // [rsp+B0h] [rbp-B8h]
  __int64 Partition; // [rsp+B8h] [rbp-B0h]
  unsigned int *v79; // [rsp+C0h] [rbp-A8h]
  __int64 v80; // [rsp+E8h] [rbp-80h]
  __int64 v81; // [rsp+F0h] [rbp-78h]
  __int64 v82; // [rsp+100h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp-60h] BYREF

  v10 = a1;
  v79 = a6;
  v77 = a1;
  v73 = 0LL;
  v76 = 0LL;
  v69 = 0;
  v75 = 0;
  BitmapRangeToClean = 0LL;
  v71 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v70 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  v81 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 )
  {
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
    v10 = a1;
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
  v72 = v16;
  if ( v16 && *(_DWORD *)(v16 + 8) && (*(_DWORD *)(v16 + 4) || a3) )
  {
    if ( !a2 )
    {
      v35 = 0LL;
      if ( !a3 )
        v35 = *(_QWORD *)(v16 + 32);
      BitmapRangeToClean = CcFindBitmapRangeToClean(v16, v35);
      v37 = *(unsigned int *)(BitmapRangeToClean + 28);
      v38 = *(_QWORD *)(BitmapRangeToClean + 16);
      if ( v35 > (__int64)(v37 + v38) )
        v35 = v38 + *(unsigned int *)(BitmapRangeToClean + 24);
      v39 = *(_QWORD *)(BitmapRangeToClean + 40);
      goto LABEL_70;
    }
    v35 = *a2 >> 12;
    v70 = v35;
    v14 = (a3 + *a2 - 1) >> 12;
    v56 = CcFindBitmapRangeToClean(v16, v35);
    BitmapRangeToClean = v56;
    v38 = *(_QWORD *)(v56 + 16);
    if ( v14 >= v38 + *(unsigned int *)(v56 + 24) )
    {
      v37 = *(unsigned int *)(v56 + 28);
      if ( v35 <= (__int64)(v37 + v38) )
      {
        v39 = *(_QWORD *)(v56 + 40);
        v36 = v72;
        if ( v14 < (__int64)(v37 + v38) )
        {
          v40 = v39 + 4 * (((unsigned __int64)(v14 - v38) >> 5) & 0x7FFFFFF);
          goto LABEL_71;
        }
LABEL_70:
        v40 = v39 + 4 * (v37 >> 5);
LABEL_71:
        v71 = v40;
        v41 = v35;
        v42 = v38 + *(unsigned int *)(BitmapRangeToClean + 24);
        if ( v41 >= v42 )
          v42 = v41;
        v70 = v42;
        v43 = (unsigned int)(v42 - *(_DWORD *)(BitmapRangeToClean + 16));
        v44 = v42 - *(_DWORD *)(BitmapRangeToClean + 16);
        v74 = v43;
        v12 = (int *)(v39 + 4 * (v43 >> 5));
        v13 = -1 << (v42 % 32);
        v45 = *v12;
        if ( (*v12 & v13) == 0 )
        {
          v13 = -1;
          v42 &= 0xFFFFFFFFFFFFFFE0uLL;
          v57 = v71;
          do
          {
            ++v12;
            v42 += 32LL;
            v70 = v42;
            if ( (unsigned __int64)v12 > v57 )
            {
              if ( !v27 )
                *(_DWORD *)(BitmapRangeToClean + 28) = v44 - 1;
              do
              {
                BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
                if ( BitmapRangeToClean == v36 + 16 )
                {
                  if ( v27 )
                    goto LABEL_6;
                  BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
                }
              }
              while ( !*(_DWORD *)(BitmapRangeToClean + 32) );
              v58 = *(unsigned int *)(BitmapRangeToClean + 24);
              v59 = *(_QWORD *)(BitmapRangeToClean + 16);
              if ( v14 < (__int64)(v59 + v58) )
                goto LABEL_6;
              v60 = *(unsigned int *)(BitmapRangeToClean + 28);
              if ( v42 > (__int64)(v60 + v59) )
                goto LABEL_6;
              v61 = *(_QWORD *)(BitmapRangeToClean + 40);
              v12 = (int *)(v61 + 4 * (v58 >> 5));
              v71 = v61 + 4 * (v60 >> 5);
              v42 = v59 + ((unsigned int)v58 & 0xFFFFFFE0);
              v70 = v42;
              v44 = *(_DWORD *)(BitmapRangeToClean + 24);
              v74 = (unsigned int)v58;
              v36 = v72;
              v57 = v71;
            }
            v45 = *v12;
          }
          while ( !*v12 );
        }
        v13 = -v13;
        if ( (v45 & v13) == 0 )
        {
          do
          {
            v13 *= 2;
            ++v42;
          }
          while ( (v45 & v13) == 0 );
          v70 = v42;
        }
        if ( !a2 )
        {
LABEL_76:
          if ( (gCcTrace & 1) != 0 )
          {
            if ( a2 )
              v62 = *a2;
            else
              v62 = 0LL;
            DbgPrintEx(
              0x7Fu,
              0,
              "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
              v62,
              v27,
              (const void *)v15,
              v42,
              (const void *)BitmapRangeToClean,
              *(_DWORD *)(BitmapRangeToClean + 32));
            v27 = a3;
          }
          while ( (v13 & *v12) != 0 )
          {
            if ( a2 && v42 + *a6 >= (unsigned int)((*a2 + 4095 + v27) >> 12) )
              break;
            if ( (unsigned __int64)v12 > *(_QWORD *)(BitmapRangeToClean + 40)
                                       + 4 * ((unsigned __int64)*(unsigned int *)(BitmapRangeToClean + 28) >> 5) )
              KeBugCheckEx(0x34u, 0x11D3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            if ( !a2 && *a6 >= CcMaxLazyWritePages )
              break;
            *v12 -= v13;
            ++*a6;
            v13 *= 2;
            if ( !v13 )
            {
              ++v12;
              v13 = 1;
              if ( (unsigned __int64)v12 > v71 )
                break;
            }
          }
          v46 = *a6;
          v47 = *(_DWORD *)(v72 + 4);
          if ( *a6 < v47 )
            v48 = v47 - v46;
          else
            v48 = 0;
          *(_DWORD *)(v72 + 4) = v48;
          v49 = *(_DWORD *)(v72 + 8);
          if ( v49 < v46 )
            KeBugCheckEx(0x34u, 0x1202uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_DWORD *)(v72 + 8) = v49 - v46;
          *(_DWORD *)(BitmapRangeToClean + 32) -= v46;
          v50 = Partition;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
          CcDeductDirtyPages(a1, *a6);
          v51 = *(_DWORD *)(v50 + 496);
          if ( v51 <= *a6 )
            v52 = 0;
          else
            v52 = v51 - *a6;
          *(_DWORD *)(v50 + 496) = v52;
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
                v66 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v67 = (v66 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v66;
                if ( v67 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          if ( *(_DWORD *)(BitmapRangeToClean + 32) )
          {
            v55 = *v79;
            if ( *(_DWORD *)(BitmapRangeToClean + 24) == (_DWORD)v74 )
              *(_DWORD *)(BitmapRangeToClean + 24) = v55 + v42 - *(_DWORD *)(BitmapRangeToClean + 16);
            if ( a3 )
              goto LABEL_95;
            v54 = v55 + v42;
          }
          else
          {
            *(_DWORD *)(BitmapRangeToClean + 24) = -1;
            *(_DWORD *)(BitmapRangeToClean + 28) = 0;
            v54 = *(_QWORD *)(BitmapRangeToClean + 16) + 0x2000LL;
          }
          *(_QWORD *)(v72 + 32) = v54;
LABEL_95:
          if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
            *(_DWORD *)(a1 + 192) = *(_DWORD *)(v72 + 4);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
          *a6 <<= 12;
          *a5 = v42 << 12;
          *a7 = 0LL;
          goto LABEL_41;
        }
        if ( v42 < (v27 + *a2 + 4095) >> 12 )
        {
          if ( *(_QWORD *)(v15 + 16) == v15 + 16 )
            goto LABEL_76;
          v69 = 1;
        }
      }
    }
  }
LABEL_6:
  v17 = (__int64 *)(v77 + 200);
  v18 = v76;
  while ( 2 )
  {
    v19 = *(_QWORD *)(v15 + 24) - 16LL;
    v73 = v19;
    if ( (*(_DWORD *)(v15 + 152) & 0x200) != 0 )
    {
      if ( a2 )
        v17 = a2;
      if ( *v17 )
      {
        v82 = *v17 + 4096;
        Bcb = CcFindBcb(v15, v17, &v82, &v73);
        v15 = a1;
        if ( Bcb )
        {
          v19 = v73;
        }
        else
        {
          v19 = *(_QWORD *)(v73 + 24) - 16LL;
          v73 = v19;
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
        if ( v69 && v70 <= (unsigned int)(*(__int64 *)(v19 + 8) >> 12) )
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
        v69 = 0;
        v34 = *a6;
        if ( !*a6 )
          *a5 = *(_QWORD *)(v19 + 8);
        *a7 = v19;
        *a6 = *(_DWORD *)(v19 + 4) + v34;
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
      v73 = v19;
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
    if ( v69 )
    {
      v15 = a1;
LABEL_147:
      v42 = v70;
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
    v32 = *(_QWORD *)(v77 + 240);
    if ( (*(_DWORD *)(v29 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(v29 + 248))(v32, v18);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(v32 + 8))(*(_QWORD *)v32, v18);
  }
LABEL_41:
  if ( a8 )
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
  return *a6 != 0;
}
