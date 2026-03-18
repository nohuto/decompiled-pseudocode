/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140203230
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14023E1A4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14031C300 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x140598088 (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     ObKillProcess @ 0x1405D8378 (ObKillProcess.c)
 *     EtwTraceProcess @ 0x1405D83E4 (EtwTraceProcess.c)
 *     FsRtlGetFileSize @ 0x140643C90 (FsRtlGetFileSize.c)
 *     CmpCmdHiveClose @ 0x14065B1C8 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x14068560C (CmpDoFileSetSizeEx.c)
 *     FsRtlSetFileSize @ 0x1406BABEC (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x140780158 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1409269D0 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x140926BFC (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x140926D4C (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x140927734 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140927BE4 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x140927E94 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140927F30 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14092842C (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1409285CC (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1409287F4 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x14093A238 (EtwpPsProvCaptureState.c)
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
