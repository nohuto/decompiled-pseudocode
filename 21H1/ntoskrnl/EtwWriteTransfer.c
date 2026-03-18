/*
 * XREFs of EtwWriteTransfer @ 0x140256C30
 * Callers:
 *     FlushEventEntryList @ 0x140749228 (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 */

NTSTATUS __stdcall EtwWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwWriteEx(RegHandle, EventDescriptor, 0LL, 0, ActivityId, RelatedActivityId, UserDataCount, UserData);
}
