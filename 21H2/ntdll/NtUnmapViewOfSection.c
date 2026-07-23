/*
 * XREFs of NtUnmapViewOfSection @ 0x18009DB40
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrMapAndVerifyResourceFile @ 0x180058928 (LdrMapAndVerifyResourceFile.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD5C (RtlpFcUpdateLocalConfiguration.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B810 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpUnmapModule @ 0x180071DE0 (LdrpUnmapModule.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750FC (RtlpQueryExtendedHeapInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800755D0 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007D230 (RtlGetLocaleFileMappingAddress.c)
 *     LdrFlushAlternateResourceModules @ 0x180089A50 (LdrFlushAlternateResourceModules.c)
 *     LdrResRelease @ 0x18008A500 (LdrResRelease.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B190 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D73F0 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800D76A0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D8700 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8D70 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D8FC0 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800DB690 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800DCB30 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD000 (RtlReportExceptionHelper.c)
 *     WerpCreateCrashDataSection @ 0x1800DDA44 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E06B0 (RtlComputeImportTableHash.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E1658 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3BA0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3CC0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F4870 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpGetCustomCultureData @ 0x1800FD180 (RtlpGetCustomCultureData.c)
 *     RtlHeapTrkInitialize @ 0x1800FDB00 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180109724 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B2D8 (RtlpHpTagQueryHeapsRemote.c)
 *     PssNtFreeWalkMarker @ 0x1801145A0 (PssNtFreeWalkMarker.c)
 *     PsspCaptureHandleTrace @ 0x180114B58 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114D50 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011504C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1801154CC (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115B74 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x1801165DC (PsspCaptureThreadInformation.c)
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
