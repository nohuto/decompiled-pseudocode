/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140250300
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1402CBBB0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D99DC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmEtwAppendObjectName @ 0x14059DC48 (SmKmEtwAppendObjectName.c)
 *     EtwTraceProcess @ 0x14060330C (EtwTraceProcess.c)
 *     ObKillProcess @ 0x1406034EC (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     FsRtlSetFileSize @ 0x140689B90 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1406D4860 (FsRtlGetFileSize.c)
 *     CmpCmdHiveClose @ 0x14071CE14 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140724A00 (CmpDoFileSetSizeEx.c)
 *     EtwpKernelTraceRundown @ 0x14079743C (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x14092B278 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x14092B4A4 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B5F4 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14092BFDC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C48C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14092C73C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092C7D8 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CCD4 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CE74 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14092D09C (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x14093EAD8 (EtwpPsProvCaptureState.c)
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
