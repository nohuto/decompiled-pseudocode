/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14033AA90
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x14036F230 (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x1403946E8 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403AD340 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403C8E2C (KiIsPgiKernel.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x14058A0B0 (RtlpGetRetpolineStubsFunctionTable.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     EtwpFindDebugId @ 0x1406D74C4 (EtwpFindDebugId.c)
 *     MiInitializeWowPeb @ 0x1406E2204 (MiInitializeWowPeb.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406EE0FC (MiCaptureRetpolineRelocationTables.c)
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1406F9574 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x1406FA690 (RtlFindExportedRoutineByName.c)
 *     LdrpAccessResourceData @ 0x1406FC428 (LdrpAccessResourceData.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407458C8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140745960 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x1407459B0 (MiResolveImageImports.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14074604C (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x1407465A0 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x14075E734 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x1408BBC18 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1408CC8AC (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408D2EC0 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x14090C0A0 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x140914D04 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x1409168D0 (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x1409673A8 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1409BF33C (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1409C5E0C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409D5A34 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409D5DBC (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409D5E4C (ViThunkApplyThunksCurrentSession.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     ViThunkFindExportAddress @ 0x140A41F78 (ViThunkFindExportAddress.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A43014 (MiDoesDriverProvideImportsForDriver.c)
 *     MiApplyDynamicRelocations @ 0x140A433D4 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140A4E69C (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140A90B0C (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14033AAC8 (RtlpImageDirectoryEntryToDataEx.c)
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
