/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00518D0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00511BC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = (unsigned __int64)off_1C006A048;
  UserData->Size = *(unsigned __int16 *)off_1C006A048;
  UserData[1].Ptr = (unsigned __int64)(a2 + 11);
  UserData->Reserved = 2;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EtwWriteTransfer(qword_1C006A060, &EventDescriptor, 0LL, 0LL, UserDataCount, UserData);
}
