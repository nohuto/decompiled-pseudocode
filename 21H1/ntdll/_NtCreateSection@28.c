/*
 * XREFs of _NtCreateSection@28 @ 0x4B2F2E20
 * Callers:
 *     _LdrpMapResourceFile@24 @ 0x4B2B961A (_LdrpMapResourceFile@24.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlCreateQueryDebugBuffer@8 @ 0x4B336810 (_RtlCreateQueryDebugBuffer@8.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _WerpCreateCrashDataSection@8 @ 0x4B33AFD2 (_WerpCreateCrashDataSection@8.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 *     _RtlpHpStackTraceSerializeRemote@4 @ 0x4B36E83D (_RtlpHpStackTraceSerializeRemote@4.c)
 *     _RtlpHpTagQueryHeapsRemote@12 @ 0x4B370210 (_RtlpHpTagQueryHeapsRemote@12.c)
 *     _PsspCaptureHandleTrace@8 @ 0x4B387016 (_PsspCaptureHandleTrace@8.c)
 *     _PsspCaptureIptTrace@8 @ 0x4B38717C (_PsspCaptureIptTrace@8.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  return Wow64SystemServiceCall();
}
