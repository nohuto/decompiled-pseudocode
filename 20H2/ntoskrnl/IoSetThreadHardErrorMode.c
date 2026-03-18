/*
 * XREFs of IoSetThreadHardErrorMode @ 0x14023DB40
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14032A7D0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x14059C218 (SmKmEtwAppendObjectName.c)
 *     CmpDoFileSetSizeEx @ 0x1405DA63C (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveOpen @ 0x140631E44 (CmpCmdHiveOpen.c)
 *     ObKillProcess @ 0x140632108 (ObKillProcess.c)
 *     EtwTraceProcess @ 0x140632174 (EtwTraceProcess.c)
 *     CmpCmdHiveClose @ 0x1406A2FD8 (CmpCmdHiveClose.c)
 *     FsRtlSetFileSize @ 0x1406B407C (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14070AA70 (FsRtlGetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x14078D08C (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x14092DAA8 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x14092DCD4 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14092DE24 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14092E80C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092ECBC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14092EF6C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092F008 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14092F504 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14092F6A4 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14092F8CC (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x140941308 (EtwpPsProvCaptureState.c)
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
