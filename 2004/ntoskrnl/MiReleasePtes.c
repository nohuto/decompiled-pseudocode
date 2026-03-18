/*
 * XREFs of MiReleasePtes @ 0x140284720
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiDeleteKernelStack @ 0x1402B9020 (MiDeleteKernelStack.c)
 *     MiZeroInParallelWorker @ 0x1402DF7C0 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MmCreateKernelStack @ 0x1402F8A30 (MmCreateKernelStack.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiMapContiguousMemory @ 0x140336914 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     MmCopyMemory @ 0x14033F6D0 (MmCopyMemory.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiReleasePteCopyList @ 0x140358E98 (MiReleasePteCopyList.c)
 *     MiUnmapSinglePage @ 0x140368E34 (MiUnmapSinglePage.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140394F3C (MiUpdateImagePfnImportRelocations.c)
 *     MmDeleteProcessor @ 0x140528B00 (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x1405320E0 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x14053DBC0 (MiExtendPagingFileMaximum.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140551998 (MiScrubNodeLargePageList.c)
 *     MiReleasePageHash @ 0x140558224 (MiReleasePageHash.c)
 *     MiReturnPteMappingPair @ 0x14055E220 (MiReturnPteMappingPair.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiRelocateImageAgain @ 0x14060666C (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1407066D8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407470B8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x1407515D0 (MmFreeIndependentPages.c)
 *     MmFreeMappingAddress @ 0x140756850 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x140767C5C (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     MiCreatePfnBitMaps @ 0x1407A5734 (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x1408C32E0 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x1408CAE4C (MiReleaseHotPatchResources.c)
 *     MiUnlockEntireDriver @ 0x1408CD774 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x1408CDC58 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x1408CE858 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x1408D5150 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x1408D7858 (MiExpandPartitionIds.c)
 *     MiDeleteEnclavePages @ 0x1409ADCF0 (MiDeleteEnclavePages.c)
 *     MiInitializePteInfo @ 0x140A470DC (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140A536F8 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140A6225C (MiInitializeGapFrames.c)
 *     MiCreateRetpolineBitmap @ 0x140A8F8EC (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A8FBEC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiInsertCachedPte @ 0x140284AB0 (MiInsertCachedPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushStamps @ 0x1402B68D0 (MiInitializeTbFlushStamps.c)
 *     MiAttemptCoalesce @ 0x1403219B0 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x140321AF4 (MiReturnSystemPtes.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiCheckPteRelease @ 0x14054E630 (MiCheckPteRelease.c)
 */

__int64 __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // r15
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned __int64 v7; // r14
  int v8; // r13d
  ULONG_PTR v9; // rcx
  _QWORD *v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r11
  _QWORD *v14; // r8
  _QWORD *v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rax
  ULONG_PTR v20; // rcx
  _QWORD *v21; // rbx
  ULONG_PTR v22; // r10
  unsigned __int64 v23; // r9
  volatile signed __int32 *v24; // r8
  unsigned int v25; // eax
  unsigned __int64 v26; // rdx
  char v27; // al
  _KPROCESS *v28; // rdx
  __int64 v29; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v30[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v29 = 0LL;
  memset(v30, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C4ED40 && (dword_140CFB17C & 2) != 0 )
    MiCheckPteRelease(a2, v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    BugCheckParameter4 >>= 4;
  v7 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v7 = v3;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_140C4ED40 )
  {
    v8 = 1;
    goto LABEL_13;
  }
  v8 = 0;
  if ( BugCheckParameter4 >= *(_QWORD *)a1 )
    goto LABEL_56;
  if ( v7 > 1 )
  {
    if ( *(_QWORD *)a1 - BugCheckParameter4 < v7 )
      goto LABEL_56;
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
    v14 = (_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
    v15 = (_QWORD *)(v12 + 8 * ((BugCheckParameter4 + v7 - 1) >> 6));
    if ( v14 == v15 )
    {
      v16 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4;
      v17 = v13 & v16;
    }
    else
    {
      if ( (v13 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
        goto LABEL_56;
      v18 = v14 + 1;
      if ( v18 != v15 )
      {
        while ( *v18 == -1LL )
        {
          if ( ++v18 == v15 )
            goto LABEL_27;
        }
        goto LABEL_56;
      }
LABEL_27:
      v16 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1);
      v17 = *v18 & v16;
    }
    if ( v17 == v16 )
      goto LABEL_13;
LABEL_56:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v7 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_56;
LABEL_13:
  if ( (_DWORD)v3 )
  {
    v9 = v3;
    do
    {
      *a2++ = ZeroPte;
      --v9;
    }
    while ( v9 );
  }
  v10 = &a2[-v3];
  if ( v8 )
    goto LABEL_40;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v10, (unsigned int)v3), (_DWORD)result != 1) )
  {
    MiInitializeTbFlushStamps(&v29);
    v19 = v29;
    if ( (_DWORD)v3 )
    {
      v20 = v3;
      do
      {
        *v10++ = v19;
        --v20;
      }
      while ( v20 );
    }
    v21 = &v10[-v3];
    if ( qword_140C4DD40 && (v19 & 0x10) == 0 )
      v19 &= ~qword_140C4DD40;
    if ( (v19 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v27 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
      WORD2(v30[0]) = 0;
      v30[2] = 0LL;
      LODWORD(v30[0]) = v27 & 2;
      LODWORD(v30[1]) = 20;
      v30[3] = 0LL;
      MiInsertTbFlushEntry(v30, (__int64)((_QWORD)v21 << 25) >> 16, v3, 0LL);
      MiFlushTbList((__int64)v30, v28);
    }
    v22 = BugCheckParameter4 & 0x1F;
    v23 = v7;
    v24 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v7 + v22 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v24, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v22));
        v23 = v7 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
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
      if ( v7 == 32 )
      {
        *v24 = 0;
LABEL_40:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v7);
        if ( v8 == 1 )
          return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1LL);
        else
          return MiAttemptCoalesce(a1, BugCheckParameter4, v7);
      }
      v25 = ~(((1 << v7) - 1) << v22);
    }
    _InterlockedAnd(v24, v25);
    goto LABEL_40;
  }
  return result;
}
