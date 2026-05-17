/*
 * XREFs of NtCreateSection @ 0x18009DF80
 * Callers:
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapDllNtFileName @ 0x1800610D4 (LdrpMapDllNtFileName.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750FC (RtlpQueryExtendedHeapInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800755D0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B190 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7430 (RtlCreateQueryDebugBuffer.c)
 *     AvrfMiniLoadDll @ 0x1800DB6D0 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DDA84 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E06F0 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E4344 (LdrpResMapFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD690 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180109764 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B318 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x180114B98 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114D90 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011508C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011550C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115BB4 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011661C (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateSection()
{
  __int64 result; // rax

  result = 74LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
