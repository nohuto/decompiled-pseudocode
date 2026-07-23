/*
 * XREFs of ZwWriteFile @ 0x1403F36C0
 * Callers:
 *     CmpDoFileWrite @ 0x14061E5DC (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1406C62DC (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406CBD94 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406CBE3C (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x140777F60 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1407B5F9C (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x1408866C8 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140886828 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x14088DDA4 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14089583C (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409122B8 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14092987C (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140945700 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x14094612C (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1409462F0 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140955470 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x14097FBE8 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x1409B3FA0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A43260 (BapdpProcessVsmKeyBlobs.c)
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
