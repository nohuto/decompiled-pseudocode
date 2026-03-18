/*
 * XREFs of MiSectionControlArea @ 0x1402A1930
 * Callers:
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiCreateSystemSection @ 0x14036F274 (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053EA0C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14054812C (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x1405DB7B0 (MmGetSectionInformation.c)
 *     MiCreateSectionCommon @ 0x14062FC80 (MiCreateSectionCommon.c)
 *     MiMapViewOfSection @ 0x140632050 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406325D0 (MiMapParametersInitialize.c)
 *     MiSectionOpen @ 0x140633C50 (MiSectionOpen.c)
 *     MiSectionClose @ 0x140633C80 (MiSectionClose.c)
 *     MiSectionDelete @ 0x1406341A0 (MiSectionDelete.c)
 *     MiCfgMarkValidEntries @ 0x14063C194 (MiCfgMarkValidEntries.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewInSystemSpace @ 0x1406401E4 (MiMapViewInSystemSpace.c)
 *     MmExtendSection @ 0x140641C24 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x140642850 (MmGetFileObjectForSection.c)
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     MiMapExParametersInitialize @ 0x14064D4D0 (MiMapExParametersInitialize.c)
 *     PsReferenceProcessFilePointer @ 0x14064E790 (PsReferenceProcessFilePointer.c)
 *     MiComputeProcessUserVa @ 0x14064F668 (MiComputeProcessUserVa.c)
 *     MmCreateSpecialImageSection @ 0x14066F58C (MmCreateSpecialImageSection.c)
 *     PsQuerySectionSignatureInformation @ 0x1406CE9F0 (PsQuerySectionSignatureInformation.c)
 *     PspInitializeFullProcessImageName @ 0x1406D0B9C (PspInitializeFullProcessImageName.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E0B20 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCheckImageMapping @ 0x1406E2648 (MmCheckImageMapping.c)
 *     MmChangeImageProtection @ 0x1406EF580 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140744D18 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 *     MiResolveImageImports @ 0x1407459B0 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x140745AB0 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x1407465D8 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x1407470B4 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x140747544 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14075E7D0 (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x140775838 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x140783A44 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x1407B8294 (MiFreeRetpolineImportInfo.c)
 *     MmGetFileNameForSection @ 0x1408BF80C (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x1408BFC00 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x1408C3040 (MiLogSectionObjectEvent.c)
 *     MiApplyDriverHotPatch @ 0x1408C4464 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C48A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408C5EF8 (MiIdentifyPatchImageWritablePages.c)
 *     MiLoadHotPatch @ 0x1408C6280 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408C81B8 (MiOpenHotPatchFile.c)
 *     MiIsImageFullyRetpolined @ 0x1408CC164 (MiIsImageFullyRetpolined.c)
 *     MmSectionToSectionObjectPointers @ 0x1408CC860 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408CF06C (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D1258 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x1408D35D8 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x1409BF080 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A4D608 (MiInitializeCfg.c)
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
