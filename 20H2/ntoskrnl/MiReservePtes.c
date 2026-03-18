/*
 * XREFs of MiReservePtes @ 0x140285DC0
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 *     MiMapContiguousMemory @ 0x1402608B4 (MiMapContiguousMemory.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCreatePteCopyList @ 0x1402910E8 (MiCreatePteCopyList.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiMapSinglePage @ 0x14036AE54 (MiMapSinglePage.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403973FC (MiUpdateImagePfnImportRelocations.c)
 *     MiBuildDynamicRegion @ 0x1403B4904 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x1403BF4A8 (MiReservePageHash.c)
 *     MiInitializePageFaultResources @ 0x1403C9DD8 (MiInitializePageFaultResources.c)
 *     MmMapMdl @ 0x140535AB0 (MmMapMdl.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     MiRelocateImageAgain @ 0x14062B714 (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 *     MmAllocateMappingAddressEx @ 0x1406CF8E0 (MmAllocateMappingAddressEx.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406EDB40 (MiAllocateProcessShadow.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     MmAllocateDumpHibernateResources @ 0x14078ADCC (MmAllocateDumpHibernateResources.c)
 *     MiCreatePfnBitMaps @ 0x1407B4884 (MiCreatePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x1408C8F30 (MmAllocateNonCachedMemory.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408CF0CC (MiMapHotPatchImageInSystemSpace.c)
 *     MiLockAndMapEntireDriver @ 0x1408D3334 (MiLockAndMapEntireDriver.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x1408DD698 (MiExpandPartitionIds.c)
 *     MmInitializeProcessor @ 0x1409A1E3C (MmInitializeProcessor.c)
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 *     MiInitializeSystemPtes @ 0x140A4CC24 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140A4D378 (MiInitializePteInfo.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x140A53120 (MiInitializeMirroring.c)
 *     MiInitializeTbFlush @ 0x140A53D78 (MiInitializeTbFlush.c)
 *     MiInitializeKernelCfg @ 0x140A5485C (MiInitializeKernelCfg.c)
 *     MiInitializeRetpoline @ 0x140A54F1C (MiInitializeRetpoline.c)
 *     MiInitializeGapFrames @ 0x140A6961C (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A7404C (MiMapDummyPages.c)
 *     MiInitializeCrashDumpPtes @ 0x140A95404 (MiInitializeCrashDumpPtes.c)
 *     MiCreateRetpolineBitmap @ 0x140A955EC (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A958EC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiEmptyPteBins @ 0x14023E170 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x14023E9F0 (MiPteBinsNeedTrimming.c)
 *     MiExpandPtes @ 0x1402531D4 (MiExpandPtes.c)
 *     MiCheckProcessorPteCache @ 0x1402856A0 (MiCheckProcessorPteCache.c)
 *     RtlInterlockedSetClearRunEx @ 0x140287740 (RtlInterlockedSetClearRunEx.c)
 *     MiFlushTbAsNeeded @ 0x1402B9260 (MiFlushTbAsNeeded.c)
 *     MiCheckPteReserve @ 0x1405522CC (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  ULONG_PTR v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  int v12; // r14d
  unsigned __int64 v13; // r12
  __int128 *v14; // r13
  unsigned __int64 v15; // r8
  __int128 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  __int64 v19; // r11
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r10
  unsigned int v31; // r11d
  unsigned __int64 *v32; // r13
  bool v33; // zf
  __int64 v34; // rax
  unsigned int v35; // r10d
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r11
  __int64 v42; // r9
  __int64 v43; // r8
  unsigned int v44; // ecx
  unsigned __int64 *v45; // r8
  unsigned int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rax
  bool v49; // sf
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int64 v57; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+28h] [rbp-A0h]
  __int64 v59; // [rsp+30h] [rbp-98h]
  unsigned __int64 v60; // [rsp+50h] [rbp-78h]
  __int128 *v61; // [rsp+58h] [rbp-70h]
  __int128 v62; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-58h]
  int v64; // [rsp+D8h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  v5 = a2;
  v6 = a2;
  v62 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    v6 = (unsigned __int64)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140C4EDC0 && a2 <= 0x40uLL )
  {
    v8 = MiCheckProcessorPteCache(a2);
    if ( v8 )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
        goto LABEL_48;
      if ( (__int64 *)a1 == &qword_140C4EDC0 && (dword_140CFB17C & 2) != 0 )
        MiCheckPteReserve(v8, v5);
      if ( (unsigned int)v4 > 0x10 )
        goto LABEL_48;
      if ( (_DWORD)v4 )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + 8LL * v3);
          v10 = v8 + 8LL * v3;
          if ( v10 >= 0xFFFFF6FB7DBED000uLL
            && v10 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v9 & 1) != 0
            && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v55 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
              v56 = v9 | 0x20;
              if ( (v55 & 0x20) == 0 )
                v56 = *(_QWORD *)(v8 + 8LL * v3);
              v9 = v56;
              if ( (v55 & 0x42) != 0 )
                v9 = v56 | 0x42;
            }
          }
          if ( qword_140C4DDC0 && (v9 & 0x10) == 0 )
            v9 &= ~qword_140C4DDC0;
          if ( (v9 & 0xFFFFFFFF00000000uLL) != 0 )
            break;
          ++v3;
        }
        while ( v3 < (unsigned int)v4 );
      }
      if ( v3 != (_DWORD)v4 )
LABEL_48:
        MiFlushTbAsNeeded(v8);
      return v8;
    }
  }
  if ( (unsigned int)v4 < 0x200 )
    goto LABEL_23;
  v40 = MiExpandPtes((__int64 *)a1, v4);
  v8 = v40;
  if ( v40 )
  {
    if ( (__int64 *)a1 == &qword_140C4EDC0 && (dword_140CFB17C & 2) != 0 )
      MiCheckPteReserve(v40, v4);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
    return v8;
  }
  if ( (__int64 *)a1 != &qword_140C4EDC0 )
  {
LABEL_23:
    v12 = 0;
    v64 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (__int128 *)a1;
        v15 = *(_QWORD *)(a1 + 64);
        v57 = v15;
        v61 = (__int128 *)a1;
        if ( *(_QWORD *)a1 )
          break;
LABEL_59:
        if ( !v13 || v13 == *(_QWORD *)(a1 + 72) )
        {
          if ( (*(_DWORD *)(a1 + 24) & 1) == 0
            || ((v12 & 1) != 0 || (v12 |= 1u, v64 = v12, (unsigned int)MiEmptyPteBins(a1, 0) != 1))
            && ((v12 & 2) != 0
             || (v12 |= 2u, v64 = v12, !MiPteBinsNeedTrimming((_QWORD *)a1))
             || (unsigned int)MiEmptyPteBins(a1, 1) != 1) )
          {
            v8 = MiExpandPtes((__int64 *)a1, v4);
            if ( v8 )
              goto LABEL_47;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v64 & 4) != 0 )
              goto LABEL_68;
            v12 = v64 | 4;
            v64 |= 4u;
            MiEmptyPteBins(a1, 1);
          }
        }
      }
      v13 = *(_QWORD *)(a1 + 72);
      v60 = v13;
      if ( v13 )
      {
        if ( *(_QWORD *)a1 < v13 )
        {
          v13 = 0LL;
          v60 = 0LL;
        }
        else
        {
          *(_QWORD *)&v16 = *(_QWORD *)a1 - v13;
          *((_QWORD *)&v16 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v13 >> 6);
          v62 = v16;
          v14 = &v62;
          v61 = &v62;
          if ( v15 )
          {
            v15 -= v13;
            v57 = v15;
          }
        }
      }
      v17 = *(_QWORD *)v14;
      v18 = v15;
      v19 = *((_QWORD *)v14 + 1);
      v58 = *(_QWORD *)v14;
      if ( v15 >= *(_QWORD *)v14 )
        v18 = 0LL;
      v59 = *((_QWORD *)v14 + 1);
      v20 = v17 - 1;
      if ( v6 )
      {
        while ( v20 - v18 + 1 < v6 )
        {
          v26 = -1LL;
LABEL_54:
          if ( !v18 )
          {
LABEL_39:
            v13 = v60;
            v27 = v26;
            v14 = v61;
            goto LABEL_40;
          }
          v30 = v6 + v15;
          if ( v6 + v15 > v17 )
            v30 = v17;
          v19 = v59;
          v20 = v30 - 1;
          v18 = 0LL;
        }
        v21 = v20 - v6 + 1;
        v63 = v21;
        v22 = v19 + 8 * (v21 >> 6);
        v23 = *(_QWORD *)(v19 + 8 * (v18 >> 6)) | ((1LL << (v18 & 0x3F)) - 1);
        v24 = (unsigned __int64 *)(v19 + 8 * (v18 >> 6));
        if ( v6 > 0x7F )
        {
          v41 = v22 + 8;
          if ( (v21 & 0x3F) == 0 )
            v41 = v22;
          if ( v23 )
          {
            if ( *++v24 )
            {
              v42 = v59;
              goto LABEL_103;
            }
            v33 = !_BitScanReverse64((unsigned __int64 *)&v48, v23);
            if ( v33 )
              v44 = 64;
            else
              v44 = 63 - v48;
            v42 = v59;
          }
          else
          {
            v42 = v59;
            v44 = 0;
          }
          while ( 1 )
          {
            v26 = (((__int64)v24 - v42) >> 3 << 6) - v44;
            if ( v26 > v21 )
              break;
            v45 = &v24[(v6 - v44) >> 6];
            if ( ++v24 == v45 )
            {
LABEL_111:
              v46 = ((_BYTE)v6 - (_BYTE)v44) & 0x3F;
              if ( (((_BYTE)v6 - (_BYTE)v44) & 0x3F) != 0 )
              {
                v33 = !_BitScanForward64((unsigned __int64 *)&v47, *v24);
                if ( v33 )
                  LODWORD(v47) = 64;
                if ( (unsigned int)v47 < v46 )
                  goto LABEL_103;
              }
              goto LABEL_38;
            }
            while ( !*v24 )
            {
              if ( ++v24 == v45 )
                goto LABEL_111;
            }
            do
            {
LABEL_103:
              if ( (unsigned __int64)v24 > v41 )
              {
LABEL_87:
                v26 = -1LL;
                goto LABEL_53;
              }
              ++v24;
            }
            while ( *v24 );
            v33 = !_BitScanReverse64((unsigned __int64 *)&v43, *(v24 - 1));
            if ( v33 )
              v44 = 64;
            else
              v44 = 63 - v43;
          }
        }
        else
        {
          if ( v6 >= 0x40 )
          {
            while ( 2 )
            {
              v49 = v23 < 0;
              while ( 1 )
              {
                if ( v49 )
                {
                  do
                  {
                    if ( (unsigned __int64)++v24 > v22 )
                      goto LABEL_52;
                    v23 = *v24;
                  }
                  while ( (*v24 & 0x8000000000000000uLL) != 0LL );
                }
                v33 = !_BitScanReverse64((unsigned __int64 *)&v50, v23);
                if ( v33 )
                  v51 = 64;
                else
                  v51 = 63 - v50;
                v26 = (((((__int64)v24 - v19) >> 3) + 1) << 6) - v51;
                if ( v26 > v21 )
                  goto LABEL_52;
                v52 = v6 - v51;
                if ( v6 == v51 )
                  goto LABEL_38;
                v23 = v24[1];
                ++v24;
                if ( v52 < 0x40 )
                  break;
                v49 = v23 < 0;
                if ( !v23 )
                {
                  v52 -= 64LL;
                  if ( !v52 )
                    goto LABEL_38;
                  v23 = v24[1];
                  ++v24;
                  break;
                }
              }
              v33 = !_BitScanForward64(&v53, v23);
              if ( v33 )
                v53 = 64LL;
              if ( v53 < v52 )
                continue;
              goto LABEL_38;
            }
          }
          if ( v6 > 1 )
          {
            v31 = 0;
            v32 = (unsigned __int64 *)(v59 + 8 * (v20 >> 6));
            while ( 1 )
            {
              if ( v23 == -1 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)++v24 > v22 )
                    goto LABEL_87;
                  v23 = *v24;
                  if ( *v24 != -1LL )
                  {
                    v31 = 0;
                    break;
                  }
                }
              }
              v33 = !_BitScanForward64((unsigned __int64 *)&v34, v23);
              if ( v33 )
                LODWORD(v34) = 64;
              if ( v31 + (unsigned int)v34 >= v6 )
                break;
              v35 = v6;
              v36 = ~v23;
              while ( 1 )
              {
                v36 &= v36 >> (v35 >> 1);
                if ( !v36 )
                  break;
                v35 -= v35 >> 1;
                if ( v35 <= 1 )
                {
                  _BitScanForward64(&v37, v36);
                  v38 = (unsigned int)v37;
                  goto LABEL_78;
                }
              }
              if ( v24 == v32 )
                goto LABEL_87;
              v33 = !_BitScanReverse64((unsigned __int64 *)&v39, v23);
              if ( v33 )
                v31 = 64;
              else
                v31 = 63 - v39;
              v23 = v24[1];
              ++v24;
            }
            v38 = -(__int64)v31;
LABEL_78:
            v26 = (((__int64)v24 - v59) >> 3 << 6) + v38;
            if ( v26 <= v63 )
              goto LABEL_38;
          }
          else
          {
            if ( v23 != -1 )
            {
LABEL_37:
              _BitScanForward64(&v25, ~v23);
              v26 = v25 + (((__int64)v24 - v19) >> 3 << 6);
              if ( v26 > v21 )
              {
                v26 = -1LL;
              }
              else
              {
LABEL_38:
                if ( v26 != -1LL )
                  goto LABEL_39;
              }
LABEL_53:
              v17 = v58;
              v15 = v57;
              goto LABEL_54;
            }
            while ( (unsigned __int64)++v24 <= v22 )
            {
              v23 = *v24;
              if ( *v24 != -1LL )
                goto LABEL_37;
            }
          }
        }
LABEL_52:
        v26 = -1LL;
        goto LABEL_53;
      }
      v27 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_40:
      if ( v27 == -1LL )
      {
        v12 = v64;
        goto LABEL_59;
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx(v14, v27, v6) )
      {
        v28 = v27 + v13;
        if ( v14 != &v62 )
          v28 = v27;
        v29 = 16 * v28;
        *(_QWORD *)(a1 + 64) = v28 + v6;
        if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
          v29 = v28;
        v8 = *(_QWORD *)(a1 + 16) + 8 * v29;
LABEL_47:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
        v5 = v4;
        goto LABEL_5;
      }
      v12 = v64;
    }
  }
LABEL_68:
  ++**(_DWORD **)(a1 + 32);
  return 0LL;
}
