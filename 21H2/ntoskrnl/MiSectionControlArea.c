/*
 * XREFs of MiSectionControlArea @ 0x140315260
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x140310DE0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x1403720DC (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054452C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14054DC4C (MiReferenceAweHandle.c)
 *     PsReferenceProcessFilePointer @ 0x140604BE0 (PsReferenceProcessFilePointer.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406070A8 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x140608784 (MmCreateSpecialImageSection.c)
 *     MmGetSectionInformation @ 0x140620F30 (MmGetSectionInformation.c)
 *     DbgkCreateThread @ 0x140647420 (DbgkCreateThread.c)
 *     MmExtendSection @ 0x1406894BC (MmExtendSection.c)
 *     MmCheckImageMapping @ 0x14068BFF8 (MmCheckImageMapping.c)
 *     PsQuerySectionSignatureInformation @ 0x14069F0B0 (PsQuerySectionSignatureInformation.c)
 *     MmChangeImageProtection @ 0x1406D0DD0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MmGetFileObjectForSection @ 0x1406D41F0 (MmGetFileObjectForSection.c)
 *     MiMapViewInSystemSpace @ 0x1406E887C (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406EA060 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSectionDelete @ 0x1406EAB00 (MiSectionDelete.c)
 *     MiSectionClose @ 0x1406EB1F0 (MiSectionClose.c)
 *     MiSectionOpen @ 0x1406EB220 (MiSectionOpen.c)
 *     MiMapViewOfSection @ 0x1406EBA30 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406EBFB0 (MiMapParametersInitialize.c)
 *     MiCreateSectionCommon @ 0x140707430 (MiCreateSectionCommon.c)
 *     MiCfgMarkValidEntries @ 0x14070F9B4 (MiCfgMarkValidEntries.c)
 *     MiComputeProcessUserVa @ 0x140711CC0 (MiComputeProcessUserVa.c)
 *     MiMapExParametersInitialize @ 0x140712858 (MiMapExParametersInitialize.c)
 *     PspInitializeFullProcessImageName @ 0x140718754 (PspInitializeFullProcessImageName.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075C358 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x14075C644 (MiDriverLoadSucceeded.c)
 *     MiResolveImageImports @ 0x14075CFC4 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x14075D0C4 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075DDD0 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x14075E8AC (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x14075EB64 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x140773240 (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x14078A028 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x1407A1604 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x1407CDF54 (MiFreeRetpolineImportInfo.c)
 *     MmGetFileNameForSection @ 0x1408C415C (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C4550 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x1408C7990 (MiLogSectionObjectEvent.c)
 *     MiApplyDriverHotPatch @ 0x1408C8DB4 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C91F8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CA848 (MiIdentifyPatchImageWritablePages.c)
 *     MiLoadHotPatch @ 0x1408CABD0 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408CCB08 (MiOpenHotPatchFile.c)
 *     MiIsImageFullyRetpolined @ 0x1408D0AB4 (MiIsImageFullyRetpolined.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D11B0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D39BC (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D5BA8 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6800 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x1408D7F28 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x1409C2090 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A54F90 (MiInitializeCfg.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)(result + 40) + 16LL);
  if ( (v1 & 2) != 0 )
    return **(_QWORD **)(result + 40);
  return result;
}
