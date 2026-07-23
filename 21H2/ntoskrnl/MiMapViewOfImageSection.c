/*
 * XREFs of MiMapViewOfImageSection @ 0x140686B20
 * Callers:
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x1408C4904 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiDereferenceControlArea @ 0x140251BB8 (MiDereferenceControlArea.c)
 *     MiControlAreaRequiresCharge @ 0x14027C22C (MiControlAreaRequiresCharge.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14027C398 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiInsertVadEvent @ 0x14027CF2C (MiInsertVadEvent.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140320D00 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetWsAndInsertVad @ 0x140320DD0 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D5D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x14053A9D4 (MiRemoveVadEvent.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiAllocateFixupVad @ 0x140608CE8 (MiAllocateFixupVad.c)
 *     MiDereferencePerSessionProtos @ 0x14061B9CC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14061BAE4 (MiCreatePerSessionProtos.c)
 *     PsCallImageNotifyRoutines @ 0x140684E90 (PsCallImageNotifyRoutines.c)
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiAllowImageMap @ 0x140687660 (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x140687848 (MiIsVaRangeAvailable.c)
 *     MiUnmapVad @ 0x140688090 (MiUnmapVad.c)
 *     MiSecureVad @ 0x140689320 (MiSecureVad.c)
 *     MmUnsecureVirtualMemory @ 0x1406893D0 (MmUnsecureVirtualMemory.c)
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 *     MiArbitraryCodeBlocked @ 0x1406907CC (MiArbitraryCodeBlocked.c)
 *     MiSelectUserAddress @ 0x1406EA100 (MiSelectUserAddress.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiReferenceFileObjectForMap @ 0x140704020 (MiReferenceFileObjectForMap.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140704340 (MiAdvanceVadHint.c)
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 *     MiLoadUserSymbols @ 0x1407D0F7C (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x1408C48A8 (MiLogMapFileEvent.c)
 *     MiCreateLargePageVad @ 0x1408DA0C4 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // rsi
  bool v14; // zf
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 result; // rax
  int v18; // ecx
  unsigned int v19; // ebx
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  _DWORD *Pool; // rax
  __int64 v23; // rsi
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  int v33; // eax
  unsigned __int64 v34; // rdi
  __int64 v35; // r10
  int v36; // edi
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r12
  ULONG_PTR v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  int v45; // r13d
  __int64 v46; // rdi
  int PerSessionProtos; // edi
  int v48; // eax
  int v49; // r11d
  ULONG_PTR v50; // r13
  unsigned __int64 v51; // rdi
  unsigned __int16 v52; // ax
  int v53; // ecx
  unsigned int v54; // ebx
  __int64 v55; // rdi
  __int64 v56; // rdx
  unsigned int v57; // ecx
  int v58; // eax
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rsi
  _OWORD *FixupVad; // r13
  unsigned __int64 v63; // r12
  __int64 v64; // r13
  __int64 v65; // r13
  unsigned int v66; // eax
  __int64 v67; // rax
  __int16 v68; // cx
  __int64 v69; // rax
  __int16 v70; // cx
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int16 v73; // cx
  unsigned __int64 v74; // rdx
  unsigned int SessionId; // eax
  int LargePageVad; // r12d
  struct _DMA_ADAPTER *v77; // rcx
  unsigned __int64 v78; // rcx
  struct _DMA_ADAPTER *v79; // rcx
  unsigned int v80; // eax
  struct _DMA_ADAPTER *v81; // rcx
  __int64 v82; // r8
  __int64 VadEvent; // rax
  unsigned __int64 v84; // r8
  char v85; // r9
  __int64 v86; // rax
  unsigned __int64 v87; // rdi
  unsigned __int64 v88; // rdi
  int v89; // r9d
  _QWORD *v90; // rax
  __int64 v91; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v92; // [rsp+50h] [rbp-B0h]
  __int64 v93; // [rsp+50h] [rbp-B0h]
  __int64 v94; // [rsp+58h] [rbp-A8h]
  __int64 v95; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v96; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v97; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  __int64 v99; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v100; // [rsp+88h] [rbp-78h]
  __int64 v101; // [rsp+90h] [rbp-70h] BYREF
  __int64 v102; // [rsp+98h] [rbp-68h]
  __int128 v103; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v104; // [rsp+B0h] [rbp-50h]
  __int128 v105; // [rsp+C0h] [rbp-40h]
  __int64 v106; // [rsp+D0h] [rbp-30h]
  __int64 v107[11]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v109; // [rsp+188h] [rbp+88h]
  unsigned int v110; // [rsp+188h] [rbp+88h]

  v9 = a1;
  memset(v107, 0, 0x48uLL);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)(a2 + 88);
  v106 = 0LL;
  v12 = 0;
  v95 = v10;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v13 = *(_QWORD *)(v10 + 56);
  v102 = v13;
  if ( dword_140C4CCD0
    && dword_140C4CCD4 == *(_DWORD *)(v13 + 60)
    && dword_140C4CCD8 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v14 = (*(_DWORD *)(v9 + 56) & 0x10000000) == 0;
  v15 = *(_QWORD *)(v10 + 32);
  v92 = *(_QWORD *)(v10 + 48);
  v97 = v15;
  if ( (!v14 || (*(_DWORD *)(v11 + 2172) & 0x2000) != 0) && (*(_BYTE *)(v10 + 15) & 1) == 0 )
    v12 = 1025;
  v16 = *(_DWORD *)(a2 + 40);
  v94 = *(_QWORD *)(a2 + 16);
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v15 < 0x100000000LL || v12 >= 0x400 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v13 + 44) & 1) != 0 )
      return 3221226089LL;
    v94 = 0x200000LL;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v16 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v12 |= 0x200u;
  }
  if ( (v12 & 0x200) == 0 )
  {
    result = MiAllowImageMap(v11, a5, v9, v13);
    if ( (int)result < 0 )
      return result;
    v18 = *(_DWORD *)(v11 + 2512);
    if ( (v18 & 0x10) != 0 && (*(_BYTE *)(v13 + 51) & 4) == 0 )
    {
      if ( (*(_BYTE *)(v13 + 44) & 1) == 0 )
      {
        v12 |= 1u;
        goto LABEL_12;
      }
      if ( (v18 & 8) != 0 )
        return 3221226089LL;
    }
  }
LABEL_12:
  v19 = v12 | 2;
  if ( (*(_BYTE *)(v10 + 15) & 1) != 0 && (*(_DWORD *)(v11 + 2512) & 0x40) == 0 )
  {
    v19 |= 1u;
    if ( v19 < 0x400 )
      v19 &= ~2u;
  }
  v100 = 0LL;
  if ( (v19 & 0x200) != 0 )
    goto LABEL_17;
  v20 = v9 + 128;
  if ( v9 == -128 )
    goto LABEL_17;
  while ( (*(_BYTE *)(v20 + 32) & 0xEu) < 0xC )
  {
    v20 = *(_QWORD *)(v20 + 16);
    if ( !v20 )
      goto LABEL_17;
  }
  result = MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
  if ( (int)result >= 0 )
  {
LABEL_17:
    BugCheckParameter2 = v9 + 128;
    MiCheckPurgeAndUpMapCount(v9);
    v21 = *(_QWORD *)(a2 + 24);
    v109 = v21;
    Pool = MiAllocatePool(64, 0x88uLL, 0x20646156u);
    v23 = (__int64)Pool;
    if ( !Pool )
    {
      MiDereferenceControlArea(v9);
      return 3221225626LL;
    }
    v24 = Pool[16] & 0xFBFFFFFF;
    *(_QWORD *)Pool = -2LL;
    *((_QWORD *)Pool + 1) = -2LL;
    *((_QWORD *)Pool + 2) = -2LL;
    v25 = 0;
    if ( a6 == 1 )
      v25 = 0x4000000;
    v26 = v25 | v24;
    v27 = *(_DWORD *)(v23 + 48);
    *(_DWORD *)(v23 + 64) = v26;
    v28 = v27 & 0xFFFFFF8F | 0x20;
    *(_DWORD *)(v23 + 48) = v28;
    v29 = v28 ^ (v28 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x3F000;
    *(_DWORD *)(v23 + 48) = v29;
    if ( a5 )
    {
      v30 = MiReferenceFileObjectForMap(a5);
      v31 = *(_DWORD *)(v23 + 64);
      *(_QWORD *)(v23 + 128) = v30;
      LODWORD(v30) = v31 & 0xF7FFFFFF | (*(_DWORD *)(a5 + 60) >> 4) & 0x8000000;
      v29 = *(_DWORD *)(v23 + 48);
      *(_DWORD *)(v23 + 64) = v30;
    }
    *(_QWORD *)(v23 + 40) = 0LL;
    if ( (v19 & 0x200) != 0 )
    {
      v66 = v19 | 1;
      v19 = v19 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v23 + 48) = v29 & 0xFFFFF07F | 0x80;
      if ( v66 >= 0x400 )
        v19 = v66;
    }
    else
    {
      *(_DWORD *)(v23 + 48) = v29 & 0xFFFFF07F | 0x380;
      if ( (*(_BYTE *)(v11 + 992) & 1) != 0 )
        *(_DWORD *)(v23 + 64) |= 0x10000000u;
      *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ v92) & 0x7FFFFFFF;
      *(_BYTE *)(v23 + 34) = v92 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v33 = *(_DWORD *)(a2 + 72);
    v99 = 0LL;
    v93 = (__int64)CurrentThread;
    if ( (v33 & 1) == 0 || v94 == 0x200000 )
      v34 = v97 + *(unsigned int *)a4;
    else
      v34 = *a3;
    v96 = v34;
    if ( v94 == 0x200000 )
    {
      v109 = (*(_QWORD *)(a2 + 24) + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL;
      v19 = v19 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ (v109 >> 12)) & 0x7FFFFFFF;
      *(_BYTE *)(v23 + 34) = v109 >> 43;
      *(_DWORD *)(v23 + 64) |= 0x1000000u;
      LargePageVad = MiCreateLargePageVad(v11, v23, 0LL, 0LL);
      if ( LargePageVad < 0 )
      {
        v77 = *(struct _DMA_ADAPTER **)(v23 + 128);
        if ( v77 )
          HalPutDmaAdapter(v77);
        MiDereferenceControlArea(v9);
        ExFreePoolWithTag((PVOID)v23, 0);
        return (unsigned int)LargePageVad;
      }
      v21 = v109;
      CurrentThread = (struct _KTHREAD *)v93;
    }
    v101 = 0LL;
    if ( MiUserHotPatchReserveSize
      && *(_WORD *)(v102 + 48) == 0x8664
      && (v19 & 0x200) == 0
      && (*(_DWORD *)(v23 + 64) & 0x1000000) == 0
      && v21 < 0x7FFFFFFF
      && (*(_BYTE *)(v11 + 992) & 1) == 0 )
    {
      if ( (v21 >> 12) + ((v21 & 0xFFF) != 0) == *(_DWORD *)(v95 + 8) )
      {
        v78 = v21 + (unsigned int)MiUserHotPatchReserveSize;
        if ( v78 < v21 )
        {
          v79 = *(struct _DMA_ADAPTER **)(v23 + 128);
          if ( v79 )
            HalPutDmaAdapter(v79);
          MiDereferenceControlArea(v9);
          ExFreePoolWithTag((PVOID)v23, 0);
          return 3221225503LL;
        }
        v21 += (unsigned int)MiUserHotPatchReserveSize;
        v109 = v78;
      }
      CurrentThread = (struct _KTHREAD *)v93;
    }
    if ( (*(_DWORD *)(v23 + 48) & 0xF80) == 0x380
      && *(_QWORD *)(v11 + 1088)
      && (*(_DWORD *)(v11 + 2172) & 0x1000) == 0
      && v11 != PsSecureSystemProcess
      && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
    {
      v19 |= 0x800u;
    }
    LODWORD(v107[8]) = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v11);
    if ( (*(_DWORD *)(v11 + 1124) & 0x20) != 0 )
    {
      PerSessionProtos = -1073741558;
      goto LABEL_193;
    }
    v35 = v94;
    if ( (*(_DWORD *)(a2 + 72) & 1) != 0 && v94 != 0x200000 )
    {
      if ( !(unsigned int)MiIsVaRangeAvailable(v11, v34, v21, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        PerSessionProtos = -1073741800;
        goto LABEL_193;
      }
LABEL_41:
      v36 = 1073741827;
      v37 = v96;
      v38 = v97;
      v39 = v96 - *(unsigned int *)a4;
      if ( v39 == v97 )
        v36 = 0;
      v40 = v96 >> 12;
      *(_DWORD *)(v23 + 24) = v96 >> 12;
      v97 = v40;
      *(_BYTE *)(v23 + 32) = BYTE4(v40);
      v41 = (v37 - 1 + v21) >> 12;
      *(_DWORD *)(v23 + 28) = v41;
      *(_BYTE *)(v23 + 33) = BYTE4(v41);
      v42 = BugCheckParameter2;
      v43 = *a4 >> 12;
      v44 = *(unsigned int *)(BugCheckParameter2 + 44);
      if ( v43 >= v44 )
      {
        do
        {
          v42 = *(_QWORD *)(v42 + 16);
          v43 -= v44;
          v44 = *(unsigned int *)(v42 + 44);
        }
        while ( v43 >= v44 );
        BugCheckParameter2 = v42;
      }
      *(_QWORD *)(v23 + 72) = v42;
      v45 = v36;
      v110 = v36;
      *(_QWORD *)(v23 + 80) = *(_QWORD *)(v42 + 8) + 8 * v43;
      *(_QWORD *)(v23 + 88) = *(_QWORD *)(v95 + 64) + 8 * (*(unsigned int *)(v95 + 8) - 1LL);
      if ( (a8 & 4) == 0 )
      {
        v110 = v36;
        if ( v11 != PsSecureSystemProcess )
        {
          v110 = v36;
          if ( v39 != v38 )
          {
            if ( (*(_DWORD *)(a2 + 40) & 0x800000) == 0 && (v19 & 0x400) == 0
              || (*(_DWORD *)(a1 + 56) & 0x800) != 0
              || (v19 & 2) == 0 )
            {
              v110 = v36;
              if ( (v19 & 0x400) != 0 )
              {
                PerSessionProtos = -1073741800;
                goto LABEL_158;
              }
            }
            else
            {
              FixupVad = MiAllocateFixupVad(v23);
              if ( FixupVad )
              {
                ExFreePoolWithTag((PVOID)v23, 0);
                v23 = (__int64)FixupVad;
                v45 = 1073741878;
                v110 = 1073741878;
              }
              else
              {
                v110 = v36;
                v45 = v36;
                if ( (v19 & 0x400) != 0 )
                {
                  PerSessionProtos = -1073741670;
                  goto LABEL_158;
                }
              }
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 52) )
        *(_BYTE *)(*(_QWORD *)(v11 + 1680) + 352LL) = 1;
      v46 = a1;
      if ( (*(_DWORD *)(a1 + 56) & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx(v11);
        PerSessionProtos = MiCreatePerSessionProtos((__int64 *)a1, SessionId);
        if ( PerSessionProtos < 0 )
          goto LABEL_158;
        v46 = a1;
        v19 |= 0x80u;
      }
      if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
      {
        v86 = *(unsigned int *)(v23 + 52);
        LODWORD(v86) = v86 & 0x7FFFFFFF;
        v87 = v86 | ((unsigned __int64)*(unsigned __int8 *)(v23 + 34) << 31);
        v88 = MiUpdatePrivateDemandZeroView(v11, v23, 0) + v87;
        *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ v88) & 0x7FFFFFFF;
        *(_BYTE *)(v23 + 34) = v88 >> 31;
        v107[1] = v93;
        MiInsertVadEvent(v23, v107, 0);
        v46 = a1;
        v19 |= 0x20u;
      }
      PerSessionProtos = MiInsertSharedCommitNode(v46, v11, 0LL);
      if ( PerSessionProtos >= 0 )
      {
        v19 |= 0x40u;
        v48 = MiControlAreaRequiresCharge(a1, (a8 & 8) != 0);
        if ( v48 )
        {
          if ( v48 != 2 )
            goto LABEL_55;
          PerSessionProtos = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v49, 0x11u);
          if ( PerSessionProtos >= 0 )
          {
            v19 |= 0x100u;
LABEL_55:
            PerSessionProtos = MiInsertVadCharges(v23, v11);
            if ( PerSessionProtos >= 0 )
            {
              if ( v45 == 1073741878 )
                ++*(_QWORD *)(*(_QWORD *)(v11 + 1680) + 384LL);
              MiGetWsAndInsertVad(v23);
              v50 = 0LL;
              if ( v94 == 0x200000 )
              {
                MiLockVad(v93, v23);
                PerSessionProtos = MiMapUserLargePages(v23);
                if ( PerSessionProtos < 0 )
                {
                  UNLOCK_ADDRESS_SPACE_UNORDERED(v93, v11);
                  goto LABEL_241;
                }
                MiUnlockVad(v93, v23);
              }
              if ( v99 )
                MiAdvanceVadHint(v97, v41);
              v51 = (v100 << 16) + v96;
              v96 = v51;
              *a3 = v51;
              if ( !*(_BYTE *)(v102 + 50)
                || (v52 = *(_WORD *)(v102 + 48), v52 >= MEMORY[0xFFFFF7800000002C]) && v52 <= MEMORY[0xFFFFF7800000002E]
                || (v67 = *(_QWORD *)(v11 + 1408)) != 0 && ((v68 = *(_WORD *)(v67 + 8), v68 == 332) || v68 == 452) )
              {
                v53 = v110;
              }
              else
              {
                v53 = 1073741838;
                v110 = 1073741838;
              }
              if ( (PerfGlobalGroupMask & 0x8000) != 0 )
              {
                MiLogMapFileEvent(v23, 1061LL);
                v53 = v110;
              }
              v54 = v19 | 4;
              if ( (v54 & 0x200) != 0 )
              {
LABEL_81:
                if ( (v54 & 8) == 0 )
                {
                  v61 = v93;
LABEL_96:
                  if ( (v54 & 4) != 0 )
                    UNLOCK_ADDRESS_SPACE(v61, v11);
                  if ( (v54 & 0x200) == 0 && a5 && (*(_BYTE *)(v11 + 992) & 1) == 0 )
                    *(_DWORD *)(a2 + 72) |= 4u;
                  return v110;
                }
                MiLockVad(v93, v23);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v93, v11);
                v54 &= ~4u;
                if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
                {
                  MiUpdatePrivateDemandZeroView(v11, v23, 1);
                  MiRemoveVadEvent(v23, v107);
                  v54 &= ~0x20u;
                }
                if ( (v54 & 0x10) == 0 || (PerSessionProtos = MiCommitVadCfgBits(v23, 0LL, 0LL), PerSessionProtos >= 0) )
                {
                  if ( *(_QWORD *)(a2 + 80) )
                  {
                    v89 = *(_DWORD *)(a2 + 76);
                    if ( v89 != 4 && (unsigned int)(v89 - 1) > 1 && v89 != -2147483647 )
                    {
                      PerSessionProtos = -1073741755;
                      goto LABEL_241;
                    }
                    PerSessionProtos = MiSecureVad(v23, v96, *(_QWORD *)(a2 + 24), v89, 0, (__int64)&v101);
                    if ( PerSessionProtos < 0 )
                      goto LABEL_241;
                    **(_QWORD **)(a2 + 80) = v101 ^ qword_140C4DE90 ^ v11;
                    v59 = 0LL;
                  }
                  else
                  {
                    v59 = v101;
                  }
                  if ( v54 < 0x800
                    || (v59 = MiAddSecureEntry(v23, (_DWORD)v97 << 12, ((_DWORD)v41 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
                  {
                    if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
                      MiSoftFaultMappedView(v23);
                    v60 = v23;
                    v61 = v93;
                    MiUnlockVad(v93, v60);
                    if ( v54 >= 0x800 )
                    {
                      PsCallImageNotifyRoutines((unsigned __int16 *)(v50 + 88), v11, (__int64)&v103, v50);
                      HalPutDmaAdapter((PADAPTER_OBJECT)v50);
                    }
                    if ( v59 )
                      MmUnsecureVirtualMemory((HANDLE)(v59 ^ qword_140C4DE90 ^ v11));
                    goto LABEL_96;
                  }
                  PerSessionProtos = -1073741670;
                }
LABEL_241:
                MiReferenceVad(v23);
                if ( v50 )
                  HalPutDmaAdapter((PADAPTER_OBJECT)v50);
                MiUnmapVad(v23, 0LL, 0LL);
                v90 = *(_QWORD **)(a2 + 80);
                if ( v90 )
                  *v90 = 0LL;
                return (unsigned int)PerSessionProtos;
              }
              if ( (NtGlobalFlag & 0x40000) == 0
                || (v71 = (unsigned int)(v53 - 1073741827), (unsigned int)v71 <= 0x33)
                && (v72 = 0x8000000000801LL, _bittest64(&v72, v71)) )
              {
                v55 = a1;
              }
              else
              {
                v56 = v95;
                if ( (*(_BYTE *)(v93 + 1304) & 0x20) != 0
                  || (v73 = *(_WORD *)(v95 + 12), (v73 & 0x2000) != 0)
                  || *(char *)(v95 + 14) >= 0 )
                {
                  v55 = a1;
                  goto LABEL_71;
                }
                *(_WORD *)(v95 + 12) = v73 | 0x2000;
                v74 = v51;
                v55 = a1;
                MiLoadUserSymbols(a1, v74, v11);
              }
              v56 = v95;
LABEL_71:
              if ( v54 >= 0x800 )
              {
                BYTE8(v103) = 3;
                if ( (*(_DWORD *)(v23 + 64) & 0x8000000) != 0 )
                  v57 = DWORD2(v103) & 0xFFF80FFF;
                else
                  v57 = DWORD2(v103) & 0xFFF80FFF | ((*(_BYTE *)(v56 + 15) & 0xF0 | ((*(_BYTE *)(v56 + 15) & 0xE) << 7)) << 8);
                v58 = 0;
                if ( v110 == 1073741838 )
                  v58 = 2048;
                DWORD2(v103) = v57 & 0xFFFFF7FF | v58;
                *(_QWORD *)&v104 = v96;
                *(_QWORD *)&v105 = *(_QWORD *)(a2 + 24);
                if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64(
                                               (volatile signed __int64 *)(v56 + 24),
                                               -1LL,
                                               -1LL) )
                  DWORD2(v103) |= 0x80000u;
                DWORD2(v104) = 0;
                DWORD2(v105) = 0;
                v50 = MiReferenceControlAreaFile(v55);
                v54 |= 8u;
              }
              if ( MiIsProcessCfgEnabled() )
              {
                v54 |= 0x18u;
              }
              else if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0
                     || *(_QWORD *)(a2 + 80)
                     || (*(_DWORD *)(a2 + 60) & 2) != 0 )
              {
                v54 |= 8u;
              }
              goto LABEL_81;
            }
          }
        }
        else
        {
          PerSessionProtos = -1073740277;
        }
      }
LABEL_158:
      v9 = a1;
LABEL_193:
      if ( (v19 & 0x80u) != 0 )
      {
        v80 = MmGetSessionIdEx(v11);
        MiDereferencePerSessionProtos((__int64 *)v9, v80);
      }
      if ( (v19 & 0x100) != 0 )
        MiReturnCrossPartitionControlAreaCharges(v9);
      if ( (v19 & 0x40) != 0 )
        MiRemoveSharedCommitNode(v9, v11, 0LL);
      UNLOCK_ADDRESS_SPACE(v93, v11);
      if ( (v19 & 0x20) != 0 )
        MiRemoveVadEvent(v23, v107);
      if ( v23 )
      {
        if ( v94 == 0x200000 )
          MiReleaseVadEventBlocks(v23, 0LL);
        v81 = *(struct _DMA_ADAPTER **)(v23 + 128);
        if ( v81 )
          HalPutDmaAdapter(v81);
        ExFreePoolWithTag((PVOID)v23, 0);
      }
      MiDereferenceControlArea(v9);
      return (unsigned int)PerSessionProtos;
    }
    if ( v21 > 0x7FFFFFFF0000LL )
    {
      PerSessionProtos = -1073741801;
      goto LABEL_193;
    }
    if ( (v19 & 1) == 0 && (unsigned int)MiIsVaRangeAvailable(v11, v34, v21, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      goto LABEL_41;
    v63 = *(_QWORD *)(a2 + 8);
    v64 = 0LL;
    if ( v97 < 0x100000000LL && v63 >= 0x100000000LL && (*(_BYTE *)(v95 + 15) & 1) == 0 )
      v63 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v95 + 14) & 0x40) != 0 )
    {
      v69 = *(_QWORD *)(v11 + 1408);
      if ( !v69 || (v70 = *(_WORD *)(v69 + 8), v70 != 332) && v70 != 452 )
        v64 = 0x100000000LL;
    }
    if ( *(_QWORD *)a2 >= v63 )
    {
      PerSessionProtos = -1073741801;
    }
    else
    {
      PerSessionProtos = MiSelectUserAddress(
                           *(_DWORD *)(a2 + 40),
                           *(_QWORD *)a2,
                           v63,
                           v109,
                           v35,
                           v64,
                           (*(_DWORD *)(v23 + 48) >> 7) & 0x1F,
                           0,
                           (__int64)&v99,
                           (__int64)&v96);
      if ( PerSessionProtos >= 0 )
      {
        v21 = v109;
        v65 = v94;
LABEL_114:
        if ( v65 == 0x200000 )
        {
          if ( v21 - *(_QWORD *)(a2 + 24) >= 0x10000 )
            v100 = (unsigned int)ExGenRandom(1) % ((v21 - *(_QWORD *)(a2 + 24)) >> 16);
          VadEvent = MiLocateVadEvent(v23);
          *(_QWORD *)(VadEvent + 16) = v84 >> 12;
          *(_BYTE *)(VadEvent + 8) = v85;
        }
        goto LABEL_41;
      }
    }
    v82 = *(_QWORD *)(a2 + 8);
    v14 = v63 == v82;
    v21 = v109;
    if ( v14 )
    {
      v65 = v94;
    }
    else
    {
      v91 = v64;
      v65 = v94;
      PerSessionProtos = MiSelectUserAddress(
                           *(_DWORD *)(a2 + 40),
                           *(_QWORD *)a2,
                           v82,
                           v109,
                           v94,
                           v91,
                           (*(_DWORD *)(v23 + 48) >> 7) & 0x1F,
                           0,
                           (__int64)&v99,
                           (__int64)&v96);
    }
    if ( PerSessionProtos < 0 )
      goto LABEL_158;
    goto LABEL_114;
  }
  return result;
}
