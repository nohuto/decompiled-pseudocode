/*
 * XREFs of ZwMapViewOfSection @ 0x18009DB40
 * Callers:
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpFcMapBuffers @ 0x18005DF30 (RtlpFcMapBuffers.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750FC (RtlpQueryExtendedHeapInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800755D0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B190 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpMapCleanModuleView @ 0x1800D52BC (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D7430 (RtlCreateQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D8740 (RtlpChangeQueryDebugBufferTarget.c)
 *     AvrfMiniLoadDll @ 0x1800DB6D0 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DDA84 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E06F0 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E4344 (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3BE0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3D00 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F48B0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD690 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x1800FDB40 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800FE6E0 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180109764 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B318 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x180114B98 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114D90 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011508C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011550C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115BB4 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011661C (PsspCaptureThreadInformation.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180116CD4 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180116E00 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180116F80 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180117108 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSection()
{
  __int64 result; // rax

  result = 40LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
