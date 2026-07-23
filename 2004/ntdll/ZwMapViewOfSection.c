/*
 * XREFs of ZwMapViewOfSection @ 0x18009D310
 * Callers:
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     LdrpMinimalMapModule @ 0x180014C38 (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x18004BA08 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDA8 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpFcMapBuffers @ 0x18005C9B0 (RtlpFcMapBuffers.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180073FCC (RtlpQueryExtendedHeapInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800744A0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AA90 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpMapCleanModuleView @ 0x1800D516C (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800D72E0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85F0 (RtlpChangeQueryDebugBufferTarget.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DD934 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E05A0 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E4064 (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3840 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3960 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F4510 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD2E0 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x1800FD790 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800FE330 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801093B4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010AF68 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x1801147E8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x1801149E0 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011515C (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleInformation @ 0x180115804 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18011626C (PsspCaptureThreadInformation.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180116924 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180116A50 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180116BD0 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180116D58 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 * Callees:
 *     <none>
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
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
