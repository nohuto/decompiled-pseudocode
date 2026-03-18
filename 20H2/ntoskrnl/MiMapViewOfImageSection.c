/*
 * XREFs of MiMapViewOfImageSection @ 0x140626CE0
 * Callers:
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x1408C6FE4 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiReferenceVad @ 0x14022C1B0 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14022C3E0 (LOCK_ADDRESS_SPACE.c)
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14022D110 (MiCheckPurgeAndUpMapCount.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x14022D57C (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x14022DCA0 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x14022E378 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140232E14 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14023300C (MiIsProcessCfgEnabled.c)
 *     MiLocateVadEvent @ 0x1402506D4 (MiLocateVadEvent.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     MiDereferenceControlArea @ 0x14031EF2C (MiDereferenceControlArea.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140528E24 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x140538C94 (MiRemoveVadEvent.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 *     MiReferenceFileObjectForMap @ 0x140623854 (MiReferenceFileObjectForMap.c)
 *     MiAddSecureEntry @ 0x140623880 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140623CB0 (MiAdvanceVadHint.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MiAllowImageMap @ 0x140627820 (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x140627A08 (MiIsVaRangeAvailable.c)
 *     MiCommitVadCfgBits @ 0x140627A50 (MiCommitVadCfgBits.c)
 *     PsCallImageNotifyRoutines @ 0x140628420 (PsCallImageNotifyRoutines.c)
 *     MiSelectUserAddress @ 0x14067D5F0 (MiSelectUserAddress.c)
 *     MiUnmapVad @ 0x140685B60 (MiUnmapVad.c)
 *     MiArbitraryCodeBlocked @ 0x14069A130 (MiArbitraryCodeBlocked.c)
 *     MiSecureVad @ 0x1406B3FA8 (MiSecureVad.c)
 *     MiAllocateFixupVad @ 0x1406CD014 (MiAllocateFixupVad.c)
 *     MiDereferencePerSessionProtos @ 0x1406DC9FC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406DCB14 (MiCreatePerSessionProtos.c)
 *     MiLoadUserSymbols @ 0x1407CCB5C (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x1408C6F88 (MiLogMapFileEvent.c)
 *     MiCreateLargePageVad @ 0x1408DC7A4 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v11; // r15
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
  void *v30; // rax
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
  _QWORD *v46; // rdi
  int PerSessionProtos; // edi
  int v48; // eax
  int v49; // r11d
  struct _DMA_ADAPTER *v50; // r13
  unsigned __int64 v51; // rdi
  unsigned __int16 v52; // ax
  int v53; // ecx
  unsigned int v54; // ebx
  __int64 v55; // rdi
  __int64 v56; // rdx
  unsigned int v57; // ecx
  int v58; // eax
  unsigned __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 FixupVad; // r13
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
  __int64 v81; // r8
  struct _DMA_ADAPTER *v82; // rcx
  __int64 v83; // r8
  __int64 VadEvent; // rax
  unsigned __int64 v85; // r8
  char v86; // r9
  __int64 v87; // rax
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // rdi
  int v90; // r9d
  _QWORD *v91; // rax
  __int64 v92; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v93; // [rsp+50h] [rbp-B0h]
  __int64 v94; // [rsp+50h] [rbp-B0h]
  __int64 v95; // [rsp+58h] [rbp-A8h]
  __int64 v96; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v97; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v98; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  _QWORD *v100; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v101; // [rsp+88h] [rbp-78h]
  unsigned __int64 v102; // [rsp+90h] [rbp-70h] BYREF
  __int64 v103; // [rsp+98h] [rbp-68h]
  __int128 v104; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v105; // [rsp+B0h] [rbp-50h]
  __int128 v106; // [rsp+C0h] [rbp-40h]
  __int64 v107; // [rsp+D0h] [rbp-30h]
  __int64 v108[11]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v110; // [rsp+188h] [rbp+88h]
  unsigned int v111; // [rsp+188h] [rbp+88h]

  v9 = a1;
  memset(v108, 0, 0x48uLL);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)(a2 + 88);
  v107 = 0LL;
  v12 = 0;
  v96 = v10;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v13 = *(_QWORD *)(v10 + 56);
  v103 = v13;
  if ( dword_140C4CB10
    && dword_140C4CB14 == *(_DWORD *)(v13 + 60)
    && dword_140C4CB18 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v14 = (*(_DWORD *)(v9 + 56) & 0x10000000) == 0;
  v15 = *(_QWORD *)(v10 + 32);
  v93 = *(_QWORD *)(v10 + 48);
  v98 = v15;
  if ( (!v14 || (*(_DWORD *)(v11 + 2172) & 0x2000) != 0) && (*(_BYTE *)(v10 + 15) & 1) == 0 )
    v12 = 1025;
  v16 = *(_DWORD *)(a2 + 40);
  v95 = *(_QWORD *)(a2 + 16);
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v15 < 0x100000000LL || v12 >= 0x400 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v13 + 44) & 1) != 0 )
      return 3221226089LL;
    v95 = 0x200000LL;
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
  v101 = 0LL;
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
    v110 = v21;
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
      *(_DWORD *)(v23 + 64) = (_DWORD)v30;
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
      *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ v93) & 0x7FFFFFFF;
      *(_BYTE *)(v23 + 34) = v93 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v33 = *(_DWORD *)(a2 + 72);
    v100 = 0LL;
    v94 = (__int64)CurrentThread;
    if ( (v33 & 1) == 0 || v95 == 0x200000 )
      v34 = v98 + *(unsigned int *)a4;
    else
      v34 = *a3;
    v97 = v34;
    if ( v95 == 0x200000 )
    {
      v110 = (*(_QWORD *)(a2 + 24) + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL;
      v19 = v19 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ (v110 >> 12)) & 0x7FFFFFFF;
      *(_BYTE *)(v23 + 34) = v110 >> 43;
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
      v21 = v110;
      CurrentThread = (struct _KTHREAD *)v94;
    }
    v102 = 0LL;
    if ( MiUserHotPatchReserveSize
      && *(_WORD *)(v103 + 48) == 0x8664
      && (v19 & 0x200) == 0
      && (*(_DWORD *)(v23 + 64) & 0x1000000) == 0
      && v21 < 0x7FFFFFFF
      && (*(_BYTE *)(v11 + 992) & 1) == 0 )
    {
      if ( (v21 >> 12) + ((v21 & 0xFFF) != 0) == *(_DWORD *)(v96 + 8) )
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
        v110 = v78;
      }
      CurrentThread = (struct _KTHREAD *)v94;
    }
    if ( (*(_DWORD *)(v23 + 48) & 0xF80) == 0x380
      && *(_QWORD *)(v11 + 1088)
      && (*(_DWORD *)(v11 + 2172) & 0x1000) == 0
      && v11 != PsSecureSystemProcess
      && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
    {
      v19 |= 0x800u;
    }
    LODWORD(v108[8]) = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v11);
    if ( (*(_DWORD *)(v11 + 1124) & 0x20) != 0 )
    {
      PerSessionProtos = -1073741558;
      goto LABEL_193;
    }
    v35 = v95;
    if ( (*(_DWORD *)(a2 + 72) & 1) != 0 && v95 != 0x200000 )
    {
      if ( !(unsigned int)MiIsVaRangeAvailable(v11, v34, v21, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        PerSessionProtos = -1073741800;
        goto LABEL_193;
      }
LABEL_41:
      v36 = 1073741827;
      v37 = v97;
      v38 = v98;
      v39 = v97 - *(unsigned int *)a4;
      if ( v39 == v98 )
        v36 = 0;
      v40 = v97 >> 12;
      *(_DWORD *)(v23 + 24) = v97 >> 12;
      v98 = v40;
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
      v111 = v36;
      *(_QWORD *)(v23 + 80) = *(_QWORD *)(v42 + 8) + 8 * v43;
      *(_QWORD *)(v23 + 88) = *(_QWORD *)(v96 + 64) + 8 * (*(unsigned int *)(v96 + 8) - 1LL);
      if ( (a8 & 4) == 0 )
      {
        v111 = v36;
        if ( v11 != PsSecureSystemProcess )
        {
          v111 = v36;
          if ( v39 != v38 )
          {
            if ( (*(_DWORD *)(a2 + 40) & 0x800000) == 0 && (v19 & 0x400) == 0
              || (*(_DWORD *)(a1 + 56) & 0x800) != 0
              || (v19 & 2) == 0 )
            {
              v111 = v36;
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
                v23 = FixupVad;
                v45 = 1073741878;
                v111 = 1073741878;
              }
              else
              {
                v111 = v36;
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
      v46 = (_QWORD *)a1;
      if ( (*(_DWORD *)(a1 + 56) & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx(v11);
        PerSessionProtos = MiCreatePerSessionProtos(a1, SessionId);
        if ( PerSessionProtos < 0 )
          goto LABEL_158;
        v46 = (_QWORD *)a1;
        v19 |= 0x80u;
      }
      if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
      {
        v87 = *(unsigned int *)(v23 + 52);
        LODWORD(v87) = v87 & 0x7FFFFFFF;
        v88 = v87 | ((unsigned __int64)*(unsigned __int8 *)(v23 + 34) << 31);
        v89 = MiUpdatePrivateDemandZeroView(v11, v23, 0) + v88;
        *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ v89) & 0x7FFFFFFF;
        *(_BYTE *)(v23 + 34) = v89 >> 31;
        v108[1] = v94;
        MiInsertVadEvent(v23, v108, 0);
        v46 = (_QWORD *)a1;
        v19 |= 0x20u;
      }
      PerSessionProtos = MiInsertSharedCommitNode(v46, v11, 0);
      if ( PerSessionProtos >= 0 )
      {
        v19 |= 0x40u;
        v48 = MiControlAreaRequiresCharge(a1);
        if ( v48 )
        {
          if ( v48 != 2 )
            goto LABEL_55;
          PerSessionProtos = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v49, 0x11u);
          if ( PerSessionProtos >= 0 )
          {
            v19 |= 0x100u;
LABEL_55:
            PerSessionProtos = MiInsertVadCharges(v23, (struct _KPROCESS *)v11);
            if ( PerSessionProtos >= 0 )
            {
              if ( v45 == 1073741878 )
                ++*(_QWORD *)(*(_QWORD *)(v11 + 1680) + 384LL);
              MiGetWsAndInsertVad(v23);
              v50 = 0LL;
              if ( v95 == 0x200000 )
              {
                MiLockVad(v94, v23);
                PerSessionProtos = MiMapUserLargePages(v23);
                if ( PerSessionProtos < 0 )
                {
                  UNLOCK_ADDRESS_SPACE_UNORDERED(v94, v11);
                  goto LABEL_241;
                }
                MiUnlockVad(v94, v23);
              }
              if ( v100 )
                MiAdvanceVadHint(v98, v41, v100);
              v51 = (v101 << 16) + v97;
              v97 = v51;
              *a3 = v51;
              if ( !*(_BYTE *)(v103 + 50)
                || (v52 = *(_WORD *)(v103 + 48), v52 >= MEMORY[0xFFFFF7800000002C]) && v52 <= MEMORY[0xFFFFF7800000002E]
                || (v67 = *(_QWORD *)(v11 + 1408)) != 0 && ((v68 = *(_WORD *)(v67 + 8), v68 == 332) || v68 == 452) )
              {
                v53 = v111;
              }
              else
              {
                v53 = 1073741838;
                v111 = 1073741838;
              }
              if ( (PerfGlobalGroupMask & 0x8000) != 0 )
              {
                MiLogMapFileEvent(v23, 1061LL);
                v53 = v111;
              }
              v54 = v19 | 4;
              if ( (v54 & 0x200) != 0 )
              {
LABEL_81:
                if ( (v54 & 8) == 0 )
                {
                  v61 = v94;
LABEL_96:
                  if ( (v54 & 4) != 0 )
                    UNLOCK_ADDRESS_SPACE(v61, v11);
                  if ( (v54 & 0x200) == 0 && a5 && (*(_BYTE *)(v11 + 992) & 1) == 0 )
                    *(_DWORD *)(a2 + 72) |= 4u;
                  return v111;
                }
                MiLockVad(v94, v23);
                UNLOCK_ADDRESS_SPACE_UNORDERED(v94, v11);
                v54 &= ~4u;
                if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
                {
                  MiUpdatePrivateDemandZeroView(v11, v23, 1);
                  MiRemoveVadEvent(v23, v108);
                  v54 &= ~0x20u;
                }
                if ( (v54 & 0x10) == 0 || (PerSessionProtos = MiCommitVadCfgBits(v23, 0LL, 0LL), PerSessionProtos >= 0) )
                {
                  if ( *(_QWORD *)(a2 + 80) )
                  {
                    v90 = *(_DWORD *)(a2 + 76);
                    if ( v90 != 4 && (unsigned int)(v90 - 1) > 1 && v90 != -2147483647 )
                    {
                      PerSessionProtos = -1073741755;
                      goto LABEL_241;
                    }
                    PerSessionProtos = MiSecureVad(v23, v97, *(_QWORD *)(a2 + 24), v90, 0, (__int64)&v102);
                    if ( PerSessionProtos < 0 )
                      goto LABEL_241;
                    **(_QWORD **)(a2 + 80) = v102 ^ qword_140C4DCD0 ^ v11;
                    v59 = 0LL;
                  }
                  else
                  {
                    v59 = v102;
                  }
                  if ( v54 < 0x800
                    || (v59 = (unsigned __int64)MiAddSecureEntry(v23, v98 << 12, (v41 << 12) | 0xFFF, -2147483647, 0)) != 0 )
                  {
                    if ( (*(_DWORD *)(a2 + 60) & 2) != 0 )
                      MiSoftFaultMappedView(v23);
                    v60 = v23;
                    v61 = v94;
                    MiUnlockVad(v94, v60);
                    if ( v54 >= 0x800 )
                    {
                      PsCallImageNotifyRoutines(&v50[5].DmaOperations, v11, &v104, v50);
                      HalPutDmaAdapter(v50);
                    }
                    if ( v59 )
                      MmUnsecureVirtualMemory((HANDLE)(v59 ^ qword_140C4DCD0 ^ v11));
                    goto LABEL_96;
                  }
                  PerSessionProtos = -1073741670;
                }
LABEL_241:
                MiReferenceVad(v23);
                if ( v50 )
                  HalPutDmaAdapter(v50);
                MiUnmapVad((PVOID)v23);
                v91 = *(_QWORD **)(a2 + 80);
                if ( v91 )
                  *v91 = 0LL;
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
                v56 = v96;
                if ( (*(_BYTE *)(v94 + 1304) & 0x20) != 0
                  || (v73 = *(_WORD *)(v96 + 12), (v73 & 0x2000) != 0)
                  || *(char *)(v96 + 14) >= 0 )
                {
                  v55 = a1;
                  goto LABEL_71;
                }
                *(_WORD *)(v96 + 12) = v73 | 0x2000;
                v74 = v51;
                v55 = a1;
                MiLoadUserSymbols(a1, v74, v11);
              }
              v56 = v96;
LABEL_71:
              if ( v54 >= 0x800 )
              {
                BYTE8(v104) = 3;
                if ( (*(_DWORD *)(v23 + 64) & 0x8000000) != 0 )
                  v57 = DWORD2(v104) & 0xFFF80FFF;
                else
                  v57 = DWORD2(v104) & 0xFFF80FFF | ((*(_BYTE *)(v56 + 15) & 0xF0 | ((*(_BYTE *)(v56 + 15) & 0xE) << 7)) << 8);
                v58 = 0;
                if ( v111 == 1073741838 )
                  v58 = 2048;
                DWORD2(v104) = v57 & 0xFFFFF7FF | v58;
                *(_QWORD *)&v105 = v97;
                *(_QWORD *)&v106 = *(_QWORD *)(a2 + 24);
                if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64(
                                               (volatile signed __int64 *)(v56 + 24),
                                               -1LL,
                                               -1LL) )
                  DWORD2(v104) |= 0x80000u;
                DWORD2(v105) = 0;
                DWORD2(v106) = 0;
                v50 = (struct _DMA_ADAPTER *)MiReferenceControlAreaFile(v55);
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
        MiDereferencePerSessionProtos(v9, v80);
      }
      if ( (v19 & 0x100) != 0 )
        MiReturnCrossPartitionControlAreaCharges(v9);
      if ( (v19 & 0x40) != 0 )
        MiRemoveSharedCommitNode((_QWORD *)v9, v11, 0);
      UNLOCK_ADDRESS_SPACE(v94, v11);
      if ( (v19 & 0x20) != 0 )
        MiRemoveVadEvent(v23, v108);
      if ( v23 )
      {
        if ( v95 == 0x200000 )
          MiReleaseVadEventBlocks(v23, 0, v81);
        v82 = *(struct _DMA_ADAPTER **)(v23 + 128);
        if ( v82 )
          HalPutDmaAdapter(v82);
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
    if ( v98 < 0x100000000LL && v63 >= 0x100000000LL && (*(_BYTE *)(v96 + 15) & 1) == 0 )
      v63 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v96 + 14) & 0x40) != 0 )
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
                           v110,
                           v35,
                           v64,
                           (*(_DWORD *)(v23 + 48) >> 7) & 0x1F,
                           0,
                           (__int64)&v100,
                           (__int64)&v97);
      if ( PerSessionProtos >= 0 )
      {
        v21 = v110;
        v65 = v95;
LABEL_114:
        if ( v65 == 0x200000 )
        {
          if ( v21 - *(_QWORD *)(a2 + 24) >= 0x10000 )
            v101 = (unsigned int)ExGenRandom(1) % ((v21 - *(_QWORD *)(a2 + 24)) >> 16);
          VadEvent = MiLocateVadEvent(v23, 16LL);
          *(_QWORD *)(VadEvent + 16) = v85 >> 12;
          *(_BYTE *)(VadEvent + 8) = v86;
        }
        goto LABEL_41;
      }
    }
    v83 = *(_QWORD *)(a2 + 8);
    v14 = v63 == v83;
    v21 = v110;
    if ( v14 )
    {
      v65 = v95;
    }
    else
    {
      v92 = v64;
      v65 = v95;
      PerSessionProtos = MiSelectUserAddress(
                           *(_DWORD *)(a2 + 40),
                           *(_QWORD *)a2,
                           v83,
                           v110,
                           v95,
                           v92,
                           (*(_DWORD *)(v23 + 48) >> 7) & 0x1F,
                           0,
                           (__int64)&v100,
                           (__int64)&v97);
    }
    if ( PerSessionProtos < 0 )
      goto LABEL_158;
    goto LABEL_114;
  }
  return result;
}
