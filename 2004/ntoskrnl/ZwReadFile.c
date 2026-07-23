/*
 * XREFs of ZwReadFile @ 0x1403F3680
 * Callers:
 *     CmpDoFileRead @ 0x14035613C (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C4B94 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140777F60 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1407835B8 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407AC550 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1407B5F9C (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x1409120F0 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
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
