/*
 * XREFs of _ZwMapViewOfSection@40 @ 0x4B2F2C00
 * Callers:
 *     _LdrpMapResourceFile@24 @ 0x4B2B961A (_LdrpMapResourceFile@24.c)
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _RtlpFcMapBuffers@8 @ 0x4B2E4F70 (_RtlpFcMapBuffers@8.c)
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _LdrpMapCleanModuleView@4 @ 0x4B334528 (_LdrpMapCleanModuleView@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlCreateQueryDebugBuffer@8 @ 0x4B336810 (_RtlCreateQueryDebugBuffer@8.c)
 *     _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2 (_RtlpChangeQueryDebugBufferTarget@16.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _WerpCreateCrashDataSection@8 @ 0x4B33AFD2 (_WerpCreateCrashDataSection@8.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 *     _RtlpExtendedHeapInformationWorkerCallback@8 @ 0x4B357C60 (_RtlpExtendedHeapInformationWorkerCallback@8.c)
 *     _RtlpExtendedHeapInformationWorkerThread@4 @ 0x4B357D30 (_RtlpExtendedHeapInformationWorkerThread@4.c)
 *     _RtlpHpRemoteStackSerializeWriter@12 @ 0x4B358870 (_RtlpHpRemoteStackSerializeWriter@12.c)
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 *     _RtlpHeapTrkLeakCallback@24 @ 0x4B364B50 (_RtlpHeapTrkLeakCallback@24.c)
 *     _RtlpHpStackTraceSerializeRemote@4 @ 0x4B36E83D (_RtlpHpStackTraceSerializeRemote@4.c)
 *     _RtlpHpTagQueryHeapsRemote@12 @ 0x4B370210 (_RtlpHpTagQueryHeapsRemote@12.c)
 *     _PsspCaptureHandleTrace@8 @ 0x4B387016 (_PsspCaptureHandleTrace@8.c)
 *     _PsspCaptureIptTrace@8 @ 0x4B38717C (_PsspCaptureIptTrace@8.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 *     _PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES@12 @ 0x4B388B4A (_PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES@12.c)
 *     _PsspWalkInfoClass_PSS_WALK_HANDLES@12 @ 0x4B388C1F (_PsspWalkInfoClass_PSS_WALK_HANDLES@12.c)
 *     _PsspWalkInfoClass_PSS_WALK_THREADS@12 @ 0x4B388D3F (_PsspWalkInfoClass_PSS_WALK_THREADS@12.c)
 *     _PsspWalkInfoClass_PSS_WALK_VA_SPACE@12 @ 0x4B388E5F (_PsspWalkInfoClass_PSS_WALK_VA_SPACE@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  return Wow64SystemServiceCall();
}
