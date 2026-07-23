/*
 * XREFs of NtUnmapViewOfSection @ 0x18009D350
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrMapAndVerifyResourceFile @ 0x18004B8F4 (LdrMapAndVerifyResourceFile.c)
 *     LdrpMapResourceFile @ 0x18004BA08 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDA8 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C7DC (RtlpFcUpdateLocalConfiguration.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006A6D0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpUnmapModule @ 0x180070CB0 (LdrpUnmapModule.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180073FCC (RtlpQueryExtendedHeapInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800744A0 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007C790 (RtlGetLocaleFileMappingAddress.c)
 *     LdrFlushAlternateResourceModules @ 0x180089350 (LdrFlushAlternateResourceModules.c)
 *     LdrResRelease @ 0x180089E00 (LdrResRelease.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AA90 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D72E0 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800D7590 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85F0 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8C60 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D8EB0 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800DCA20 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCEF0 (RtlReportExceptionHelper.c)
 *     WerpCreateCrashDataSection @ 0x1800DD934 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E05A0 (RtlComputeImportTableHash.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E1540 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3840 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3960 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F4510 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpGetCustomCultureData @ 0x1800FCE10 (RtlpGetCustomCultureData.c)
 *     RtlHeapTrkInitialize @ 0x1800FD790 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801093B4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010AF68 (RtlpHpTagQueryHeapsRemote.c)
 *     PssNtFreeWalkMarker @ 0x180114230 (PssNtFreeWalkMarker.c)
 *     PsspCaptureHandleTrace @ 0x1801147E8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x1801149E0 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011515C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115804 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011626C (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  NTSTATUS result; // eax

  result = 42;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
