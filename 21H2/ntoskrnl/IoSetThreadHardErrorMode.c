/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1402A0800
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140387570 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1405FB648 (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x14067C24C (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     FsRtlSetFileSize @ 0x1406A443C (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     CmpCmdHiveOpen @ 0x14070AAD0 (CmpCmdHiveOpen.c)
 *     EtwTraceProcess @ 0x14070AC28 (EtwTraceProcess.c)
 *     ObKillProcess @ 0x14070BCA4 (ObKillProcess.c)
 *     EtwpKernelTraceRundown @ 0x140814360 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1409D57BC (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1409D59E8 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5B38 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D64F8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D69A8 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1409D6C58 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D6CF4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D71F0 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1409D75C0 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1409EB374 (EtwpPsProvCaptureState.c)
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
