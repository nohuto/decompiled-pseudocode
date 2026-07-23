/*
 * XREFs of ZwReadFile @ 0x1403F8230
 * Callers:
 *     CmpDoFileRead @ 0x140326840 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403C7634 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x140715E4C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140716484 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140786560 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140790FA8 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407BA490 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1407C473C (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x140917C30 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140A4633C (EmInitSystem.c)
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
