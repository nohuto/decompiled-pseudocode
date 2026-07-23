/*
 * XREFs of ZwReadFile @ 0x1403F23F0
 * Callers:
 *     CmpDoFileRead @ 0x14031861C (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C3CD4 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x14067BA6C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x14067C0A4 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140775B50 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14077ABB8 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407A93F0 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1407B2E2C (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x140910D70 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
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
