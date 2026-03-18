/*
 * XREFs of IoSetThreadHardErrorMode @ 0x14027C5F0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402D0FD4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140359ED0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x140598778 (SmKmEtwAppendObjectName.c)
 *     FsRtlGetFileSize @ 0x14060EA60 (FsRtlGetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     CmpCmdHiveOpen @ 0x14065E3B8 (CmpCmdHiveOpen.c)
 *     ObKillProcess @ 0x14065E678 (ObKillProcess.c)
 *     EtwTraceProcess @ 0x14065E6E4 (EtwTraceProcess.c)
 *     FsRtlSetFileSize @ 0x1406DBEFC (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x14077F77C (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x140927C80 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x140927EAC (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x140927FFC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409289E4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140928E94 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x140929144 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409291E0 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1409296DC (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14092987C (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x140929AA4 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x14093B4D8 (EtwpPsProvCaptureState.c)
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
