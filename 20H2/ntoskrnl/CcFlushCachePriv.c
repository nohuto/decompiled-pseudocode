/*
 * XREFs of CcFlushCachePriv @ 0x140296300
 * Callers:
 *     CcZeroData @ 0x140240A60 (CcZeroData.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcZeroEndOfLastPage @ 0x14029F7A8 (CcZeroEndOfLastPage.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     CcFlushCache @ 0x14031FD30 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x14032B880 (CcFlushCacheToLsn.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x140353E50 (CcCoherencyFlushAndPurgeCache.c)
 *     MiFlushDataSection @ 0x140355B28 (MiFlushDataSection.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402950F0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x140297520 (CcAcquireByteRangeForWrite.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcReleaseByteRangeFromWrite @ 0x14029CB20 (CcReleaseByteRangeFromWrite.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     CcGetVirtualAddressIfMapped @ 0x14030BD80 (CcGetVirtualAddressIfMapped.c)
 *     CcAmILowPriorityWriter @ 0x14030FF54 (CcAmILowPriorityWriter.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140316460 (CcBoostLowPriorityWorkerThread.c)
 *     CcIsFatalWriteError @ 0x1403206AC (CcIsFatalWriteError.c)
 *     MmFlushSection @ 0x1403542A0 (MmFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403BC588 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BC68C (CcPerfLogFlushSection.c)
 *     CcSerializeWithLazyWriter @ 0x1403EFA24 (CcSerializeWithLazyWriter.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1404E8760 (CcPostDeferredWrites.c)
 */

void __fastcall CcFlushCachePriv(__int64 a1, void *a2, unsigned int a3, __int64 a4, char a5, __int128 *a6)
{
  char v6; // r14
  int v8; // esi
  __int64 v9; // r15
  __int128 *v10; // r12
  int v11; // eax
  signed __int64 *v12; // rbx
  __int64 v13; // r13
  signed __int64 *v14; // rax
  int v15; // ecx
  int v16; // ebx
  __int64 v17; // r8
  signed __int64 v18; // rcx
  signed __int64 v19; // rdx
  int v20; // r9d
  signed __int64 *v21; // rsi
  int v22; // eax
  int v23; // ecx
  int v24; // r15d
  int v25; // eax
  int v26; // esi
  char v27; // al
  unsigned int v28; // r8d
  signed __int64 *v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // esi
  __int64 v32; // rdi
  unsigned int v33; // r14d
  int v34; // r12d
  __int64 VirtualAddressIfMapped; // rax
  int v36; // r9d
  unsigned int v37; // ecx
  __int64 v38; // rbx
  struct _KEVENT *v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rdi
  unsigned int v42; // r8d
  unsigned int v43; // r14d
  int v44; // eax
  int v45; // ecx
  char v46; // al
  signed __int64 v47; // rbx
  unsigned int v48; // esi
  int v49; // r9d
  int v50; // edi
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rcx
  signed __int64 v57; // rdx
  signed __int64 v58; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D8h]
  unsigned int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh]
  int v64; // [rsp+48h] [rbp-B8h]
  int v65; // [rsp+4Ch] [rbp-B4h]
  unsigned int v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+54h] [rbp-ACh]
  int v68; // [rsp+58h] [rbp-A8h]
  signed __int64 *v69; // [rsp+60h] [rbp-A0h]
  __int64 Partition; // [rsp+68h] [rbp-98h]
  unsigned int v71; // [rsp+70h] [rbp-90h]
  signed __int64 v72; // [rsp+78h] [rbp-88h] BYREF
  __int64 v73; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v74; // [rsp+88h] [rbp-78h] BYREF
  signed __int64 v75; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-58h]
  signed __int64 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  __int128 *v81; // [rsp+E0h] [rbp-20h]
  __int128 v82; // [rsp+E8h] [rbp-18h] BYREF
  int v83; // [rsp+150h] [rbp+50h]
  void *v84; // [rsp+158h] [rbp+58h]
  int v86; // [rsp+168h] [rbp+68h]

  v86 = a4;
  v84 = a2;
  v83 = a1;
  v72 = 0LL;
  v6 = 0;
  v77 = 0LL;
  v62 = 0;
  v79 = 0LL;
  v66 = 0;
  v8 = 0;
  v68 = 0;
  v9 = 0LL;
  v71 = 0;
  v67 = 0;
  v64 = 0;
  v65 = 0;
  v63 = 0;
  v78 = 0LL;
  v73 = 0LL;
  Partition = 0LL;
  v82 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v74, 0, sizeof(v74));
  if ( a4 && a2 && a2 != &CcNoDelay )
    KeBugCheckEx(0x34u, 0x1640uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = &v82;
  if ( a6 )
    v10 = a6;
  v76 = 0LL;
  v81 = v10;
  *(_DWORD *)v10 = 0;
  if ( a2 == &CcNoDelay )
  {
    a2 = 0LL;
    v73 = *((_QWORD *)v10 + 1);
    v84 = 0LL;
    *(_DWORD *)v10 = -2147483626;
    v64 = 1;
  }
  else
  {
    v11 = 1;
    if ( a5 )
      v11 = 17;
    v63 = v11;
  }
  *((_QWORD *)v10 + 1) = 0LL;
  v12 = 0LL;
  if ( a2 != &CcFlushForImageSection )
    v12 = (signed __int64 *)a2;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v12;
  v69 = v12;
  if ( !v13 )
  {
    v16 = v64;
    goto LABEL_29;
  }
  Partition = CcGetPartition(v13);
  v74.LockQueue.Next = 0LL;
  v74.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock((__int64)&v74, (volatile __int64 *)(Partition + 128));
  v15 = *(_DWORD *)(v13 + 152);
  v6 = 1;
  v69 = v12;
  v14 = v12;
  if ( (v15 & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)v12 & 1) == 0 )
      goto LABEL_36;
    v14 = (signed __int64 *)((unsigned __int64)v12 ^ 1);
    v69 = (signed __int64 *)((unsigned __int64)v12 ^ 1);
  }
  v16 = v64;
  if ( !v64 )
  {
    if ( !v14 )
    {
LABEL_26:
      v17 = a3;
      ++*(_DWORD *)(v13 + 516);
      goto LABEL_30;
    }
    v18 = *v14;
    v19 = *(_QWORD *)(v13 + 32);
    if ( *v14 < v19 )
    {
      v17 = a3;
      if ( v18 + a3 <= v19 )
      {
        v14 = v69;
        ++*(_DWORD *)(v13 + 516);
        goto LABEL_30;
      }
      a3 = v19 - v18;
      v14 = v69;
      goto LABEL_26;
    }
LABEL_36:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v74);
LABEL_37:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  if ( (v15 & 0x10000) == 0 )
  {
LABEL_29:
    v17 = a3;
    goto LABEL_30;
  }
  v17 = a3;
  v65 = 1;
  if ( *(_DWORD *)(v13 + 516) )
    v8 = 1;
  v14 = v69;
LABEL_30:
  if ( v14 && !(_DWORD)v17 )
  {
    if ( v13 )
    {
      if ( !v16 )
        --*(_DWORD *)(v13 + 516);
    }
    if ( !v6 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( v84 == &CcFlushForImageSection )
  {
    if ( !v13 )
      goto LABEL_45;
    if ( *(_DWORD *)(v13 + 516) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(Partition, v13, v17) )
    {
      --*(_DWORD *)(v13 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v74);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *(_DWORD *)v10 = -1073741740;
      return;
    }
  }
  if ( v13 )
  {
    ++*(_DWORD *)(v13 + 4);
    ++*(_DWORD *)(v13 + 536);
    v9 = *(_QWORD *)((*(_QWORD *)(v13 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
LABEL_45:
  if ( v6 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v74);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v13 && (*(_DWORD *)(v13 + 152) & 0x40000000) != 0 )
    v8 = 1;
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    CcPerfLogFlushCache(v73, v13, (_DWORD)v69, a3, v16, v65, v8 == 1);
  if ( !v16 )
  {
    if ( !v13 )
      goto LABEL_64;
    if ( (*(_DWORD *)(v13 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(Partition, v13);
  }
  if ( (!v13
     || (*(_BYTE *)(v9 + 6) & 0x10) != 0 && (*(_BYTE *)(v9 + 4) & 0x20) != 0
     || (*(_DWORD *)(v13 + 152) & 0x20000) != 0)
    && !v16
    || v8 )
  {
    goto LABEL_64;
  }
  if ( !v13 )
    return;
  if ( (*(_DWORD *)(v13 + 152) & 0x4000000) != 0 )
  {
LABEL_64:
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
      CcPerfLogFlushSection(v73, v13, (_DWORD)v69, a3, v63);
    if ( v13 )
      CcUnmapVacbArray(v13, (_DWORD)v69, a3, 0, 0, 0);
    v21 = v69;
    v22 = MmFlushSection(v83, (_DWORD)v69, a3, v20, (__int64)v10, v63);
    if ( v22 >= 0 )
      goto LABEL_74;
    v23 = *(_DWORD *)v10;
    if ( v16 )
    {
      if ( v23 != -2147483626 )
        goto LABEL_74;
    }
    else if ( v23 )
    {
LABEL_74:
      v24 = v68;
      if ( *(int *)v10 < 0 )
        v24 = *(_DWORD *)v10;
      v68 = v24;
      goto LABEL_78;
    }
    *(_DWORD *)v10 = v22;
    goto LABEL_74;
  }
  v24 = v68;
  v21 = v69;
LABEL_78:
  if ( !v13 )
    goto LABEL_193;
  if ( (*(_DWORD *)(v13 + 152) & 0x4000000) != 0 )
    goto LABEL_184;
  if ( v21 )
    v77 = *v21;
  v25 = 1;
  if ( a3 )
    v25 = a3;
  v62 = v25;
  if ( v16 )
    v76 = MEMORY[0xFFFFF78000000320];
  do
  {
LABEL_86:
    v26 = v65;
    if ( !*(_DWORD *)(v13 + 192) && v16 && !v65
      || !*(_QWORD *)(v13 + 8) && (*(_DWORD *)(v13 + 152) & 4) == 0 && !*(_DWORD *)(v13 + 112)
      || v67 )
    {
      goto LABEL_181;
    }
    v27 = v16 && (unsigned __int8)CcAmILowPriorityWriter(v13);
    v28 = !v16 || v26 ? v62 : 0;
    if ( !v16 || v26 )
    {
      v29 = &v77;
      if ( !v69 )
        LODWORD(v29) = 0;
    }
    else
    {
      LODWORD(v29) = 0;
    }
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v13,
                             (_DWORD)v29,
                             v28,
                             v86,
                             (__int64)&v72,
                             (__int64)&v62,
                             (__int64)&v79,
                             v27) )
      goto LABEL_181;
    v30 = v62;
    v31 = 0;
    v32 = Partition;
    v33 = v62;
    v34 = v65;
    while ( 1 )
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v13, v72 + v30 - (unsigned __int64)v33, &v78, &v66);
      if ( VirtualAddressIfMapped )
      {
        v37 = v66;
        if ( v66 > v33 )
          v37 = v33;
        v66 = v37;
        if ( !(unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v37) && !v31
          || v72 + v62 >= *(_QWORD *)(v13 + 40)
          || (*(_DWORD *)(v13 + 268) & 0xF) == 0
          || !v16
          || v34
          || (*(_DWORD *)(v13 + 152) & 0x200) != 0
          || (v31 = 1, *(_BYTE *)(v32 + 964)) )
        {
          v31 = 0;
        }
        v38 = *(_QWORD *)(v78 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v78 + 16)) )
        {
          v39 = *(struct _KEVENT **)(v38 + 184);
          if ( v39 )
            KeSetEvent(v39, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v38 + 544));
        }
        v16 = v64;
      }
      else
      {
        v40 = v66;
        if ( v66 > v33 )
          v40 = v33;
        v66 = v40;
      }
      v33 -= v66;
      if ( !v33 )
        break;
      v30 = v62;
    }
    __addgsdword(0x8128u, v31);
    v41 = v76;
    v10 = v81;
    v24 = v68;
    if ( v31 )
    {
      v54 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v74);
      *(_QWORD *)(v54 + 752) += (unsigned __int64)v62 >> 12;
      KeReleaseInStackQueuedSpinLock(&v74);
      goto LABEL_167;
    }
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
      CcPerfLogFlushSection(v73, v13, (unsigned int)&v72, v62, v63);
    v42 = v62;
    v60 = v63;
    v43 = v16 != 0 ? 0x80000016 : 0;
    *(_DWORD *)v10 = v43;
    v44 = MmFlushSection(v83, (unsigned int)&v72, v42, v36, (__int64)v10, v60);
    if ( v44 >= 0 )
      goto LABEL_139;
    v45 = *(_DWORD *)v10;
    if ( v16 )
    {
      if ( v45 != -2147483626 )
        goto LABEL_139;
LABEL_138:
      *(_DWORD *)v10 = v44;
      goto LABEL_139;
    }
    if ( !v45 )
      goto LABEL_138;
LABEL_139:
    if ( *(int *)v10 >= 0 )
    {
      if ( (*(_DWORD *)(v13 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v74);
        *(_DWORD *)(v13 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&v74);
      }
      if ( v16 )
      {
        __incgsdword(0x812Cu);
        __addgsdword(0x8130u, (v62 + 4095) >> 12);
        v46 = 0;
      }
      else
      {
LABEL_160:
        v46 = 0;
      }
      goto LABEL_168;
    }
    v47 = v72;
    v48 = v62;
    v75 = v72;
    if ( !(unsigned __int8)CcIsFatalWriteError(v13) )
    {
      v67 = 1;
      goto LABEL_167;
    }
    v50 = v64;
    do
    {
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
        CcPerfLogFlushSection(v73, v13, (unsigned int)&v75, 4096, v63);
      v61 = v63;
      *(_DWORD *)v10 = v43;
      v51 = MmFlushSection(v83, (unsigned int)&v75, 4096, v49, (__int64)v10, v61);
      if ( v51 < 0 )
      {
        v52 = *(_DWORD *)v10;
        if ( !v50 )
        {
          if ( v52 )
            goto LABEL_155;
LABEL_154:
          *(_DWORD *)v10 = v51;
          goto LABEL_155;
        }
        if ( v52 == -2147483626 )
          goto LABEL_154;
      }
LABEL_155:
      if ( *(int *)v10 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v74);
        *(_DWORD *)(v13 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&v74);
LABEL_157:
        v53 = v67;
        goto LABEL_158;
      }
      if ( (unsigned __int8)CcIsFatalWriteError(v13) )
      {
        if ( !v24 )
          v24 = *(_DWORD *)v10;
        goto LABEL_157;
      }
      v53 = 1;
      v67 = 1;
      if ( !v24 )
        v24 = *(_DWORD *)v10;
LABEL_158:
      v47 += 4096LL;
      v75 = v47;
      v48 -= 4096;
    }
    while ( v48 );
    v41 = v76;
    v68 = v24;
    if ( !v53 )
      goto LABEL_160;
LABEL_167:
    v46 = 1;
LABEL_168:
    LOBYTE(BugCheckParameter4) = v46;
    CcReleaseByteRangeFromWrite(v13, &v72, v62, v79, BugCheckParameter4);
    v55 = Partition;
    v71 += v62;
    if ( v71 >= 0x40000 && *(_QWORD *)(Partition + 784) != Partition + 784 )
    {
      CcPostDeferredWrites(Partition);
      v55 = Partition;
      v71 = 0;
    }
    v16 = v64;
    if ( v64 && !v65 )
    {
      v56 = *(_QWORD *)(v55 + 784) == v55 + 784 ? CcIdleDelayTick / 0xAu : (unsigned int)CcIdleDelayTick;
      if ( MEMORY[0xFFFFF78000000320] > v41 + v56 )
      {
        *((_QWORD *)v10 + 1) = 35422LL;
        goto LABEL_181;
      }
    }
  }
  while ( !v69 );
  v57 = *v69;
  v58 = v62 + v72;
  v72 = v58;
  if ( v57 + a3 > v58 )
  {
    v77 = v58;
    v62 = a3 + v57 - v58;
    goto LABEL_86;
  }
LABEL_181:
  if ( v71 && *(_QWORD *)(Partition + 784) != Partition + 784 )
    CcPostDeferredWrites(Partition);
LABEL_184:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v74);
  CcDecrementOpenCount(v13);
  if ( !v16 )
    --*(_DWORD *)(v13 + 516);
  if ( v84 == &CcFlushForImageSection
    && *(int *)v10 >= 0
    && v24 >= 0
    && (*(_DWORD *)(v13 + 112) || *(_DWORD *)(v13 + 516)) )
  {
    v24 = -1073741740;
  }
  KeReleaseInStackQueuedSpinLock(&v74);
LABEL_193:
  if ( v24 < 0 )
    *(_DWORD *)v10 = v24;
}
