/*
 * XREFs of ZwWriteFile @ 0x1403F8270
 * Callers:
 *     CmpDoFileWrite @ 0x14064F21C (CmpDoFileWrite.c)
 *     EtwpRealtimeSaveState @ 0x1406E338C (EtwpRealtimeSaveState.c)
 *     EtwpFlushBufferToLogfile @ 0x140711E30 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x140715214 (EtwpRealtimeSaveBuffer.c)
 *     EtwpFinalizeHeader @ 0x140715E4C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140716484 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140786560 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1407C473C (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14088C218 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14088C378 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1408938F4 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14089B4EC (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140917DF8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14092F6A4 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x14094B4C0 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x14094BEEC (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x14094C0B0 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x14095B230 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x1409859B8 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x1409B9FA0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A49500 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
