/*
 * XREFs of CcLazyWriteScan @ 0x1403005E4
 * Callers:
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAdjustThrottle @ 0x14023A24C (CcAdjustThrottle.c)
 *     CcUpdateTimeOnLogHandles @ 0x14023F9FC (CcUpdateTimeOnLogHandles.c)
 *     CcSetLazyWriteScanQueued @ 0x140242624 (CcSetLazyWriteScanQueued.c)
 *     CcComputeNextScanTime @ 0x14024D398 (CcComputeNextScanTime.c)
 *     CcRescheduleLazyWriteScan @ 0x140281A20 (CcRescheduleLazyWriteScan.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScanLogHandleList @ 0x1402FE8F4 (CcScanLogHandleList.c)
 *     CcShouldLazyWriteCacheMap @ 0x140300D64 (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x140300E80 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140301520 (CcAllocateWorkQueueEntry.c)
 *     CcCalculatePagesToWrite @ 0x1403021B4 (CcCalculatePagesToWrite.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1403C42F8 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x1403C5D50 (CcPerfLogLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E9D6C (CcIncrementWriteBehindPriority.c)
 *     CcPostDeferredWrites @ 0x1404EA530 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcLazyWriteScan(__int64 a1, int a2, unsigned int a3)
{
  int v6; // r13d
  unsigned __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rtt
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // r8
  __int64 v29; // rdx
  char v30; // al
  int v31; // ecx
  _QWORD *v32; // rcx
  char v33; // bl
  unsigned __int64 v34; // rbx
  __int64 result; // rax
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int64 v39; // r14
  int v40; // eax
  KSPIN_LOCK *v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rdx
  unsigned __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // ecx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 *v51; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // ecx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v62; // zf
  unsigned __int64 v63; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r9
  _DWORD *v78; // r8
  int v79; // eax
  char v80; // [rsp+60h] [rbp-39h]
  char v81; // [rsp+61h] [rbp-38h]
  unsigned int v82; // [rsp+64h] [rbp-35h] BYREF
  _QWORD *v83; // [rsp+68h] [rbp-31h] BYREF
  _QWORD **v84; // [rsp+70h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-21h] BYREF
  __int64 v86; // [rsp+90h] [rbp-9h] BYREF
  __int64 v87; // [rsp+98h] [rbp-1h] BYREF
  __int64 v88; // [rsp+A0h] [rbp+7h]
  __int64 v89; // [rsp+A8h] [rbp+Fh]
  __int64 v90[8]; // [rsp+B0h] [rbp+17h] BYREF
  char v91; // [rsp+100h] [rbp+67h]
  char v93; // [rsp+118h] [rbp+7Fh]

  v93 = 0;
  v90[0] = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v91 = 0;
  v6 = 0;
  v82 = 0;
  v81 = 0;
  v80 = 0;
  v86 = 0LL;
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v82, a3, v90);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  CcSetLazyWriteScanQueued((_BYTE *)a1, a3, 0);
  v7 = *(unsigned int *)(a1 + 712);
  v8 = (__int64 *)(a1 + 640);
  v9 = *(__int64 **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 696) / v7;
  *(_QWORD *)(a1 + 736) = v10;
  v11 = *(_QWORD *)(a1 + 704);
  *(_QWORD *)(a1 + 744) = v11 / v7;
  v12 = v11 / v7;
  v13 = *v9;
  v14 = *(_QWORD *)(a1 + 640);
  if ( (unsigned int)v7 <= 1 )
  {
    v15 = *(_QWORD *)(v13 + 7104);
    v16 = *v8;
  }
  else
  {
    v15 = *(_QWORD *)(v13 + 7104) + v10 * (unsigned int)(v7 - 1);
    v16 = *v8 + v12 * (unsigned int)(v7 - 1);
  }
  *(_QWORD *)(a1 + 696) = v15;
  *(_QWORD *)(a1 + 704) = v16;
  if ( !v14 && !*(_BYTE *)(a1 + 633) )
  {
    if ( *(_QWORD *)(a1 + 784) == a1 + 784 )
    {
      *(_BYTE *)(a1 + 632) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v62 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v62 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return result;
    }
    CcRescheduleLazyWriteScan(a1, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v63 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v62 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v62 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
    }
    __writecr8(v63);
    return CcPostDeferredWrites(a1);
  }
  v84 = &v83;
  v17 = (_QWORD **)(a1 + 272);
  v83 = &v83;
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    v57 = (_QWORD *)*v18;
    if ( (_QWORD **)v18[1] != v17 || (_QWORD *)v57[1] != v18 || (*v17 = v57, v57[1] = v17, v58 = v84, *v84 != &v83) )
LABEL_89:
      __fastfail(3u);
    v18[1] = v84;
    *v18 = &v83;
    *v58 = v18;
    v84 = (_QWORD **)v18;
  }
  *(_BYTE *)(a1 + 633) = 0;
  v19 = CcCalculatePagesToWrite(a1, a3, (int)a1 + 640, (int)a1 + 664, 0);
  v20 = *(unsigned int *)(a1 + 496);
  v82 = v19;
  v21 = v19;
  CcAdjustThrottle((_QWORD *)a1, (__int64 *)(a1 + 640), a1 + 664, v20);
  v22 = *(unsigned int *)(a1 + 320);
  *(_QWORD *)(a1 + 648) = *v8;
  v23 = *(_QWORD *)(a1 + 720);
  *(_DWORD *)(a1 + 656) = v21;
  *(_DWORD *)(a1 + 496) = v21;
  *(_DWORD *)(v23 + 8 * v22) = v21;
  *(_QWORD *)(a1 + 768) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a2,
      a3,
      *(_DWORD *)(a1 + 496),
      *v8,
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 7104LL),
      *(_QWORD *)(a1 + 664),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 672),
      *(_QWORD *)(a1 + 680),
      *(_QWORD *)(a1 + 736),
      *(_QWORD *)(a1 + 744),
      *(unsigned int *)(a1 + 136));
  v24 = a1 + 72;
  v25 = 0LL;
  v26 = *(_QWORD *)(a1 + 72) - 136LL;
  if ( *(_QWORD *)(a1 + 72) != 136LL )
  {
    while ( 1 )
    {
      v27 = v26 + 136;
      v88 = v26 + 136;
      if ( v26 + 136 == v24 )
        goto LABEL_19;
      v28 = *(_QWORD *)(v26 + 96);
      v29 = v26;
      if ( v25 )
        v29 = v25;
      v89 = v29;
      v30 = CcShouldLazyWriteCacheMap(v26, v82, v28 & 0xFFFFFFFFFFFFFFF0uLL, a3);
      v31 = *(_DWORD *)(v26 + 152);
      if ( v30 )
        break;
      if ( (v31 & 0x10020) == 0x10020 )
      {
        CcIncrementWriteBehindPriority(v26);
      }
      else if ( (unsigned int)++v6 >= 0x14 && (v31 & 0x820) == 0 )
      {
        ++*(_DWORD *)(v26 + 112);
        *(_DWORD *)(v26 + 152) = v31 | 0x20;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v44 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v72 = KeGetCurrentIrql();
            if ( v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
            {
              v73 = KeGetCurrentPrcb();
              v74 = v73->SchedulerAssist;
              v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v62 = (v75 & v74[5]) == 0;
              v74[5] &= v75;
              if ( v62 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
        }
        __writecr8(v44);
        v6 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
        *(_DWORD *)(v26 + 152) &= ~0x20u;
        --*(_DWORD *)(v26 + 112);
LABEL_45:
        v27 = v88;
      }
      v26 = *(_QWORD *)v27 - 136LL;
      if ( v91 )
      {
        v53 = *(_QWORD *)v24;
        v54 = *(_QWORD **)(a1 + 80);
        if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
          goto LABEL_89;
        if ( *v54 != v24 )
          goto LABEL_89;
        *v54 = v53;
        *(_QWORD *)(v53 + 8) = v54;
        v55 = *(_QWORD *)v27;
        if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
          goto LABEL_89;
        *(_QWORD *)v24 = v55;
        *(_QWORD *)(a1 + 80) = v27;
        *(_QWORD *)(v55 + 8) = v24;
        *(_QWORD *)v27 = v24;
        v91 = 0;
      }
      v25 = v89;
      if ( v26 == v89 )
        goto LABEL_19;
    }
    v6 = 0;
    v87 = 0LL;
    if ( (v31 & 0x1000000) != 0 )
    {
      v81 = 1;
      *(_DWORD *)(*(_QWORD *)(v26 + 240) + 144LL) |= 1u;
      v45 = *(_QWORD *)(v26 + 240);
      v46 = *(_QWORD *)(v26 + 256);
      if ( v46 > *(_QWORD *)(v45 + 112) )
      {
        *(_QWORD *)(v45 + 112) = v46;
        if ( (xmmword_140CFC490 & 0x20000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v26 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v26 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                  + 0x18);
      }
    }
    v36 = *(_DWORD *)(v26 + 152);
    v37 = *(_DWORD *)(v26 + 112);
    *(_DWORD *)(v26 + 192) = v37;
    if ( (v36 & 0x200) != 0 && v37 >= 0x40 )
    {
      if ( (v36 & 0x1000000) != 0 && (v47 = *(_QWORD *)(v26 + 240), (v48 = *(_DWORD *)(v47 + 104)) != 0) )
      {
        if ( v37 <= v48 )
          v56 = v48 - v37;
        else
          v56 = 0;
        *(_DWORD *)(v47 + 104) = v56;
        ++CcDbgSkippedReductions;
      }
      else
      {
        *(_DWORD *)(v26 + 192) = v37 >> 3;
      }
    }
    if ( !v93 )
    {
      v38 = *(_DWORD *)(v26 + 192);
      if ( v38 >= v82 )
      {
        if ( (*(_DWORD *)(v26 + 152) & 0x200) != 0 || v89 == v26 && (*(_DWORD *)(v26 + 268) & 0xF) == 0 )
        {
          v91 = 1;
        }
        else
        {
          v49 = *(_QWORD *)v24;
          v50 = *(_QWORD **)(a1 + 80);
          if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
            goto LABEL_89;
          if ( *v50 != v24 )
            goto LABEL_89;
          *v50 = v49;
          *(_QWORD *)(v49 + 8) = v50;
          v51 = *(__int64 **)(v26 + 144);
          if ( *v51 != v27 )
            goto LABEL_89;
          *(_QWORD *)v24 = v27;
          *(_QWORD *)(a1 + 80) = v51;
          *v51 = v24;
          *(_QWORD *)(v26 + 144) = v24;
        }
        v82 = 0;
        v93 = 1;
      }
      else
      {
        v82 -= v38;
      }
    }
    *(_DWORD *)(v26 + 152) |= 0x20u;
    ++*(_DWORD *)(v26 + 112);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v39 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v68 = KeGetCurrentIrql();
        if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v62 = (v71 & v70[5]) == 0;
          v70[5] &= v71;
          if ( v62 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(v39);
    v40 = CcAllocateWorkQueueEntry(a1, &v87);
    v41 = (KSPIN_LOCK *)(a1 + 128);
    if ( v40 < 0 )
    {
      KeAcquireInStackQueuedSpinLock(v41, &LockHandle);
      *(_DWORD *)(v26 + 152) &= ~0x20u;
      --*(_DWORD *)(v26 + 112);
      goto LABEL_19;
    }
    v42 = v87;
    *(_BYTE *)(v87 + 120) = 2;
    *(_QWORD *)(v42 + 16) = v26;
    KeAcquireInStackQueuedSpinLock(v41, &LockHandle);
    --*(_DWORD *)(v26 + 112);
    if ( (*(_DWORD *)(v26 + 152) & 0x10000) != 0 )
    {
      v43 = a1 + 224;
      *(_QWORD *)(v26 + 496) = v42 | 1;
    }
    else
    {
      if ( *(_DWORD *)(v26 + 4) || (v43 = a1 + 288, *(_DWORD *)(v26 + 112)) )
        v43 = a1 + 256;
      *(_QWORD *)(v26 + 496) = v42;
    }
    CcPostWorkQueue(v42, v43);
    v80 = 1;
    goto LABEL_45;
  }
LABEL_19:
  v32 = v83;
  v33 = v80;
  if ( v83 != &v83 )
    v33 = 1;
  while ( v32 != &v83 )
  {
    v59 = (_QWORD *)*v32;
    if ( (_QWORD **)v32[1] != &v83 || (_QWORD *)v59[1] != v32 )
      goto LABEL_89;
    v83 = (_QWORD *)*v32;
    v59[1] = &v83;
    CcPostWorkQueue(v32, a1 + 256);
    v32 = v83;
  }
  if ( (_BYTE)dword_140CFB19C
    || v33
    || *(_QWORD *)(a1 + 784) != a1 + 784
    || (CcComputeNextScanTime((_DWORD *)a1, v90, &v86), v86 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(a1, &v86);
    if ( *(_BYTE *)(a1 + 140) )
      *(_BYTE *)(a1 + 140) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 140) = 1;
    *(_BYTE *)(a1 + 632) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v34 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v76 = KeGetCurrentIrql();
      if ( v76 <= 0xFu && LockHandle.OldIrql <= 0xFu && v76 >= 2u )
      {
        v77 = KeGetCurrentPrcb();
        v78 = v77->SchedulerAssist;
        v79 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v62 = (v79 & v78[5]) == 0;
        v78[5] &= v79;
        if ( v62 )
          KiRemoveSystemWorkPriorityKick(v77);
      }
    }
  }
  __writecr8(v34);
  if ( v81 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(a3, *(unsigned int *)(a1 + 496));
  result = a1 + 784;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(a1);
  return result;
}
