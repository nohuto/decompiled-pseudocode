/*
 * XREFs of MiReleasePtes @ 0x140247F40
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemory @ 0x1402F98E4 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiReleasePteCopyList @ 0x14031B3E8 (MiReleasePteCopyList.c)
 *     MiZeroInParallelWorker @ 0x1403248C0 (MiZeroInParallelWorker.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 *     MiUnmapSinglePage @ 0x140368474 (MiUnmapSinglePage.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14039436C (MiUpdateImagePfnImportRelocations.c)
 *     MmDeleteProcessor @ 0x1405284B0 (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x140531A90 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x14053D570 (MiExtendPagingFileMaximum.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140551348 (MiScrubNodeLargePageList.c)
 *     MiReleasePageHash @ 0x140557BD4 (MiReleasePageHash.c)
 *     MiReturnPteMappingPair @ 0x14055DBD0 (MiReturnPteMappingPair.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiRelocateImageAgain @ 0x14063B7B0 (MiRelocateImageAgain.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E2D20 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14074CF40 (MmFreeIndependentPages.c)
 *     MmFreeMappingAddress @ 0x1407521C0 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x14075FB64 (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     MiCreatePfnBitMaps @ 0x1407A2EE4 (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x1408C1F90 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x1408C9AFC (MiReleaseHotPatchResources.c)
 *     MiUnlockEntireDriver @ 0x1408CC424 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x1408CC908 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x1408CD508 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x1408D3E00 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x1408D6508 (MiExpandPartitionIds.c)
 *     MiDeleteEnclavePages @ 0x1409ACE90 (MiDeleteEnclavePages.c)
 *     MiInitializePteInfo @ 0x140A41880 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140A4D9F8 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140A5F0F0 (MiInitializeGapFrames.c)
 *     MiCreateRetpolineBitmap @ 0x140A902FC (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A905FC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushStamps @ 0x140223C50 (MiInitializeTbFlushStamps.c)
 *     MiInsertCachedPte @ 0x1402482D0 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiAttemptCoalesce @ 0x1402E6D30 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x1402E6E74 (MiReturnSystemPtes.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiCheckPteRelease @ 0x14054DFE0 (MiCheckPteRelease.c)
 */

__int64 __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // r15
  unsigned __int64 v6; // rdx
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned __int64 v8; // r14
  int v9; // r13d
  ULONG_PTR v10; // rcx
  __int64 *v11; // rbx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  _QWORD *v15; // r8
  _QWORD *v16; // r9
  unsigned __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rax
  ULONG_PTR v20; // rcx
  __int64 *v21; // rbx
  ULONG_PTR v22; // r10
  unsigned __int64 v23; // r9
  volatile signed __int32 *v24; // r8
  unsigned int v25; // eax
  unsigned __int64 v26; // rdx
  char v27; // al
  __int64 v28; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v29[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v28 = 0LL;
  memset(v29, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C4EE80 && (dword_140CFB17C & 2) != 0 )
    MiCheckPteRelease(a2, v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    BugCheckParameter4 >>= 4;
  v8 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v8 = v3;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_140C4EE80 )
  {
    v9 = 1;
    goto LABEL_13;
  }
  v9 = 0;
  if ( BugCheckParameter4 >= *(_QWORD *)a1 )
    goto LABEL_56;
  if ( v8 > 1 )
  {
    if ( *(_QWORD *)a1 - BugCheckParameter4 < v8 )
      goto LABEL_56;
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(v13 + 8 * (BugCheckParameter4 >> 6));
    v15 = (_QWORD *)(v13 + 8 * (BugCheckParameter4 >> 6));
    v16 = (_QWORD *)(v13 + 8 * ((BugCheckParameter4 + v8 - 1) >> 6));
    if ( v15 == v16 )
    {
      v6 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
      v17 = v14 & v6;
    }
    else
    {
      if ( (v14 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
        goto LABEL_56;
      v18 = v15 + 1;
      if ( v18 != v16 )
      {
        while ( *v18 == -1LL )
        {
          if ( ++v18 == v16 )
            goto LABEL_27;
        }
        goto LABEL_56;
      }
LABEL_27:
      v6 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v8 - 1);
      v17 = *v18 & v6;
    }
    if ( v17 == v6 )
      goto LABEL_13;
LABEL_56:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v8 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_56;
LABEL_13:
  if ( (_DWORD)v3 )
  {
    v10 = v3;
    do
    {
      *a2++ = ZeroPte;
      --v10;
    }
    while ( v10 );
  }
  v11 = &a2[-v3];
  if ( v9 )
    goto LABEL_40;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v11, (unsigned int)v3), (_DWORD)result != 1) )
  {
    MiInitializeTbFlushStamps(&v28, v6);
    v19 = v28;
    if ( (_DWORD)v3 )
    {
      v20 = v3;
      do
      {
        *v11++ = v19;
        --v20;
      }
      while ( v20 );
    }
    v21 = &v11[-v3];
    if ( qword_140C4DE80 && (v19 & 0x10) == 0 )
      v19 &= ~qword_140C4DE80;
    if ( (v19 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v27 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
      WORD2(v29[0]) = 0;
      v29[2] = 0LL;
      LODWORD(v29[0]) = v27 & 2;
      LODWORD(v29[1]) = 20;
      v29[3] = 0LL;
      MiInsertTbFlushEntry((__int64)v29, (__int64)((_QWORD)v21 << 25) >> 16, v3, 0);
      MiFlushTbList(v29);
    }
    v22 = BugCheckParameter4 & 0x1F;
    v23 = v8;
    v24 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v8 + v22 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v24, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v22));
        v23 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v24;
      }
      if ( v23 >= 0x20 )
      {
        v26 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v24++ = 0;
          --v26;
        }
        while ( v26 );
      }
      if ( !v23 )
        goto LABEL_40;
      v25 = -1 << v23;
    }
    else
    {
      if ( v8 == 32 )
      {
        *v24 = 0;
LABEL_40:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v8);
        if ( v9 == 1 )
          return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1LL);
        else
          return MiAttemptCoalesce(a1, BugCheckParameter4, v8);
      }
      v25 = ~(((1 << v8) - 1) << v22);
    }
    _InterlockedAnd(v24, v25);
    goto LABEL_40;
  }
  return result;
}
