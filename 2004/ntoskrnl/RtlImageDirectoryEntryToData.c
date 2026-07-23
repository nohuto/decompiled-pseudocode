/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14027C310
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x14036FE60 (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1403952B8 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B2FC0 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403C9C3C (KiIsPgiKernel.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x14058A7A0 (RtlpGetRetpolineStubsFunctionTable.c)
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x14065E070 (RtlFindExportedRoutineByName.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406D5D00 (MiCaptureRetpolineRelocationTables.c)
 *     EtwpFindDebugId @ 0x1406FAE04 (EtwpFindDebugId.c)
 *     MiInitializeWowPeb @ 0x140704B84 (MiInitializeWowPeb.c)
 *     LdrpAccessResourceData @ 0x1407129CC (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140712AA8 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x140712CF4 (LdrpSearchResourceSection_U.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407470B8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140747448 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407474E0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x140747530 (MiResolveImageImports.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140747BCC (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x140748120 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x140760B04 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x1408BCF38 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1408CDBFC (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408D4210 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x14090D440 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x140915F74 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x140917B40 (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x140968748 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1409BF34C (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1409C5E1C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409D5A94 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D5E1C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409D5EAC (ViThunkApplyThunksCurrentSession.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     ViThunkFindExportAddress @ 0x140A477D4 (ViThunkFindExportAddress.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A48874 (MiDoesDriverProvideImportsForDriver.c)
 *     MiApplyDynamicRelocations @ 0x140A48C34 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140A5439C (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140A900FC (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14027C348 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  int v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (__int64)v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
