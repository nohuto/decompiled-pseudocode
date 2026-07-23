/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1402F4B10
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14024A300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14028AD2C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmEtwAppendObjectName @ 0x14059DE78 (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x1405E0548 (CmpCmdHiveClose.c)
 *     FsRtlSetFileSize @ 0x1405E9020 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1406ABB40 (FsRtlGetFileSize.c)
 *     EtwTraceProcess @ 0x1406F2A40 (EtwTraceProcess.c)
 *     ObKillProcess @ 0x1406F2C20 (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x1406F2CB8 (CmpCmdHiveOpen.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x14092B3D8 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x14092B604 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B754 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C5EC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14092C89C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092C938 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CE34 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14092D1FC (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x14093ECA8 (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
