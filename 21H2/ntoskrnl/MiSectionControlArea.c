/*
 * XREFs of MiSectionControlArea @ 0x14031FFB0
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14039EDE4 (MiCountSystemImageCommitment.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14054DE8C (MiReferenceAweHandle.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 *     MmCheckImageMapping @ 0x1405EBE68 (MmCheckImageMapping.c)
 *     PsQuerySectionSignatureInformation @ 0x1405FE280 (PsQuerySectionSignatureInformation.c)
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     MmGetSectionInformation @ 0x14068ABA0 (MmGetSectionInformation.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140696B38 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x140698234 (MmCreateSpecialImageSection.c)
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MmGetFileObjectForSection @ 0x1406AB4D0 (MmGetFileObjectForSection.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 *     MiComputeProcessUserVa @ 0x1406C0310 (MiComputeProcessUserVa.c)
 *     MiMapExParametersInitialize @ 0x1406C0EA8 (MiMapExParametersInitialize.c)
 *     PspInitializeFullProcessImageName @ 0x1406C6DA4 (PspInitializeFullProcessImageName.c)
 *     PsReferenceProcessFilePointer @ 0x1406F4310 (PsReferenceProcessFilePointer.c)
 *     MiMapViewInSystemSpace @ 0x1406FFC5C (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140701440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSectionDelete @ 0x140701EE0 (MiSectionDelete.c)
 *     MiSectionClose @ 0x1407025D0 (MiSectionClose.c)
 *     MiSectionOpen @ 0x140702600 (MiSectionOpen.c)
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140703390 (MiMapParametersInitialize.c)
 *     MiCreateSectionCommon @ 0x14071E810 (MiCreateSectionCommon.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075C518 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     MiResolveImageImports @ 0x14075D184 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075DF90 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x14075EA6C (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x14075ED24 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x140773400 (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x14078A1E8 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x1407A1804 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x1407CE0C4 (MiFreeRetpolineImportInfo.c)
 *     MmGetFileNameForSection @ 0x1408C42BC (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C46B0 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x1408C7AF0 (MiLogSectionObjectEvent.c)
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CA9A8 (MiIdentifyPatchImageWritablePages.c)
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408CCC68 (MiOpenHotPatchFile.c)
 *     MiIsImageFullyRetpolined @ 0x1408D0C14 (MiIsImageFullyRetpolined.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D1310 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3B1C (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D5D08 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x1408D8088 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x1409C3090 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A55F90 (MiInitializeCfg.c)
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
