/*
 * XREFs of CcFlushCachePriv @ 0x14022C120
 * Callers:
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcZeroEndOfLastPage @ 0x1402818D4 (CcZeroEndOfLastPage.c)
 *     MiFlushDataSection @ 0x1402BED80 (MiFlushDataSection.c)
 *     CcZeroData @ 0x1402C0D40 (CcZeroData.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1402CE170 (CcCoherencyFlushAndPurgeCache.c)
 *     CcFlushCache @ 0x140311520 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x14031D240 (CcFlushCacheToLsn.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x14022E0B4 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcAcquireByteRangeForWrite @ 0x14022E960 (CcAcquireByteRangeForWrite.c)
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     CcReleaseByteRangeFromWrite @ 0x140230088 (CcReleaseByteRangeFromWrite.c)
 *     CcAmILowPriorityWriter @ 0x140231E08 (CcAmILowPriorityWriter.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D0704 (CcBoostLowPriorityWorkerThread.c)
 *     CcGetVirtualAddressIfMapped @ 0x1402FC2C0 (CcGetVirtualAddressIfMapped.c)
 *     CcIsFatalWriteError @ 0x140312254 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1403B8D98 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403B8E9C (CcPerfLogFlushSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1404E4C20 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcFlushCachePriv(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, char a5, unsigned int *a6)
{
  unsigned __int64 v6; // r13
  char v8; // si
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // r14
  unsigned int *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // ecx
  unsigned int v16; // r8d
  _DWORD *v17; // r9
  __int64 result; // rax
  unsigned __int64 v19; // rsi
  unsigned int *v20; // rsi
  unsigned int v21; // r15d
  int v22; // eax
  unsigned int v23; // r14d
  char v24; // al
  unsigned int v25; // r8d
  __int64 *v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // r14d
  __int64 v29; // rbx
  unsigned int v30; // esi
  int v31; // r13d
  __int64 VirtualAddressIfMapped; // rax
  int v33; // r9d
  unsigned int v34; // ecx
  __int64 v35; // r15
  __int64 v36; // rbx
  KSPIN_LOCK *v37; // r15
  char v38; // al
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  signed __int64 v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  signed __int64 v45; // rdx
  struct _KEVENT *v46; // rcx
  unsigned int v47; // eax
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rsi
  unsigned __int64 OldIrql; // rbx
  unsigned int v51; // r14d
  char v52; // al
  _DWORD *v53; // r9
  bool v54; // zf
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  struct _KPRCB *v57; // r10
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  int v62; // ebx
  unsigned __int64 v63; // rsi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r10
  int v66; // eax
  int v67; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  _DWORD *v74; // r8
  int v75; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-C9h]
  unsigned int v77; // [rsp+40h] [rbp-A9h] BYREF
  int v78; // [rsp+44h] [rbp-A5h]
  int v79; // [rsp+48h] [rbp-A1h]
  unsigned int v80; // [rsp+4Ch] [rbp-9Dh] BYREF
  unsigned int v81; // [rsp+50h] [rbp-99h]
  int v82; // [rsp+54h] [rbp-95h]
  unsigned int v83; // [rsp+58h] [rbp-91h]
  __int64 Partition; // [rsp+60h] [rbp-89h]
  signed __int64 v85; // [rsp+68h] [rbp-81h] BYREF
  struct _KLOCK_QUEUE_HANDLE v86; // [rsp+70h] [rbp-79h] BYREF
  unsigned int *v87; // [rsp+88h] [rbp-61h]
  int v88; // [rsp+90h] [rbp-59h]
  __int64 v89; // [rsp+98h] [rbp-51h]
  signed __int64 v90; // [rsp+A0h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-29h]
  __int64 v93; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v94; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-11h] BYREF
  __int128 v96; // [rsp+E0h] [rbp-9h] BYREF
  int v97; // [rsp+140h] [rbp+57h]
  __int64 *v98; // [rsp+148h] [rbp+5Fh]
  int v100; // [rsp+158h] [rbp+6Fh]

  v100 = a4;
  v97 = a1;
  v6 = (unsigned __int64)a2;
  v85 = 0LL;
  v8 = 0;
  v93 = 0LL;
  v77 = 0;
  v95 = 0LL;
  v9 = 0;
  v80 = 0;
  v10 = 0;
  v83 = 0;
  v11 = 0LL;
  v81 = 0;
  v82 = 0;
  v88 = 0;
  v79 = 0;
  v78 = 0;
  v94 = 0LL;
  v89 = 0LL;
  Partition = 0LL;
  v96 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v86, 0, sizeof(v86));
  if ( a4 && a2 && a2 != (__int64 *)&CcNoDelay )
    KeBugCheckEx(0x34u, 0x15F1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12 = (unsigned int *)&v96;
  v13 = 0LL;
  if ( a6 )
    v12 = a6;
  v87 = v12;
  *v12 = 0;
  if ( a2 == (__int64 *)&CcNoDelay )
  {
    v9 = 1;
    v89 = *((_QWORD *)v12 + 1);
    v6 = 0LL;
    *v12 = -2147483626;
  }
  else
  {
    v78 = 1;
    if ( a5 )
      v78 = 17;
  }
  *((_QWORD *)v12 + 1) = 0LL;
  v98 = (__int64 *)v6;
  v88 = v9;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v14 = *(_QWORD *)(a1 + 8);
  if ( !v14 )
    goto LABEL_11;
  Partition = CcGetPartition(v14);
  v86.LockQueue.Next = 0LL;
  v86.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock((__int64)&v86, (volatile __int64 *)(Partition + 128));
  v15 = *(_DWORD *)(v14 + 152);
  v8 = 1;
  if ( (v15 & 0x2000) != 0 )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_144;
    v6 ^= 1uLL;
    v98 = (__int64 *)v6;
  }
  if ( !v9 )
  {
    if ( !v6 )
      goto LABEL_128;
    v44 = *(_QWORD *)v6;
    v45 = *(_QWORD *)(v14 + 32);
    if ( *(_QWORD *)v6 < v45 )
    {
      v16 = a3;
      if ( v44 + a3 <= v45 )
      {
LABEL_106:
        ++*(_DWORD *)(v14 + 516);
        goto LABEL_12;
      }
      a3 = v45 - v44;
LABEL_128:
      v16 = a3;
      goto LABEL_106;
    }
LABEL_144:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
    {
LABEL_145:
      __writecr8(OldIrql);
      return result;
    }
    v54 = (KiIrqlFlags & 1) == 0;
LABEL_163:
    if ( !v54 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v54 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v54 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    goto LABEL_145;
  }
  if ( (v15 & 0x10000) == 0 )
  {
LABEL_11:
    v16 = a3;
    goto LABEL_12;
  }
  v16 = a3;
  v79 = 1;
  if ( *(_DWORD *)(v14 + 516) )
    v10 = 1;
LABEL_12:
  if ( v6 && !v16 )
  {
    if ( v14 && !v9 )
      --*(_DWORD *)(v14 + 516);
    if ( v8 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_145;
    v54 = (KiIrqlFlags & 1) == 0;
    goto LABEL_163;
  }
  if ( v14 )
  {
    ++*(_DWORD *)(v14 + 4);
    ++*(_DWORD *)(v14 + 536);
    v11 = *(_QWORD *)((*(_QWORD *)(v14 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
  if ( v8 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v19 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v17 = v57->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v54 = ((unsigned int)result & v17[5]) == 0;
        v17[5] &= result;
        if ( v54 )
          result = KiRemoveSystemWorkPriorityKick(v57);
      }
    }
  }
  __writecr8(v19);
  if ( v14 && (*(_DWORD *)(v14 + 152) & 0x40000000) != 0 )
    v10 = 1;
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    result = CcPerfLogFlushCache(v89, v14, v6, a3, v9, v79, v10 == 1);
  if ( !v9 )
  {
    if ( !v14 )
      goto LABEL_114;
    result = *(unsigned int *)(v14 + 152);
    if ( (result & 0x20) != 0 )
      result = CcBoostLowPriorityWorkerThread(Partition, v14);
  }
  if ( (v14
     && ((*(_BYTE *)(v11 + 6) & 0x10) == 0 || (*(_BYTE *)(v11 + 4) & 0x20) == 0)
     && (*(_DWORD *)(v14 + 152) & 0x20000) == 0
     || v9)
    && !v10 )
  {
    if ( !v14 )
      return result;
    if ( (*(_DWORD *)(v14 + 152) & 0x4000000) == 0 )
    {
      v20 = v87;
      v21 = a3;
      goto LABEL_34;
    }
  }
LABEL_114:
  v21 = a3;
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    CcPerfLogFlushSection(v89, v14, v6, a3, v78);
  if ( v14 )
    CcUnmapVacbArray(v14, (__int64 *)v6, a3, 0, 0, 0);
  v20 = v87;
  MmFlushSection(v97, v6, a3, (_DWORD)v17, (__int64)v87, v78);
  result = *v20;
  if ( (int)result < 0 )
  {
    v83 = *v20;
    goto LABEL_35;
  }
LABEL_34:
  result = 0LL;
LABEL_35:
  if ( !v14 )
    goto LABEL_95;
  if ( (*(_DWORD *)(v14 + 152) & 0x4000000) != 0 )
    goto LABEL_91;
  if ( v6 )
    v93 = *(_QWORD *)v6;
  v22 = 1;
  if ( v21 )
    v22 = v21;
  v77 = v22;
  if ( v9 )
    v13 = MEMORY[0xFFFFF78000000320];
  v23 = v81;
  v92 = v13;
  while ( (*(_DWORD *)(v14 + 192) || !v9 || v79)
       && (*(_QWORD *)(v14 + 8) || (*(_DWORD *)(v14 + 152) & 4) != 0 || *(_DWORD *)(v14 + 112))
       && !v82 )
  {
    v24 = v9 && (unsigned __int8)CcAmILowPriorityWriter(v14);
    v25 = !v9 || v79 ? v77 : 0;
    if ( !v9 || v79 )
    {
      v26 = &v93;
      if ( !v6 )
        LODWORD(v26) = 0;
    }
    else
    {
      LODWORD(v26) = 0;
    }
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v14,
                             (_DWORD)v26,
                             v25,
                             v100,
                             (__int64)&v85,
                             (__int64)&v77,
                             (__int64)&v95,
                             v24) )
      break;
    v27 = v77;
    v28 = 0;
    v29 = Partition;
    v30 = v77;
    v31 = v79;
    while ( 1 )
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v14, v85 + v27 - (unsigned __int64)v30, &v94, &v80);
      if ( VirtualAddressIfMapped )
      {
        v34 = v80;
        if ( v80 > v30 )
        {
          v34 = v30;
          v80 = v30;
        }
        v28 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v34) || v28)
           && v85 + v77 < *(_QWORD *)(v14 + 40)
           && (*(_DWORD *)(v14 + 268) & 0xF) != 0
           && v9
           && !v31
           && (*(_DWORD *)(v14 + 152) & 0x200) == 0
           && !*(_BYTE *)(v29 + 964);
        v35 = *(_QWORD *)(v94 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v94 + 16)) )
        {
          v46 = *(struct _KEVENT **)(v35 + 184);
          if ( v46 )
            KeSetEvent(v46, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v35 + 544));
        }
      }
      else
      {
        v47 = v80;
        if ( v80 > v30 )
          v47 = v30;
        v80 = v47;
      }
      v30 -= v80;
      if ( !v30 )
        break;
      v27 = v77;
    }
    __addgsdword(0x8128u, v28);
    v36 = v92;
    v6 = (unsigned __int64)v98;
    if ( v28 )
    {
      v37 = (KSPIN_LOCK *)Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v86);
      v37[94] += (unsigned __int64)v77 >> 12;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
      v49 = v86.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v86.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << (v86.OldIrql + 1));
            v54 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v69);
          }
        }
      }
      __writecr8(v49);
      v20 = v87;
LABEL_143:
      v38 = 1;
      goto LABEL_79;
    }
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
      CcPerfLogFlushSection(v89, v14, (unsigned int)&v85, v77, v78);
    v20 = v87;
    MmFlushSection(v97, (unsigned int)&v85, v77, v33, (__int64)v87, v78);
    if ( (*v20 & 0x80000000) == 0 )
    {
      v37 = (KSPIN_LOCK *)Partition;
      if ( (*(_DWORD *)(v14 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v86);
        *(_DWORD *)(v14 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
        v48 = v86.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v58 = KeGetCurrentIrql();
            if ( v58 <= 0xFu && v86.OldIrql <= 0xFu && v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = v59->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << (v86.OldIrql + 1));
              v54 = (v61 & v60[5]) == 0;
              v60[5] &= v61;
              if ( v54 )
                KiRemoveSystemWorkPriorityKick(v59);
            }
          }
        }
        __writecr8(v48);
        v20 = v87;
      }
      if ( v9 )
      {
        __incgsdword(0x812Cu);
        __addgsdword(0x8130u, (v77 + 4095) >> 12);
      }
LABEL_78:
      v38 = 0;
      goto LABEL_79;
    }
    v51 = v77;
    v90 = v85;
    v52 = CcIsFatalWriteError(v14);
    v37 = (KSPIN_LOCK *)Partition;
    if ( v52 )
    {
      v62 = v78;
      do
      {
        if ( (xmmword_140CFC490 & 0x20000) != 0 )
          CcPerfLogFlushSection(v89, v14, (unsigned int)&v90, 4096, v62);
        MmFlushSection(v97, (unsigned int)&v90, 4096, (_DWORD)v53, (__int64)v20, v62);
        if ( (*v20 & 0x80000000) != 0 )
        {
          if ( (unsigned __int8)CcIsFatalWriteError(v14) )
          {
            v67 = v82;
            v83 = *v20;
          }
          else
          {
            v67 = 1;
            v82 = 1;
          }
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(v37 + 16, &v86);
          *(_DWORD *)(v14 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
          v63 = v86.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v64 = KeGetCurrentIrql();
              if ( v64 <= 0xFu && v86.OldIrql <= 0xFu && v64 >= 2u )
              {
                v65 = KeGetCurrentPrcb();
                v53 = v65->SchedulerAssist;
                v66 = ~(unsigned __int16)(-1LL << (v86.OldIrql + 1));
                v54 = (v66 & v53[5]) == 0;
                v53[5] &= v66;
                if ( v54 )
                  KiRemoveSystemWorkPriorityKick(v65);
              }
            }
          }
          __writecr8(v63);
          v20 = v87;
          v67 = v82;
        }
        v90 += 4096LL;
        v51 -= 4096;
      }
      while ( v51 );
      v36 = v92;
      v9 = v88;
      v6 = (unsigned __int64)v98;
      if ( !v67 )
        goto LABEL_78;
      goto LABEL_143;
    }
    v82 = 1;
    v38 = 1;
LABEL_79:
    LOBYTE(BugCheckParameter4) = v38;
    CcReleaseByteRangeFromWrite(v14, &v85, v77, v95, BugCheckParameter4);
    v39 = v77 + v81;
    v81 = v39;
    if ( v39 < 0x40000 )
      goto LABEL_80;
    if ( (KSPIN_LOCK *)v37[98] != v37 + 98 )
    {
      CcPostDeferredWrites(v37);
      v39 = 0;
      v81 = 0;
LABEL_80:
      v23 = v39;
      goto LABEL_81;
    }
    v23 = v81;
LABEL_81:
    if ( v9 && !v79 )
    {
      v40 = (KSPIN_LOCK *)v37[98] == v37 + 98 ? CcIdleDelayTick / 0xAu : (unsigned int)CcIdleDelayTick;
      if ( MEMORY[0xFFFFF78000000320] > v36 + v40 )
      {
        *((_QWORD *)v20 + 1) = 35422LL;
        break;
      }
    }
    if ( v6 )
    {
      v41 = *(_QWORD *)v6;
      v42 = v77 + v85;
      v85 = v42;
      if ( v41 + a3 <= v42 )
        break;
      v93 = v42;
      v77 = a3 + v41 - v42;
    }
  }
  if ( v23 && *(_QWORD *)(Partition + 784) != Partition + 784 )
    CcPostDeferredWrites(Partition);
LABEL_91:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v86);
  CcDecrementOpenCount(v14);
  if ( !v9 )
    --*(_DWORD *)(v14 + 516);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v86);
  v43 = v86.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v72 = KeGetCurrentIrql();
      if ( v72 <= 0xFu && v86.OldIrql <= 0xFu && v72 >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        v74 = v73->SchedulerAssist;
        v75 = ~(unsigned __int16)(-1LL << (v86.OldIrql + 1));
        v54 = (v75 & v74[5]) == 0;
        v74[5] &= v75;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
  }
  __writecr8(v43);
  result = v83;
LABEL_95:
  if ( (int)result < 0 )
    *v20 = result;
  return result;
}
