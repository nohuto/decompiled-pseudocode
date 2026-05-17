/*
 * XREFs of NtUnmapViewOfSection @ 0x18009DB80
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
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7430 (RtlCreateQueryDebugBuffer.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800D76E0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D8740 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8DB0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D9000 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800DB6D0 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD040 (RtlReportExceptionHelper.c)
 *     WerpCreateCrashDataSection @ 0x1800DDA84 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E06F0 (RtlComputeImportTableHash.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E1698 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3BE0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3D00 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F48B0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpGetCustomCultureData @ 0x1800FD1C0 (RtlpGetCustomCultureData.c)
 *     RtlHeapTrkInitialize @ 0x1800FDB40 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180109764 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B318 (RtlpHpTagQueryHeapsRemote.c)
 *     PssNtFreeWalkMarker @ 0x1801145E0 (PssNtFreeWalkMarker.c)
 *     PsspCaptureHandleTrace @ 0x180114B98 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114D90 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011508C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011550C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115BB4 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011661C (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

__int64 NtUnmapViewOfSection()
{
  __int64 result; // rax

  result = 42LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
