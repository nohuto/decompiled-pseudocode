/*
 * XREFs of CcFlushCachePriv @ 0x1402D13F0
 * Callers:
 *     CcFlushCache @ 0x14023F770 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x14024B390 (CcFlushCacheToLsn.c)
 *     CcZeroData @ 0x140299610 (CcZeroData.c)
 *     MiFlushDataSection @ 0x14029A2A0 (MiFlushDataSection.c)
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1402FA2A0 (CcCoherencyFlushAndPurgeCache.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAmILowPriorityWriter @ 0x14022ECB0 (CcAmILowPriorityWriter.c)
 *     CcIsFatalWriteError @ 0x1402402AC (CcIsFatalWriteError.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14024ECCC (CcBoostLowPriorityWorkerThread.c)
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402FEE3C (CcReleaseByteRangeFromWrite.c)
 *     CcGetVirtualAddressIfMapped @ 0x14031A194 (CcGetVirtualAddressIfMapped.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14031AC90 (CcAcquireByteRangeForWrite.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     CcPerfLogFlushCache @ 0x1403BD208 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BD30C (CcPerfLogFlushSection.c)
 *     CcSerializeWithLazyWriter @ 0x1403F0534 (CcSerializeWithLazyWriter.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1404EA530 (CcPostDeferredWrites.c)
 */

void __fastcall CcFlushCachePriv(__int64 a1, void *a2, unsigned int a3, __int64 a4, char a5, __int128 *a6)
{
  char v6; // r14
  int v8; // esi
  __int64 v9; // r15
  __int128 *v10; // r12
  int v11; // eax
  __int64 *v12; // rbx
  char v13; // dl
  char v14; // r8
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // rcx
  signed __int64 v23; // rdx
  unsigned int v24; // edx
  __int64 v25; // r9
  __int64 *v26; // rsi
  int v27; // eax
  int v28; // ecx
  int v29; // r15d
  char v30; // r8
  int v31; // eax
  int v32; // esi
  char v33; // al
  unsigned int v34; // r8d
  __int64 *v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // esi
  __int64 v38; // rdi
  unsigned int v39; // r14d
  int v40; // r12d
  __int64 VirtualAddressIfMapped; // rax
  __int64 v42; // r9
  unsigned int v43; // ecx
  __int64 v44; // rbx
  struct _KEVENT *v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // r8
  unsigned int v49; // r14d
  int v50; // eax
  int v51; // ecx
  int v52; // edx
  char v53; // al
  __int64 v54; // rbx
  unsigned int v55; // esi
  __int64 v56; // r9
  int v57; // edi
  int v58; // eax
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rdx
  signed __int64 v65; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v67; // [rsp+28h] [rbp-D8h]
  int v68; // [rsp+28h] [rbp-D8h]
  unsigned int v69; // [rsp+40h] [rbp-C0h] BYREF
  int v70; // [rsp+44h] [rbp-BCh]
  int v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+4Ch] [rbp-B4h]
  unsigned int v73; // [rsp+50h] [rbp-B0h] BYREF
  int v74; // [rsp+54h] [rbp-ACh]
  int v75; // [rsp+58h] [rbp-A8h]
  __int64 *v76; // [rsp+60h] [rbp-A0h]
  __int64 Partition; // [rsp+68h] [rbp-98h]
  unsigned int v78; // [rsp+70h] [rbp-90h]
  __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  __int64 v80; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v81; // [rsp+88h] [rbp-78h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h]
  __int64 v84; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  __int128 *v88; // [rsp+E0h] [rbp-20h]
  __int128 v89; // [rsp+E8h] [rbp-18h] BYREF
  int v90; // [rsp+150h] [rbp+50h]
  void *v91; // [rsp+158h] [rbp+58h]
  int v93; // [rsp+168h] [rbp+68h]

  v93 = a4;
  v91 = a2;
  v90 = a1;
  v79 = 0LL;
  v6 = 0;
  v84 = 0LL;
  v69 = 0;
  v86 = 0LL;
  v73 = 0;
  v8 = 0;
  v75 = 0;
  v9 = 0LL;
  v78 = 0;
  v74 = 0;
  v71 = 0;
  v72 = 0;
  v70 = 0;
  v85 = 0LL;
  v80 = 0LL;
  Partition = 0LL;
  v89 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v81, 0, sizeof(v81));
  if ( a4 && a2 && a2 != &CcNoDelay )
    KeBugCheckEx(0x34u, 0x1641uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = &v89;
  if ( a6 )
    v10 = a6;
  v83 = 0LL;
  v88 = v10;
  *(_DWORD *)v10 = 0;
  if ( a2 == &CcNoDelay )
  {
    a2 = 0LL;
    v80 = *((_QWORD *)v10 + 1);
    v91 = 0LL;
    *(_DWORD *)v10 = -2147483626;
    v71 = 1;
  }
  else
  {
    v11 = 1;
    if ( a5 )
      v11 = 17;
    v70 = v11;
  }
  *((_QWORD *)v10 + 1) = 0LL;
  v12 = 0LL;
  if ( a2 != &CcFlushForImageSection )
    v12 = (__int64 *)a2;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v15 = *(_QWORD *)(a1 + 8);
  v16 = v12;
  v76 = v12;
  if ( !v15 )
  {
    v20 = v71;
    goto LABEL_29;
  }
  Partition = CcGetPartition(v15, v13, v14);
  v81.LockQueue.Next = 0LL;
  v81.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock(&v81, Partition + 128, v17, v18);
  v19 = *(_DWORD *)(v15 + 152);
  v6 = 1;
  v76 = v12;
  v16 = v12;
  if ( (v19 & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)v12 & 1) == 0 )
      goto LABEL_36;
    v16 = (__int64 *)((unsigned __int64)v12 ^ 1);
    v76 = (__int64 *)((unsigned __int64)v12 ^ 1);
  }
  v20 = v71;
  if ( !v71 )
  {
    if ( !v16 )
    {
LABEL_26:
      v21 = a3;
      ++*(_DWORD *)(v15 + 516);
      goto LABEL_30;
    }
    v22 = *v16;
    v23 = *(_QWORD *)(v15 + 32);
    if ( *v16 < v23 )
    {
      v21 = a3;
      if ( v22 + a3 <= v23 )
      {
        v16 = v76;
        ++*(_DWORD *)(v15 + 516);
        goto LABEL_30;
      }
      a3 = v23 - v22;
      v16 = v76;
      goto LABEL_26;
    }
LABEL_36:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
LABEL_37:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  if ( (v19 & 0x10000) == 0 )
  {
LABEL_29:
    v21 = a3;
    goto LABEL_30;
  }
  v21 = a3;
  v72 = 1;
  if ( *(_DWORD *)(v15 + 516) )
    v8 = 1;
  v16 = v76;
LABEL_30:
  if ( v16 && !(_DWORD)v21 )
  {
    if ( v15 )
    {
      if ( !v20 )
        --*(_DWORD *)(v15 + 516);
    }
    if ( !v6 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( v91 == &CcFlushForImageSection )
  {
    if ( !v15 )
      goto LABEL_45;
    if ( *(_DWORD *)(v15 + 516) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(Partition, v15, v21) )
    {
      --*(_DWORD *)(v15 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *(_DWORD *)v10 = -1073741740;
      return;
    }
  }
  if ( v15 )
  {
    ++*(_DWORD *)(v15 + 4);
    ++*(_DWORD *)(v15 + 536);
    v9 = *(_QWORD *)((*(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
LABEL_45:
  if ( v6 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v15 && (*(_DWORD *)(v15 + 152) & 0x40000000) != 0 )
    v8 = 1;
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    CcPerfLogFlushCache(v80, v15, (_DWORD)v76, a3, v20, v72, v8 == 1);
  if ( !v20 )
  {
    if ( !v15 )
      goto LABEL_64;
    if ( (*(_DWORD *)(v15 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(Partition, v15);
  }
  if ( (!v15
     || (*(_BYTE *)(v9 + 6) & 0x10) != 0 && (*(_BYTE *)(v9 + 4) & 0x20) != 0
     || (*(_DWORD *)(v15 + 152) & 0x20000) != 0)
    && !v20
    || v8 )
  {
    goto LABEL_64;
  }
  if ( !v15 )
    return;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
  {
LABEL_64:
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
      CcPerfLogFlushSection(v80, v15, (_DWORD)v76, a3, v70);
    if ( v15 )
      CcUnmapVacbArray(v15, (_DWORD)v76, a3, 0, 0, 0);
    v26 = v76;
    v27 = MmFlushSection(v90, v76, a3, v25, v10, v70);
    if ( v27 >= 0 )
      goto LABEL_74;
    v28 = *(_DWORD *)v10;
    if ( v20 )
    {
      if ( v28 != -2147483626 )
        goto LABEL_74;
    }
    else if ( v28 )
    {
LABEL_74:
      v29 = v75;
      if ( *(int *)v10 < 0 )
        v29 = *(_DWORD *)v10;
      v75 = v29;
      goto LABEL_78;
    }
    *(_DWORD *)v10 = v27;
    goto LABEL_74;
  }
  v29 = v75;
  v26 = v76;
LABEL_78:
  if ( !v15 )
    goto LABEL_193;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
    goto LABEL_184;
  if ( v26 )
    v84 = *v26;
  v30 = a3;
  v31 = 1;
  if ( a3 )
    v31 = a3;
  v69 = v31;
  if ( v20 )
    v83 = MEMORY[0xFFFFF78000000320];
  do
  {
LABEL_86:
    v32 = v72;
    if ( !*(_DWORD *)(v15 + 192) && v20 && !v72
      || !*(_QWORD *)(v15 + 8) && (*(_DWORD *)(v15 + 152) & 4) == 0 && !*(_DWORD *)(v15 + 112)
      || v74 )
    {
      goto LABEL_181;
    }
    v33 = v20 && CcAmILowPriorityWriter(v15, v24, v30);
    v34 = !v20 || v32 ? v69 : 0;
    if ( !v20 || v32 )
    {
      v35 = &v84;
      if ( !v76 )
        LODWORD(v35) = 0;
    }
    else
    {
      LODWORD(v35) = 0;
    }
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v15,
                             (_DWORD)v35,
                             v34,
                             v93,
                             (__int64)&v79,
                             (__int64)&v69,
                             (__int64)&v86,
                             v33) )
      goto LABEL_181;
    v36 = v69;
    v37 = 0;
    v38 = Partition;
    v39 = v69;
    v40 = v72;
    while ( 1 )
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v15, v79 + v36 - (unsigned __int64)v39, &v85, &v73);
      if ( VirtualAddressIfMapped )
      {
        v43 = v73;
        if ( v73 > v39 )
          v43 = v39;
        v73 = v43;
        if ( !(unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v43) && !v37
          || v79 + v69 >= *(_QWORD *)(v15 + 40)
          || (*(_DWORD *)(v15 + 268) & 0xF) == 0
          || !v20
          || v40
          || (*(_DWORD *)(v15 + 152) & 0x200) != 0
          || (v37 = 1, *(_BYTE *)(v38 + 964)) )
        {
          v37 = 0;
        }
        v44 = *(_QWORD *)(v85 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v85 + 16)) )
        {
          v45 = *(struct _KEVENT **)(v44 + 184);
          if ( v45 )
            KeSetEvent(v45, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v44 + 544));
        }
        v20 = v71;
      }
      else
      {
        v46 = v73;
        if ( v73 > v39 )
          v46 = v39;
        v73 = v46;
      }
      v39 -= v73;
      if ( !v39 )
        break;
      v36 = v69;
    }
    __addgsdword(0x8128u, v37);
    v47 = v83;
    v10 = v88;
    v29 = v75;
    if ( v37 )
    {
      v61 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v81);
      *(_QWORD *)(v61 + 752) += (unsigned __int64)v69 >> 12;
      KeReleaseInStackQueuedSpinLock(&v81);
      goto LABEL_167;
    }
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
      CcPerfLogFlushSection(v80, v15, (unsigned int)&v79, v69, v70);
    v48 = v69;
    v67 = v70;
    v49 = v20 != 0 ? 0x80000016 : 0;
    *(_DWORD *)v10 = v49;
    v50 = MmFlushSection(v90, &v79, v48, v42, v10, v67);
    if ( v50 >= 0 )
      goto LABEL_139;
    v51 = *(_DWORD *)v10;
    if ( v20 )
    {
      if ( v51 != -2147483626 )
        goto LABEL_139;
LABEL_138:
      *(_DWORD *)v10 = v50;
      goto LABEL_139;
    }
    if ( !v51 )
      goto LABEL_138;
LABEL_139:
    v52 = *(_DWORD *)v10;
    if ( *(int *)v10 >= 0 )
    {
      if ( (*(_DWORD *)(v15 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v81);
        *(_DWORD *)(v15 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&v81);
      }
      if ( v20 )
      {
        __incgsdword(0x812Cu);
        __addgsdword(0x8130u, (v69 + 4095) >> 12);
        v53 = 0;
      }
      else
      {
LABEL_160:
        v53 = 0;
      }
      goto LABEL_168;
    }
    v54 = v79;
    v55 = v69;
    v82 = v79;
    if ( !CcIsFatalWriteError(v15, v52) )
    {
      v74 = 1;
      goto LABEL_167;
    }
    v57 = v71;
    do
    {
      if ( (xmmword_140CFC490 & 0x20000) != 0 )
        CcPerfLogFlushSection(v80, v15, (unsigned int)&v82, 4096, v70);
      v68 = v70;
      *(_DWORD *)v10 = v49;
      v58 = MmFlushSection(v90, &v82, 4096LL, v56, v10, v68);
      if ( v58 < 0 )
      {
        v59 = *(_DWORD *)v10;
        if ( !v57 )
        {
          if ( v59 )
            goto LABEL_155;
LABEL_154:
          *(_DWORD *)v10 = v58;
          goto LABEL_155;
        }
        if ( v59 == -2147483626 )
          goto LABEL_154;
      }
LABEL_155:
      if ( *(int *)v10 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v81);
        *(_DWORD *)(v15 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&v81);
LABEL_157:
        v60 = v74;
        goto LABEL_158;
      }
      if ( CcIsFatalWriteError(v15, *(_DWORD *)v10) )
      {
        if ( !v29 )
          v29 = *(_DWORD *)v10;
        goto LABEL_157;
      }
      v60 = 1;
      v74 = 1;
      if ( !v29 )
        v29 = *(_DWORD *)v10;
LABEL_158:
      v54 += 4096LL;
      v82 = v54;
      v55 -= 4096;
    }
    while ( v55 );
    v47 = v83;
    v75 = v29;
    if ( !v60 )
      goto LABEL_160;
LABEL_167:
    v53 = 1;
LABEL_168:
    LOBYTE(BugCheckParameter4) = v53;
    CcReleaseByteRangeFromWrite(v15, &v79, v69, v86, BugCheckParameter4);
    v62 = Partition;
    v78 += v69;
    if ( v78 >= 0x40000 && *(_QWORD *)(Partition + 784) != Partition + 784 )
    {
      CcPostDeferredWrites(Partition);
      v62 = Partition;
      v78 = 0;
    }
    v20 = v71;
    if ( v71 && !v72 )
    {
      if ( *(_QWORD *)(v62 + 784) == v62 + 784 )
      {
        v24 = CcIdleDelayTick / 0xAu;
        v63 = CcIdleDelayTick / 0xAu;
      }
      else
      {
        v63 = (unsigned int)CcIdleDelayTick;
      }
      if ( MEMORY[0xFFFFF78000000320] > v47 + v63 )
      {
        *((_QWORD *)v10 + 1) = 35422LL;
        goto LABEL_181;
      }
    }
  }
  while ( !v76 );
  v64 = *v76;
  v65 = v69 + v79;
  v30 = a3;
  v79 = v65;
  if ( v64 + a3 > v65 )
  {
    v84 = v65;
    v24 = a3 + v64 - v65;
    v69 = v24;
    goto LABEL_86;
  }
LABEL_181:
  if ( v78 && *(_QWORD *)(Partition + 784) != Partition + 784 )
    CcPostDeferredWrites(Partition);
LABEL_184:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v81);
  CcDecrementOpenCount(v15);
  if ( !v20 )
    --*(_DWORD *)(v15 + 516);
  if ( v91 == &CcFlushForImageSection
    && *(int *)v10 >= 0
    && v29 >= 0
    && (*(_DWORD *)(v15 + 112) || *(_DWORD *)(v15 + 516)) )
  {
    v29 = -1073741740;
  }
  KeReleaseInStackQueuedSpinLock(&v81);
LABEL_193:
  if ( v29 < 0 )
    *(_DWORD *)v10 = v29;
}
