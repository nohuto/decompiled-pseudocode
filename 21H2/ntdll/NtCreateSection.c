/*
 * XREFs of NtCreateSection @ 0x18009DF40
 * Callers:
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapDllNtFileName @ 0x1800610D4 (LdrpMapDllNtFileName.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750FC (RtlpQueryExtendedHeapInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800755D0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B190 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D73F0 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x1800DB690 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DDA44 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E06B0 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E4304 (LdrpResMapFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD650 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180109724 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B2D8 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x180114B58 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114D50 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011504C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1801154CC (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115B74 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x1801165DC (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
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
  NTSTATUS result; // eax

  result = 74;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
