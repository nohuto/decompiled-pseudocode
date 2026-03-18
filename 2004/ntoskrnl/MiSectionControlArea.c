/*
 * XREFs of MiSectionControlArea @ 0x140248900
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x1402BCE70 (MmMapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x14036FEA4 (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14053F05C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     MiReferenceAweHandle @ 0x14054877C (MiReferenceAweHandle.c)
 *     MiCreateSectionCommon @ 0x1405FAC40 (MiCreateSectionCommon.c)
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405FD590 (MiMapParametersInitialize.c)
 *     MiSectionOpen @ 0x1405FEC10 (MiSectionOpen.c)
 *     MiSectionClose @ 0x1405FEC40 (MiSectionClose.c)
 *     MiSectionDelete @ 0x1405FF160 (MiSectionDelete.c)
 *     MiCfgMarkValidEntries @ 0x140607044 (MiCfgMarkValidEntries.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140607F40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewInSystemSpace @ 0x14060B094 (MiMapViewInSystemSpace.c)
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x14060D700 (MmGetFileObjectForSection.c)
 *     MmCreateSpecialImageSection @ 0x140617E6C (MmCreateSpecialImageSection.c)
 *     PspInitializeFullProcessImageName @ 0x14065E1E0 (PspInitializeFullProcessImageName.c)
 *     MmGetSectionInformation @ 0x140661AB0 (MmGetSectionInformation.c)
 *     MmChangeImageProtection @ 0x1406A8A60 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiComputeProcessUserVa @ 0x1406B4A38 (MiComputeProcessUserVa.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     MiMapExParametersInitialize @ 0x1406B64B0 (MiMapExParametersInitialize.c)
 *     PsReferenceProcessFilePointer @ 0x1406B7770 (PsReferenceProcessFilePointer.c)
 *     PsQuerySectionSignatureInformation @ 0x1406EFC60 (PsQuerySectionSignatureInformation.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1407038B0 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCheckImageMapping @ 0x140704FC8 (MmCheckImageMapping.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140746898 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140746B84 (MiDriverLoadSucceeded.c)
 *     MiResolveImageImports @ 0x140747530 (MiResolveImageImports.c)
 *     MiMapSystemImage @ 0x140747630 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140748158 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x1407490C4 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x140760BA0 (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x140777C48 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x1407893D4 (MiWriteProtectSystemImages.c)
 *     MiFreeRetpolineImportInfo @ 0x1407BB404 (MiFreeRetpolineImportInfo.c)
 *     MmGetFileNameForSection @ 0x1408C0B5C (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C0F50 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x1408C4390 (MiLogSectionObjectEvent.c)
 *     MiApplyDriverHotPatch @ 0x1408C57B4 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIdentifyPatchImageWritablePages @ 0x1408C7248 (MiIdentifyPatchImageWritablePages.c)
 *     MiLoadHotPatch @ 0x1408C75D0 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408C9508 (MiOpenHotPatchFile.c)
 *     MiIsImageFullyRetpolined @ 0x1408CD4B4 (MiIsImageFullyRetpolined.c)
 *     MmSectionToSectionObjectPointers @ 0x1408CDBB0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D03BC (MiMapImageForEnclaveUse.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D25A8 (MiCreateUserPhysicalView.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x1408D4928 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x1409BF090 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A53308 (MiInitializeCfg.c)
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
