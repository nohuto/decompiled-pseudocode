/*
 * XREFs of MiReleasePtes @ 0x140294430
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 *     MiMapContiguousMemory @ 0x1402608B4 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiReleasePteCopyList @ 0x1403292F4 (MiReleasePteCopyList.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiUnmapSinglePage @ 0x14036AE14 (MiUnmapSinglePage.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403973FC (MiUpdateImagePfnImportRelocations.c)
 *     MmDeleteProcessor @ 0x14052C4D0 (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x140535AB0 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x140541590 (MiExtendPagingFileMaximum.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     MiReleasePageHash @ 0x14055BBF4 (MiReleasePageHash.c)
 *     MiReturnPteMappingPair @ 0x140561BF0 (MiReturnPteMappingPair.c)
 *     MiRelocateImageAgain @ 0x14062B714 (MiRelocateImageAgain.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14065EABC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
 *     MmFreeMappingAddress @ 0x140765490 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x140773334 (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     MiCreatePfnBitMaps @ 0x1407B4884 (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x1408C9120 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x1408D0C8C (MiReleaseHotPatchResources.c)
 *     MiUnlockEntireDriver @ 0x1408D35B4 (MiUnlockEntireDriver.c)
 *     MmFreeIsrStack @ 0x1408D3A98 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 *     MiDeleteSparseRange @ 0x1408DAF90 (MiDeleteSparseRange.c)
 *     MiExpandPartitionIds @ 0x1408DD698 (MiExpandPartitionIds.c)
 *     MiDeleteEnclavePages @ 0x1409B3C60 (MiDeleteEnclavePages.c)
 *     MiInitializePteInfo @ 0x140A4D378 (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140A53D78 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140A6961C (MiInitializeGapFrames.c)
 *     MiCreateRetpolineBitmap @ 0x140A955EC (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A958EC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x14021EF70 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x140252190 (MiReturnSystemPtes.c)
 *     MiInsertCachedPte @ 0x140294850 (MiInsertCachedPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiInitializeTbFlushStamps @ 0x1403018E0 (MiInitializeTbFlushStamps.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiIsPteCachingOptimizationEnabled @ 0x1403F4274 (MiIsPteCachingOptimizationEnabled.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiCheckPteRelease @ 0x140552000 (MiCheckPteRelease.c)
 */

char __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  signed __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  volatile signed __int32 *v8; // r8
  unsigned __int64 BugCheckParameter4; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // r10
  __int64 v14; // r9
  volatile signed __int32 *v15; // rdx
  bool v16; // zf
  _QWORD *v17; // rbx
  int inserted; // eax
  __int64 v19; // rax
  ULONG_PTR v20; // rcx
  _QWORD *v21; // rbx
  char v22; // al
  __int64 v23; // rdx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+30h] [rbp-118h]
  __int64 v32; // [rsp+38h] [rbp-110h] BYREF
  _QWORD v33[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v6 = 0LL;
  v32 = 0LL;
  memset(v33, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C4EDC0 && (dword_140CFB17C & 2) != 0 )
    MiCheckPteRelease(a2, (unsigned int)v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    BugCheckParameter4 >>= 4;
  v10 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v10 = v3;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_140C4EDC0 )
  {
    v11 = 1LL;
    v31 = 1;
    goto LABEL_26;
  }
  v11 = 0LL;
  v31 = 0;
  if ( BugCheckParameter4 >= *(_QWORD *)a1 )
    goto LABEL_61;
  if ( v10 > 1 )
  {
    if ( *(_QWORD *)a1 - BugCheckParameter4 < v10 )
      goto LABEL_61;
    v12 = *(_QWORD *)(a1 + 8);
    v13 = BugCheckParameter4 + v10 - 1;
    v14 = *(_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
    v8 = (volatile signed __int32 *)(v12 + 8 * (BugCheckParameter4 >> 6));
    v15 = (volatile signed __int32 *)(v12 + 8 * ((BugCheckParameter4 + v10 - 1) >> 6));
    if ( v8 == v15 )
    {
      v7 = BugCheckParameter4;
      v16 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << BugCheckParameter4) & v14) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << BugCheckParameter4;
    }
    else
    {
      if ( ((-1LL << BugCheckParameter4) & v14) != -1LL << BugCheckParameter4 )
        goto LABEL_61;
      v8 += 2;
      if ( v8 != v15 )
      {
        while ( *(_QWORD *)v8 == -1LL )
        {
          v8 += 2;
          if ( v8 == v15 )
            goto LABEL_23;
        }
        goto LABEL_61;
      }
LABEL_23:
      v7 = v13;
      LOBYTE(v7) = ~v13;
      v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~v13) & *(_QWORD *)v8) == 0xFFFFFFFFFFFFFFFFuLL >> ~v13;
    }
    if ( v16 )
    {
      v11 = 0LL;
      goto LABEL_26;
    }
LABEL_61:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v10 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_61;
LABEL_26:
  if ( (_DWORD)v3 )
  {
    v7 = v3;
    do
    {
      *a2++ = ZeroPte;
      --v7;
    }
    while ( v7 );
  }
  v17 = &a2[-v3];
  if ( (_DWORD)v11 )
    goto LABEL_52;
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
  {
    inserted = MiInsertCachedPte(a1, v17, (unsigned int)v3);
    if ( inserted == 1 )
      return inserted;
  }
  MiInitializeTbFlushStamps(&v32);
  v19 = v32;
  if ( (_DWORD)v3 )
  {
    v20 = v3;
    do
    {
      *v17++ = v19;
      --v20;
    }
    while ( v20 );
  }
  v11 = qword_140C4DDC0;
  v21 = &v17[-v3];
  if ( qword_140C4DDC0 && (v19 & 0x10) == 0 )
    v19 &= ~qword_140C4DDC0;
  if ( (v19 & 0xFFFFFFFF00000000uLL) == 0 )
  {
    v22 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
    WORD2(v33[0]) = 0;
    v33[2] = 0LL;
    LODWORD(v33[0]) = v22 & 2;
    LODWORD(v33[1]) = 20;
    v33[3] = 0LL;
    MiInsertTbFlushEntry(v33, (__int64)((_QWORD)v21 << 25) >> 16, v3, 0LL);
    MiFlushTbList(v33, v23);
  }
  v24 = BugCheckParameter4 & 0x1F;
  v7 = BugCheckParameter4 >> 5;
  v25 = v10;
  v8 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
  if ( v10 + v24 > 0x20 )
  {
    if ( (BugCheckParameter4 & 0x1F) != 0 )
    {
      v11 = 32 - (unsigned int)(BugCheckParameter4 & 0x1F);
      v7 = BugCheckParameter4 & 0x1F;
      _InterlockedAnd(v8, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v24));
      v25 = v10 - v11;
      ++v8;
    }
    if ( v25 >= 0x20 )
    {
      v11 = v25 >> 5;
      v25 += -32LL * (v25 >> 5);
      do
      {
        *v8++ = 0;
        --v11;
      }
      while ( v11 );
    }
    if ( !v25 )
      goto LABEL_52;
    v7 = v25;
    v26 = -1 << v25;
    goto LABEL_51;
  }
  if ( v10 != 32 )
  {
    v7 = BugCheckParameter4 & 0x1F;
    v26 = ~(((1 << v10) - 1) << v24);
LABEL_51:
    _InterlockedAnd(v8, v26);
    goto LABEL_52;
  }
  *v8 = 0;
LABEL_52:
  if ( (unsigned int)MiIsPteCachingOptimizationEnabled(v7, v11, v8) )
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v10);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v10);
  if ( v31 == 1 )
  {
    LOBYTE(inserted) = MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1);
  }
  else if ( !(unsigned int)MiIsPteCachingOptimizationEnabled(v28, v27, v29)
         || (LOBYTE(inserted) = v10 + v6, v10 + v6 > 0x40000) )
  {
    LOBYTE(inserted) = MiAttemptCoalesce(a1, BugCheckParameter4, v10);
  }
  return inserted;
}
