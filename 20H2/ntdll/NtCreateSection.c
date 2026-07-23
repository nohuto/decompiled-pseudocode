/*
 * XREFs of NtCreateSection @ 0x18009D9F0
 * Callers:
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     LdrpMapResourceFile @ 0x18004BA58 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDF8 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapDllNtFileName @ 0x18005FBE4 (LdrpMapDllNtFileName.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800740CC (RtlpQueryExtendedHeapInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800745A0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AB90 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7680 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DDCD4 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E0940 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E44B4 (LdrpResMapFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD7F0 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801098C4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B478 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x180114CF8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114EF0 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801151EC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011566C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115D14 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011677C (PsspCaptureThreadInformation.c)
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
