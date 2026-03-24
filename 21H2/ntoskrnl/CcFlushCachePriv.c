/*
 * XREFs of CcFlushCachePriv @ 0x14022CBA0
 * Callers:
 *     CcWriteBehindInternal @ 0x14022DA70 (CcWriteBehindInternal.c)
 *     CcFlushCache @ 0x1402C12D0 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x1402CCE90 (CcFlushCacheToLsn.c)
 *     CcZeroData @ 0x1402E82C0 (CcZeroData.c)
 *     MiFlushDataSection @ 0x1402E8F50 (MiFlushDataSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1402EF550 (CcCoherencyFlushAndPurgeCache.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     CcZeroEndOfLastPage @ 0x1403570FC (CcZeroEndOfLastPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022D600 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x1402746FC (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAmILowPriorityWriter @ 0x1402B0950 (CcAmILowPriorityWriter.c)
 *     CcIsFatalWriteError @ 0x1402C1E0C (CcIsFatalWriteError.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D083C (CcBoostLowPriorityWorkerThread.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402F40EC (CcReleaseByteRangeFromWrite.c)
 *     CcGetVirtualAddressIfMapped @ 0x14030F444 (CcGetVirtualAddressIfMapped.c)
 *     MmSetAddressRangeModifiedEx @ 0x14030F640 (MmSetAddressRangeModifiedEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14030FF40 (CcAcquireByteRangeForWrite.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     CcPerfLogFlushCache @ 0x1403BD098 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BD19C (CcPerfLogFlushSection.c)
 *     CcSerializeWithLazyWriter @ 0x1403F03C4 (CcSerializeWithLazyWriter.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1404EA2F0 (CcPostDeferredWrites.c)
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
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // r8
  signed __int64 v19; // rcx
  signed __int64 v20; // rdx
  int v21; // r9d
  signed __int64 *v22; // rsi
  int v23; // eax
  int v24; // ecx
  int v25; // r15d
  int v26; // eax
  int v27; // esi
  char v28; // al
  unsigned int v29; // r8d
  signed __int64 *v30; // rdx
  unsigned int v31; // ecx
  unsigned int v32; // esi
  __int64 v33; // rdi
  unsigned int v34; // r14d
  int v35; // r12d
  __int64 VirtualAddressIfMapped; // rax
  int v37; // r9d
  unsigned int v38; // ecx
  __int64 v39; // rbx
  struct _KEVENT *v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rdi
  unsigned int v43; // r8d
  unsigned int v44; // r14d
  int v45; // eax
  int v46; // ecx
  char v47; // al
  signed __int64 v48; // rbx
  unsigned int v49; // esi
  int v50; // r9d
  int v51; // edi
  int v52; // eax
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // rcx
  signed __int64 v58; // rdx
  signed __int64 v59; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D8h]
  unsigned int v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+44h] [rbp-BCh]
  int v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+4Ch] [rbp-B4h]
  unsigned int v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+54h] [rbp-ACh]
  int v69; // [rsp+58h] [rbp-A8h]
  signed __int64 *v70; // [rsp+60h] [rbp-A0h]
  __int64 Partition; // [rsp+68h] [rbp-98h]
  unsigned int v72; // [rsp+70h] [rbp-90h]
  signed __int64 v73; // [rsp+78h] [rbp-88h] BYREF
  __int64 v74; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v75; // [rsp+88h] [rbp-78h] BYREF
  signed __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h]
  signed __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  __int128 *v82; // [rsp+E0h] [rbp-20h]
  __int128 v83; // [rsp+E8h] [rbp-18h] BYREF
  int v84; // [rsp+150h] [rbp+50h]
  void *v85; // [rsp+158h] [rbp+58h]
  int v87; // [rsp+168h] [rbp+68h]

  v87 = a4;
  v85 = a2;
  v84 = a1;
  v73 = 0LL;
  v6 = 0;
  v78 = 0LL;
  v63 = 0;
  v80 = 0LL;
  v67 = 0;
  v8 = 0;
  v69 = 0;
  v9 = 0LL;
  v72 = 0;
  v68 = 0;
  v65 = 0;
  v66 = 0;
  v64 = 0;
  v79 = 0LL;
  v74 = 0LL;
  Partition = 0LL;
  v83 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v75, 0, sizeof(v75));
  if ( a4 && a2 && a2 != &CcNoDelay )
    KeBugCheckEx(0x34u, 0x1641uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = &v83;
  if ( a6 )
    v10 = a6;
  v77 = 0LL;
  v82 = v10;
  *(_DWORD *)v10 = 0;
  if ( a2 == &CcNoDelay )
  {
    a2 = 0LL;
    v74 = *((_QWORD *)v10 + 1);
    v85 = 0LL;
    *(_DWORD *)v10 = -2147483626;
    v65 = 1;
  }
  else
  {
    v11 = 1;
    if ( a5 )
      v11 = 17;
    v64 = v11;
  }
  *((_QWORD *)v10 + 1) = 0LL;
  v12 = 0LL;
  if ( a2 != &CcFlushForImageSection )
    v12 = (signed __int64 *)a2;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v12;
  v70 = v12;
  if ( !v13 )
  {
    v17 = v65;
    goto LABEL_29;
  }
  Partition = CcGetPartition(v13);
  v75.LockQueue.Next = 0LL;
  v75.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock(&v75, Partition + 128, v15);
  v16 = *(_DWORD *)(v13 + 152);
  v6 = 1;
  v70 = v12;
  v14 = v12;
  if ( (v16 & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)v12 & 1) == 0 )
      goto LABEL_36;
    v14 = (signed __int64 *)((unsigned __int64)v12 ^ 1);
    v70 = (signed __int64 *)((unsigned __int64)v12 ^ 1);
  }
  v17 = v65;
  if ( !v65 )
  {
    if ( !v14 )
    {
LABEL_26:
      v18 = a3;
      ++*(_DWORD *)(v13 + 516);
      goto LABEL_30;
    }
    v19 = *v14;
    v20 = *(_QWORD *)(v13 + 32);
    if ( *v14 < v20 )
    {
      v18 = a3;
      if ( v19 + a3 <= v20 )
      {
        v14 = v70;
        ++*(_DWORD *)(v13 + 516);
        goto LABEL_30;
      }
      a3 = v20 - v19;
      v14 = v70;
      goto LABEL_26;
    }
LABEL_36:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v75);
LABEL_37:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  if ( (v16 & 0x10000) == 0 )
  {
LABEL_29:
    v18 = a3;
    goto LABEL_30;
  }
  v18 = a3;
  v66 = 1;
  if ( *(_DWORD *)(v13 + 516) )
    v8 = 1;
  v14 = v70;
LABEL_30:
  if ( v14 && !(_DWORD)v18 )
  {
    if ( v13 )
    {
      if ( !v17 )
        --*(_DWORD *)(v13 + 516);
    }
    if ( !v6 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( v85 == &CcFlushForImageSection )
  {
    if ( !v13 )
      goto LABEL_45;
    if ( *(_DWORD *)(v13 + 516) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(Partition, v13, v18) )
    {
      --*(_DWORD *)(v13 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v75);
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v75);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v13 && (*(_DWORD *)(v13 + 152) & 0x40000000) != 0 )
    v8 = 1;
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    CcPerfLogFlushCache(v74, v13, (_DWORD)v70, a3, v17, v66, v8 == 1);
  if ( !v17 )
  {
    if ( !v13 )
      goto LABEL_64;
    if ( (*(_DWORD *)(v13 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(Partition, v13);
  }
  if ( (!v13
     || (*(_BYTE *)(v9 + 6) & 0x10) != 0 && (*(_BYTE *)(v9 + 4) & 0x20) != 0
     || (*(_DWORD *)(v13 + 152) & 0x20000) != 0)
    && !v17
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
      CcPerfLogFlushSection(v74, v13, (_DWORD)v70, a3, v64);
    if ( v13 )
      CcUnmapVacbArray(v13, (_DWORD)v70, a3, 0, 0, 0);
    v22 = v70;
    v23 = MmFlushSection(v84, (_DWORD)v70, a3, v21, (__int64)v10, v64);
    if ( v23 >= 0 )
      goto LABEL_74;
    v24 = *(_DWORD *)v10;
    if ( v17 )
    {
      if ( v24 != -2147483626 )
        goto LABEL_74;
    }
    else if ( v24 )
    {
LABEL_74:
      v25 = v69;
      if ( *(int *)v10 < 0 )
        v25 = *(_DWORD *)v10;
      v69 = v25;
      goto LABEL_78;
    }
    *(_DWORD *)v10 = v23;
    goto LABEL_74;
  }
  v25 = v69;
  v22 = v70;
LABEL_78:
  if ( !v13 )
    goto LABEL_193;
  if ( (*(_DWORD *)(v13 + 152) & 0x4000000) != 0 )
    goto LABEL_184;
  if ( v22 )
    v78 = *v22;
  v26 = 1;
  if ( a3 )
    v26 = a3;
  v63 = v26;
  if ( v17 )
    v77 = MEMORY[0xFFFFF78000000320];
  do
  {
LABEL_86:
    v27 = v66;
    if ( !*(_DWORD *)(v13 + 192) && v17 && !v66
      || !*(_QWORD *)(v13 + 8) && (*(_DWORD *)(v13 + 152) & 4) == 0 && !*(_DWORD *)(v13 + 112)
      || v68 )
    {
      goto LABEL_181;
    }
    v28 = v17 && (unsigned __int8)CcAmILowPriorityWriter(v13);
    v29 = !v17 || v27 ? v63 : 0;
    if ( !v17 || v27 )
    {
      v30 = &v78;
      if ( !v70 )
        LODWORD(v30) = 0;
    }
    else
    {
      LODWORD(v30) = 0;
    }
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v13,
                             (_DWORD)v30,
                             v29,
                             v87,
                             (__int64)&v73,
                             (__int64)&v63,
                             (__int64)&v80,
                             v28) )
      goto LABEL_181;
    v31 = v63;
    v32 = 0;
    v33 = Partition;
    v34 = v63;
    v35 = v66;
    while ( 1 )
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v13, v73 + v31 - (unsigned __int64)v34, &v79, &v67);
      if ( VirtualAddressIfMapped )
      {
        v38 = v67;
        if ( v67 > v34 )
          v38 = v34;
        v67 = v38;
        if ( !(unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v38) && !v32
          || v73 + v63 >= *(_QWORD *)(v13 + 40)
          || (*(_DWORD *)(v13 + 268) & 0xF) == 0
          || !v17
          || v35
          || (*(_DWORD *)(v13 + 152) & 0x200) != 0
          || (v32 = 1, *(_BYTE *)(v33 + 964)) )
        {
          v32 = 0;
        }
        v39 = *(_QWORD *)(v79 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v79 + 16)) )
        {
          v40 = *(struct _KEVENT **)(v39 + 184);
          if ( v40 )
            KeSetEvent(v40, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v39 + 544));
        }
        v17 = v65;
      }
      else
      {
        v41 = v67;
        if ( v67 > v34 )
          v41 = v34;
        v67 = v41;
      }
      v34 -= v67;
      if ( !v34 )
        break;
      v31 = v63;
    }
    __addgsdword(0x8128u, v32);
    v42 = v77;
    v10 = v82;
    v25 = v69;
    if ( v32 )
    {
      v55 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v75);
      *(_QWORD *)(v55 + 752) += (unsigned __int64)v63 >> 12;
      KeReleaseInStackQueuedSpinLock(&v75);
      goto LABEL_167;
    }
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
      CcPerfLogFlushSection(v74, v13, (unsigned int)&v73, v63, v64);
    v43 = v63;
    v61 = v64;
    v44 = v17 != 0 ? 0x80000016 : 0;
    *(_DWORD *)v10 = v44;
    v45 = MmFlushSection(v84, (unsigned int)&v73, v43, v37, (__int64)v10, v61);
    if ( v45 >= 0 )
      goto LABEL_139;
    v46 = *(_DWORD *)v10;
    if ( v17 )
    {
      if ( v46 != -2147483626 )
        goto LABEL_139;
LABEL_138:
      *(_DWORD *)v10 = v45;
      goto LABEL_139;
    }
    if ( !v46 )
      goto LABEL_138;
LABEL_139:
    if ( *(int *)v10 >= 0 )
    {
      if ( (*(_DWORD *)(v13 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v75);
        *(_DWORD *)(v13 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&v75);
      }
      if ( v17 )
      {
        __incgsdword(0x812Cu);
        __addgsdword(0x8130u, (v63 + 4095) >> 12);
        v47 = 0;
      }
      else
      {
LABEL_160:
        v47 = 0;
      }
      goto LABEL_168;
    }
    v48 = v73;
    v49 = v63;
    v76 = v73;
    if ( !(unsigned __int8)CcIsFatalWriteError(v13) )
    {
      v68 = 1;
      goto LABEL_167;
    }
    v51 = v65;
    do
    {
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
        CcPerfLogFlushSection(v74, v13, (unsigned int)&v76, 4096, v64);
      v62 = v64;
      *(_DWORD *)v10 = v44;
      v52 = MmFlushSection(v84, (unsigned int)&v76, 4096, v50, (__int64)v10, v62);
      if ( v52 < 0 )
      {
        v53 = *(_DWORD *)v10;
        if ( !v51 )
        {
          if ( v53 )
            goto LABEL_155;
LABEL_154:
          *(_DWORD *)v10 = v52;
          goto LABEL_155;
        }
        if ( v53 == -2147483626 )
          goto LABEL_154;
      }
LABEL_155:
      if ( *(int *)v10 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v75);
        *(_DWORD *)(v13 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&v75);
LABEL_157:
        v54 = v68;
        goto LABEL_158;
      }
      if ( (unsigned __int8)CcIsFatalWriteError(v13) )
      {
        if ( !v25 )
          v25 = *(_DWORD *)v10;
        goto LABEL_157;
      }
      v54 = 1;
      v68 = 1;
      if ( !v25 )
        v25 = *(_DWORD *)v10;
LABEL_158:
      v48 += 4096LL;
      v76 = v48;
      v49 -= 4096;
    }
    while ( v49 );
    v42 = v77;
    v69 = v25;
    if ( !v54 )
      goto LABEL_160;
LABEL_167:
    v47 = 1;
LABEL_168:
    LOBYTE(BugCheckParameter4) = v47;
    CcReleaseByteRangeFromWrite(v13, &v73, v63, v80, BugCheckParameter4);
    v56 = Partition;
    v72 += v63;
    if ( v72 >= 0x40000 && *(_QWORD *)(Partition + 784) != Partition + 784 )
    {
      CcPostDeferredWrites(Partition);
      v56 = Partition;
      v72 = 0;
    }
    v17 = v65;
    if ( v65 && !v66 )
    {
      v57 = *(_QWORD *)(v56 + 784) == v56 + 784 ? CcIdleDelayTick / 0xAu : (unsigned int)CcIdleDelayTick;
      if ( MEMORY[0xFFFFF78000000320] > v42 + v57 )
      {
        *((_QWORD *)v10 + 1) = 35422LL;
        goto LABEL_181;
      }
    }
  }
  while ( !v70 );
  v58 = *v70;
  v59 = v63 + v73;
  v73 = v59;
  if ( v58 + a3 > v59 )
  {
    v78 = v59;
    v63 = a3 + v58 - v59;
    goto LABEL_86;
  }
LABEL_181:
  if ( v72 && *(_QWORD *)(Partition + 784) != Partition + 784 )
    CcPostDeferredWrites(Partition);
LABEL_184:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v75);
  CcDecrementOpenCount(v13);
  if ( !v17 )
    --*(_DWORD *)(v13 + 516);
  if ( v85 == &CcFlushForImageSection
    && *(int *)v10 >= 0
    && v25 >= 0
    && (*(_DWORD *)(v13 + 112) || *(_DWORD *)(v13 + 516)) )
  {
    v25 = -1073741740;
  }
  KeReleaseInStackQueuedSpinLock(&v75);
LABEL_193:
  if ( v25 < 0 )
    *(_DWORD *)v10 = v25;
}
