/*
 * XREFs of MiReservePtes @ 0x1402743A0
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiCreatePteCopyList @ 0x1402244A8 (MiCreatePteCopyList.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemory @ 0x1402F98E4 (MiMapContiguousMemory.c)
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1403248C0 (MiZeroInParallelWorker.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 *     MiMapSinglePage @ 0x1403684B4 (MiMapSinglePage.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14039436C (MiUpdateImagePfnImportRelocations.c)
 *     MiBuildDynamicRegion @ 0x1403AC314 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x1403BBD08 (MiReservePageHash.c)
 *     MiInitializePageFaultResources @ 0x1403C6228 (MiInitializePageFaultResources.c)
 *     MmMapMdl @ 0x140531A90 (MmMapMdl.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140551348 (MiScrubNodeLargePageList.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiRelocateImageAgain @ 0x14063B7B0 (MiRelocateImageAgain.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 *     MmAllocateMappingAddressEx @ 0x1406D9550 (MmAllocateMappingAddressEx.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406F128C (MiAllocateProcessShadow.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     MmAllocateDumpHibernateResources @ 0x14077A3BC (MmAllocateDumpHibernateResources.c)
 *     MiCreatePfnBitMaps @ 0x1407A2EE4 (MiCreatePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x1408C1DA0 (MmAllocateNonCachedMemory.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408C7F3C (MiMapHotPatchImageInSystemSpace.c)
 *     MiLockAndMapEntireDriver @ 0x1408CC1A4 (MiLockAndMapEntireDriver.c)
 *     MiAllocateEnclaveVad @ 0x1408CD508 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x1408D6508 (MiExpandPartitionIds.c)
 *     MmInitializeProcessor @ 0x14099A5A0 (MmInitializeProcessor.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x140A41880 (MiInitializePteInfo.c)
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x140A4CDA0 (MiInitializeMirroring.c)
 *     MiInitializeTbFlush @ 0x140A4D9F8 (MiInitializeTbFlush.c)
 *     MiInitializeKernelCfg @ 0x140A4E4DC (MiInitializeKernelCfg.c)
 *     MiInitializeRetpoline @ 0x140A4EB9C (MiInitializeRetpoline.c)
 *     MiInitializeGapFrames @ 0x140A5F0F0 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140A6D284 (MiMapDummyPages.c)
 *     MiInitializeCrashDumpPtes @ 0x140A90114 (MiInitializeCrashDumpPtes.c)
 *     MiCreateRetpolineBitmap @ 0x140A902FC (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A905FC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140203670 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x140203E84 (MiPteBinsNeedTrimming.c)
 *     MiFlushTbAsNeeded @ 0x140220080 (MiFlushTbAsNeeded.c)
 *     MiCheckProcessorPteCache @ 0x140273C80 (MiCheckProcessorPteCache.c)
 *     RtlInterlockedSetClearRunEx @ 0x140276A80 (RtlInterlockedSetClearRunEx.c)
 *     MiExpandPtes @ 0x140300D04 (MiExpandPtes.c)
 *     MiCheckPteReserve @ 0x14054E2AC (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, __int64 a2)
{
  __int128 v2; // rax
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
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  unsigned __int64 v27; // r10
  unsigned int v28; // r11d
  __int64 v29; // r13
  bool v30; // zf
  __int64 v31; // rax
  unsigned int v32; // r10d
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rax
  unsigned __int64 v37; // r11
  __int64 v38; // r9
  __int64 v39; // r8
  unsigned int v40; // ecx
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  bool v44; // sf
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v52; // [rsp+28h] [rbp-A0h]
  __int64 v53; // [rsp+30h] [rbp-98h]
  unsigned __int64 v54; // [rsp+50h] [rbp-78h]
  __int128 *v55; // [rsp+58h] [rbp-70h]
  __int128 v56; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v57; // [rsp+70h] [rbp-58h]
  int v58; // [rsp+D8h] [rbp+10h]

  *((_QWORD *)&v2 + 1) = a2;
  LODWORD(v2) = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = DWORD2(v2);
  v5 = DWORD2(v2);
  v6 = DWORD2(v2);
  v56 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    v6 = (unsigned __int64)DWORD2(v2) >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140C4EE80 && DWORD2(v2) <= 0x40uLL )
  {
    v8 = MiCheckProcessorPteCache(DWORD2(v2));
    if ( v8 )
      goto LABEL_5;
  }
  if ( (unsigned int)v4 < 0x200 )
    goto LABEL_23;
  *(_QWORD *)&v2 = MiExpandPtes(a1, v4);
  v8 = v2;
  if ( (_QWORD)v2 )
  {
    if ( (__int64 *)a1 == &qword_140C4EE80 && (dword_140CFB17C & 2) != 0 )
      MiCheckPteReserve(v2, v4);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
    return v8;
  }
  if ( (__int64 *)a1 != &qword_140C4EE80 )
  {
LABEL_23:
    v12 = 0;
    v58 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (__int128 *)a1;
        v15 = *(_QWORD *)(a1 + 64);
        v51 = v15;
        v55 = (__int128 *)a1;
        if ( *(_QWORD *)a1 )
          break;
LABEL_60:
        if ( !v13 || v13 == *(_QWORD *)(a1 + 72) )
        {
          if ( (*(_DWORD *)(a1 + 24) & 1) == 0
            || ((v12 & 1) != 0 || (v12 |= 1u, v58 = v12, (unsigned int)MiEmptyPteBins(a1, 0) != 1))
            && ((v12 & 2) != 0
             || (v12 |= 2u, v58 = v12, !MiPteBinsNeedTrimming(a1, *((__int64 *)&v2 + 1), v15))
             || (unsigned int)MiEmptyPteBins(a1, 1) != 1) )
          {
            v8 = MiExpandPtes(a1, v4);
            if ( v8 )
              goto LABEL_47;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v58 & 4) != 0 )
              goto LABEL_69;
            v12 = v58 | 4;
            v58 |= 4u;
            MiEmptyPteBins(a1, 1);
          }
        }
      }
      v13 = *(_QWORD *)(a1 + 72);
      v54 = v13;
      if ( v13 )
      {
        *((_QWORD *)&v2 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v13 >> 6);
        if ( *(_QWORD *)a1 < v13 )
        {
          v13 = 0LL;
          v54 = 0LL;
        }
        else
        {
          *(_QWORD *)&v2 = *(_QWORD *)a1 - v13;
          v56 = v2;
          v14 = &v56;
          v55 = &v56;
          if ( v15 )
          {
            v15 -= v13;
            v51 = v15;
          }
        }
      }
      v16 = *(_QWORD *)v14;
      v17 = v15;
      v18 = *((_QWORD *)v14 + 1);
      v52 = *(_QWORD *)v14;
      if ( (unsigned __int64)v15 >= *(_QWORD *)v14 )
        v17 = 0LL;
      v53 = *((_QWORD *)v14 + 1);
      v19 = v16 - 1;
      if ( v6 )
      {
        while ( v19 - v17 + 1 < v6 )
        {
          v22 = -1LL;
LABEL_55:
          if ( !v17 )
          {
LABEL_39:
            v13 = v54;
            v23 = v22;
            v14 = v55;
            goto LABEL_40;
          }
          v27 = v6 + v15;
          if ( v6 + v15 > v16 )
            v27 = v16;
          v18 = v53;
          v19 = v27 - 1;
          v17 = 0LL;
        }
        v20 = v19 - v6 + 1;
        v57 = v20;
        v21 = v18 + 8 * (v20 >> 6);
        v15 = *(_QWORD *)(v18 + 8 * (v17 >> 6)) | ((1LL << (v17 & 0x3F)) - 1);
        *((_QWORD *)&v2 + 1) = v18 + 8 * (v17 >> 6);
        if ( v6 > 0x7F )
        {
          v37 = v21 + 8;
          if ( (v20 & 0x3F) == 0 )
            v37 = v21;
          if ( v15 )
          {
            *((_QWORD *)&v2 + 1) += 8LL;
            if ( **((_QWORD **)&v2 + 1) )
            {
              v38 = v53;
              goto LABEL_104;
            }
            v30 = !_BitScanReverse64((unsigned __int64 *)&v43, v15);
            if ( v30 )
              v40 = 64;
            else
              v40 = 63 - v43;
            v38 = v53;
          }
          else
          {
            v38 = v53;
            v40 = 0;
          }
          while ( 1 )
          {
            v22 = ((*((_QWORD *)&v2 + 1) - v38) >> 3 << 6) - v40;
            if ( v22 > v20 )
              break;
            v41 = *((_QWORD *)&v2 + 1) + 8 * ((v6 - v40) >> 6);
            *((_QWORD *)&v2 + 1) += 8LL;
            if ( *((_QWORD *)&v2 + 1) == v41 )
            {
LABEL_112:
              v15 = ((_BYTE)v6 - (_BYTE)v40) & 0x3F;
              if ( (((_BYTE)v6 - (_BYTE)v40) & 0x3F) != 0 )
              {
                v30 = !_BitScanForward64((unsigned __int64 *)&v42, **((_QWORD **)&v2 + 1));
                if ( v30 )
                  LODWORD(v42) = 64;
                if ( (unsigned int)v42 < (unsigned int)v15 )
                  goto LABEL_104;
              }
              goto LABEL_38;
            }
            while ( !**((_QWORD **)&v2 + 1) )
            {
              *((_QWORD *)&v2 + 1) += 8LL;
              if ( *((_QWORD *)&v2 + 1) == v41 )
                goto LABEL_112;
            }
            do
            {
LABEL_104:
              if ( *((_QWORD *)&v2 + 1) > v37 )
              {
LABEL_88:
                v22 = -1LL;
                goto LABEL_54;
              }
              *((_QWORD *)&v2 + 1) += 8LL;
            }
            while ( **((_QWORD **)&v2 + 1) );
            v30 = !_BitScanReverse64((unsigned __int64 *)&v39, *(_QWORD *)(*((_QWORD *)&v2 + 1) - 8LL));
            if ( v30 )
              v40 = 64;
            else
              v40 = 63 - v39;
          }
        }
        else
        {
          if ( v6 >= 0x40 )
          {
            while ( 2 )
            {
              v44 = v15 < 0;
              while ( 1 )
              {
                if ( v44 )
                {
                  do
                  {
                    *((_QWORD *)&v2 + 1) += 8LL;
                    if ( *((_QWORD *)&v2 + 1) > v21 )
                      goto LABEL_53;
                    v15 = **((_QWORD **)&v2 + 1);
                  }
                  while ( (__int64)**((_QWORD **)&v2 + 1) < 0 );
                }
                v30 = !_BitScanReverse64((unsigned __int64 *)&v45, v15);
                if ( v30 )
                  LODWORD(v2) = 64;
                else
                  LODWORD(v2) = 63 - v45;
                v15 = (unsigned int)v2;
                v22 = ((((*((_QWORD *)&v2 + 1) - v18) >> 3) + 1) << 6) - (unsigned int)v2;
                if ( v22 > v20 )
                  goto LABEL_53;
                v46 = v6 - (unsigned int)v2;
                if ( v6 == (unsigned int)v2 )
                  goto LABEL_38;
                v15 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8LL);
                *((_QWORD *)&v2 + 1) += 8LL;
                if ( v46 < 0x40 )
                  break;
                v44 = v15 < 0;
                if ( !v15 )
                {
                  v46 -= 64LL;
                  if ( !v46 )
                    goto LABEL_38;
                  v15 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8LL);
                  *((_QWORD *)&v2 + 1) += 8LL;
                  break;
                }
              }
              v30 = !_BitScanForward64(&v47, v15);
              if ( v30 )
                v47 = 64LL;
              if ( v47 < v46 )
                continue;
              goto LABEL_38;
            }
          }
          if ( v6 > 1 )
          {
            v28 = 0;
            v29 = v53 + 8 * (v19 >> 6);
            while ( 1 )
            {
              if ( v15 == -1 )
              {
                while ( 1 )
                {
                  *((_QWORD *)&v2 + 1) += 8LL;
                  if ( *((_QWORD *)&v2 + 1) > v21 )
                    goto LABEL_88;
                  v15 = **((_QWORD **)&v2 + 1);
                  if ( **((_QWORD **)&v2 + 1) != -1LL )
                  {
                    v28 = 0;
                    break;
                  }
                }
              }
              v30 = !_BitScanForward64((unsigned __int64 *)&v31, v15);
              if ( v30 )
                LODWORD(v31) = 64;
              if ( v28 + (unsigned int)v31 >= v6 )
                break;
              v32 = v6;
              v33 = ~v15;
              while ( 1 )
              {
                v33 &= v33 >> (v32 >> 1);
                if ( !v33 )
                  break;
                v32 -= v32 >> 1;
                if ( v32 <= 1 )
                {
                  _BitScanForward64(&v34, v33);
                  v35 = (unsigned int)v34;
                  goto LABEL_79;
                }
              }
              if ( *((_QWORD *)&v2 + 1) == v29 )
                goto LABEL_88;
              v30 = !_BitScanReverse64((unsigned __int64 *)&v36, v15);
              if ( v30 )
                v28 = 64;
              else
                v28 = 63 - v36;
              v15 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8LL);
              *((_QWORD *)&v2 + 1) += 8LL;
            }
            v35 = -(__int64)v28;
LABEL_79:
            *((_QWORD *)&v2 + 1) = (*((_QWORD *)&v2 + 1) - v53) >> 3 << 6;
            v22 = *((_QWORD *)&v2 + 1) + v35;
            if ( v22 <= v57 )
              goto LABEL_38;
          }
          else
          {
            if ( v15 != -1 )
            {
LABEL_37:
              v15 = ~v15;
              _BitScanForward64((unsigned __int64 *)&v2, v15);
              v22 = v2 + ((*((_QWORD *)&v2 + 1) - v18) >> 3 << 6);
              if ( v22 > v20 )
              {
                v22 = -1LL;
              }
              else
              {
LABEL_38:
                if ( v22 != -1LL )
                  goto LABEL_39;
              }
LABEL_54:
              v16 = v52;
              v15 = v51;
              goto LABEL_55;
            }
            while ( 1 )
            {
              *((_QWORD *)&v2 + 1) += 8LL;
              if ( *((_QWORD *)&v2 + 1) > v21 )
                break;
              v15 = **((_QWORD **)&v2 + 1);
              if ( **((_QWORD **)&v2 + 1) != -1LL )
                goto LABEL_37;
            }
          }
        }
LABEL_53:
        v22 = -1LL;
        goto LABEL_54;
      }
      v23 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_40:
      if ( v23 == -1LL )
      {
        v12 = v58;
        goto LABEL_60;
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx(v14, v23, v6) )
      {
        v24 = v23 + v13;
        if ( v14 != &v56 )
          v24 = v23;
        v25 = 16 * v24;
        *(_QWORD *)(a1 + 64) = v24 + v6;
        if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
          v25 = v24;
        v8 = *(_QWORD *)(a1 + 16) + 8 * v25;
LABEL_47:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
        v5 = v4;
LABEL_5:
        if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
        {
          if ( (__int64 *)a1 == &qword_140C4EE80 && (dword_140CFB17C & 2) != 0 )
            MiCheckPteReserve(v8, v5);
          if ( (unsigned int)v4 <= 0x10 )
          {
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
                    v49 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
                    v50 = v9 | 0x20;
                    if ( (v49 & 0x20) == 0 )
                      v50 = *(_QWORD *)(v8 + 8LL * v3);
                    v9 = v50;
                    if ( (v49 & 0x42) != 0 )
                      v9 = v50 | 0x42;
                  }
                }
                if ( qword_140C4DE80 && (v9 & 0x10) == 0 )
                  v9 &= ~qword_140C4DE80;
                if ( (v9 & 0xFFFFFFFF00000000uLL) != 0 )
                  break;
                ++v3;
              }
              while ( v3 < (unsigned int)v4 );
            }
            if ( v3 == (_DWORD)v4 )
              return v8;
          }
          v26 = 0;
        }
        else
        {
          v26 = 2;
        }
        MiFlushTbAsNeeded(v8, v5, v26, 0);
        return v8;
      }
      v12 = v58;
    }
  }
LABEL_69:
  ++**(_DWORD **)(a1 + 32);
  return 0LL;
}
