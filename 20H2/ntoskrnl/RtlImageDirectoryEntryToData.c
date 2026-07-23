/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1402FD940
 * Callers:
 *     RtlCaptureImageExceptionValues @ 0x140371DB0 (RtlCaptureImageExceptionValues.c)
 *     RtlCaptureRetpolineImportRvas @ 0x140397778 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B5930 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     KiIsPgiKernel @ 0x1403CC87C (KiIsPgiKernel.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x14058E1D0 (RtlpGetRetpolineStubsFunctionTable.c)
 *     LdrpAccessResourceData @ 0x1406AA71C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1406AC040 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1406ACA94 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x1406ADBB0 (RtlFindExportedRoutineByName.c)
 *     EtwpFindDebugId @ 0x1406AFA1C (EtwpFindDebugId.c)
 *     MiInitializeWowPeb @ 0x1406B006C (MiInitializeWowPeb.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x14070F468 (MiCaptureRetpolineRelocationTables.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140756028 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407560C0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageImports @ 0x140756110 (MiResolveImageImports.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1407567AC (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x140756D00 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x14076F114 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x1408C2C98 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1408D3A3C (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408DA050 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x140912F80 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x14091BBA4 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x14091D770 (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x14096E518 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1409C535C (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1409CBE3C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409DBAB4 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409DBE3C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1409DBECC (ViThunkApplyThunksCurrentSession.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     ViThunkFindExportAddress @ 0x140A4DA70 (ViThunkFindExportAddress.c)
 *     MiDoesDriverProvideImportsForDriver @ 0x140A4EB04 (MiDoesDriverProvideImportsForDriver.c)
 *     MiApplyDynamicRelocations @ 0x140A4EEC4 (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140A54A1C (MiBuildImportsForBootDrivers.c)
 *     MiUpdateThunks @ 0x140A95DFC (MiUpdateThunks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1402FD978 (RtlpImageDirectoryEntryToDataEx.c)
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
