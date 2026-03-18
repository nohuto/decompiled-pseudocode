/*
 * XREFs of MiSectionControlArea @ 0x14022C010
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x140371DF4 (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14039F054 (MiCountSystemImageCommitment.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x140542A2C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14054C14C (MiReferenceAweHandle.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140621DD0 (MiMapParametersInitialize.c)
 *     MiSectionOpen @ 0x140624580 (MiSectionOpen.c)
 *     MiSectionClose @ 0x1406245B0 (MiSectionClose.c)
 *     MiCfgMarkValidEntries @ 0x140629948 (MiCfgMarkValidEntries.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14062A440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     PspInitializeFullProcessImageName @ 0x140631C6C (PspInitializeFullProcessImageName.c)
 *     MmGetSectionInformation @ 0x140636810 (MmGetSectionInformation.c)
 *     MiMapViewInSystemSpace @ 0x140657AF4 (MiMapViewInSystemSpace.c)
 *     MmChangeImageProtection @ 0x140658F80 (MmChangeImageProtection.c)
 *     MiSectionDelete @ 0x14067DC40 (MiSectionDelete.c)
 *     MiCreateSectionCommon @ 0x14067F1A0 (MiCreateSectionCommon.c)
 *     PsReferenceProcessFilePointer @ 0x14068ECE0 (PsReferenceProcessFilePointer.c)
 *     MmCreateSpecialImageSection @ 0x14068FA78 (MmCreateSpecialImageSection.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     MmCheckImageMapping @ 0x1406B04B0 (MmCheckImageMapping.c)
 *     PsQuerySectionSignatureInformation @ 0x1406C30F0 (PsQuerySectionSignatureInformation.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406D69C0 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MiComputeProcessUserVa @ 0x1406EF2A0 (MiComputeProcessUserVa.c)
 *     MiMapExParametersInitialize @ 0x1406EFE38 (MiMapExParametersInitialize.c)
 *     MmExtendSection @ 0x140708C5C (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x1407096E0 (MmGetFileObjectForSection.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140755478 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140755764 (MiDriverLoadSucceeded.c)
 *     MiResolveImageImports @ 0x140756110 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x140756210 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140756D38 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140757814 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x140757CA4 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14076F1B0 (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x140786248 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x1407970E4 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x1407C9C94 (MiFreeRetpolineImportInfo.c)
 *     MmGetFileNameForSection @ 0x1408C699C (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C6D90 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x1408CA1D0 (MiLogSectionObjectEvent.c)
 *     MiApplyDriverHotPatch @ 0x1408CB5F4 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408CBA38 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408CD088 (MiIdentifyPatchImageWritablePages.c)
 *     MiLoadHotPatch @ 0x1408CD410 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408CF348 (MiOpenHotPatchFile.c)
 *     MiIsImageFullyRetpolined @ 0x1408D32F4 (MiIsImageFullyRetpolined.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D39F0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D61FC (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D83E8 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x1408DA768 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x1409C50A0 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A53988 (MiInitializeCfg.c)
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
