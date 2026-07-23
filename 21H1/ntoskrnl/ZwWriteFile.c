/*
 * XREFs of ZwWriteFile @ 0x1403F2430
 * Callers:
 *     CmpDoFileWrite @ 0x140663CFC (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x140676FF8 (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x14067BA6C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x14067C0A4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406E8AFC (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeSaveState @ 0x1406ED34C (EtwpRealtimeSaveState.c)
 *     RtlpGetSetBootStatusData @ 0x140775B50 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1407B2E2C (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x1408853A8 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x140885508 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x14088CA84 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14089451C (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140910F38 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1409285CC (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140944490 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x140944EBC (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x140945080 (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140953DA0 (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x14097E848 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x1409B3FA0 (KdpWriteFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A3D9AC (BapdpProcessVsmKeyBlobs.c)
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
