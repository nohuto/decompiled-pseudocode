/*
 * XREFs of MiReleasePtes @ 0x1402EA050
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiMapContiguousMemory @ 0x1402174E4 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MmCopyMemory @ 0x140232A90 (MmCopyMemory.c)
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiReleasePteCopyList @ 0x140249314 (MiReleasePteCopyList.c)
 *     MiDeleteKernelStack @ 0x1402606E0 (MiDeleteKernelStack.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MmCreateKernelStack @ 0x1403352B0 (MmCreateKernelStack.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 *     MiUnmapSinglePage @ 0x14036B274 (MiUnmapSinglePage.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403979C4 (MiUpdateImagePfnImportRelocations.c)
 *     MmDeleteProcessor @ 0x14052E210 (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x1405377F0 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x1405432D0 (MiExtendPagingFileMaximum.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 *     MiReleasePageHash @ 0x14055D904 (MiReleasePageHash.c)
 *     MiReturnPteMappingPair @ 0x140563900 (MiReturnPteMappingPair.c)
 *     MiValidateImagePfn @ 0x1405FAEC4 (MiValidateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14067BC6C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MiRelocateImageAgain @ 0x1406C290C (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CD38 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     MmFreeMappingAddress @ 0x1407688C0 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x140777360 (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     MiCreatePfnBitMaps @ 0x1407B9A04 (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x1408C6A40 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x1408CE5AC (MiReleaseHotPatchResources.c)
 *     MiUnlockEntireDriver @ 0x1408D0ED4 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x1408D13B8 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x1408D1FB8 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x1408D88B0 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x1408DAFB8 (MiExpandPartitionIds.c)
 *     MiDeleteEnclavePages @ 0x1409B1A90 (MiDeleteEnclavePages.c)
 *     MiInitializePteInfo @ 0x140A4F918 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140A56380 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140A67B10 (MiInitializeGapFrames.c)
 *     MiCreateRetpolineBitmap @ 0x140A9344C (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A93754 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x14021B0C0 (MiInitializeTbFlushStamps.c)
 *     MiReturnSystemPtes @ 0x140240318 (MiReturnSystemPtes.c)
 *     MiInsertCachedPte @ 0x1402EA450 (MiInsertCachedPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiAttemptCoalesce @ 0x140353C10 (MiAttemptCoalesce.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiCheckPteRelease @ 0x140553D10 (MiCheckPteRelease.c)
 */

unsigned __int64 __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  unsigned __int64 v6; // r9
  unsigned __int64 BugCheckParameter4; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r8
  ULONG_PTR v15; // rcx
  __int64 *v16; // rbx
  unsigned __int64 result; // rax
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  __int64 *v20; // rbx
  char v21; // al
  unsigned __int64 v22; // r10
  volatile signed __int32 *v23; // r8
  unsigned __int64 v24; // rdx
  signed __int64 v25; // rax
  int v26; // [rsp+30h] [rbp-118h]
  __int64 v27; // [rsp+38h] [rbp-110h] BYREF
  _QWORD v28[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v27 = 0LL;
  memset(v28, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C4EF80 && (dword_140CFB17C & 2) != 0 )
    MiCheckPteRelease(a2, (unsigned int)v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    BugCheckParameter4 >>= 4;
  v8 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v8 = v3;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_140C4EF80 )
  {
    v26 = 1;
    goto LABEL_25;
  }
  v26 = 0;
  if ( BugCheckParameter4 >= *(_QWORD *)a1 )
    goto LABEL_55;
  if ( v8 > 1 )
  {
    if ( *(_QWORD *)a1 - BugCheckParameter4 < v8 )
      goto LABEL_55;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 8 * (BugCheckParameter4 >> 6));
    v11 = v9 + 8 * (BugCheckParameter4 >> 6);
    v6 = v9 + 8 * ((BugCheckParameter4 + v8 - 1) >> 6);
    if ( v11 == v6 )
    {
      v12 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
      v13 = v10 & v12;
    }
    else
    {
      if ( (v10 & (-1LL << BugCheckParameter4)) != -1LL << BugCheckParameter4 )
        goto LABEL_55;
      v14 = (_QWORD *)(v11 + 8);
      if ( v14 != (_QWORD *)v6 )
      {
        while ( *v14 == -1LL )
        {
          if ( ++v14 == (_QWORD *)v6 )
            goto LABEL_23;
        }
        goto LABEL_55;
      }
LABEL_23:
      v12 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v8 - 1);
      v13 = v12 & *v14;
    }
    if ( v13 == v12 )
      goto LABEL_25;
LABEL_55:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v8 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_55;
LABEL_25:
  if ( (_DWORD)v3 )
  {
    v15 = v3;
    do
    {
      *a2++ = ZeroPte;
      --v15;
    }
    while ( v15 );
  }
  v16 = &a2[-v3];
  if ( v26 )
    goto LABEL_50;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v16, (unsigned int)v3), (_DWORD)result != 1) )
  {
    MiInitializeTbFlushStamps(&v27);
    v18 = v27;
    if ( (_DWORD)v3 )
    {
      v19 = v3;
      do
      {
        *v16++ = v18;
        --v19;
      }
      while ( v19 );
    }
    v20 = &v16[-v3];
    if ( qword_140C4DF80 && (v18 & 0x10) == 0 )
      v18 &= ~qword_140C4DF80;
    if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v21 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
      WORD2(v28[0]) = 0;
      v28[2] = 0LL;
      LODWORD(v28[0]) = v21 & 2;
      LODWORD(v28[1]) = 20;
      v28[3] = 0LL;
      MiInsertTbFlushEntry(v28, (__int64)((_QWORD)v20 << 25) >> 16, v3, 0LL);
      MiFlushTbList(v28);
    }
    v22 = BugCheckParameter4 & 0x1F;
    v6 = v8;
    v23 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v8 + v22 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v23, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v22));
        v6 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v23;
      }
      if ( v6 >= 0x20 )
      {
        v24 = v6 >> 5;
        v6 += -32LL * (v6 >> 5);
        do
        {
          *v23++ = 0;
          --v24;
        }
        while ( v24 );
      }
      if ( v6 )
        _InterlockedAnd(v23, -1 << v6);
    }
    else if ( v8 == 32 )
    {
      *v23 = 0;
    }
    else
    {
      _InterlockedAnd(v23, ~(((1 << v8) - 1) << v22));
    }
LABEL_50:
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v8);
    if ( v26 == 1 )
    {
      return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1);
    }
    else
    {
      result = v8 + v25;
      if ( result > 0x40000 )
        return MiAttemptCoalesce(a1, BugCheckParameter4, v8, v6);
    }
  }
  return result;
}
