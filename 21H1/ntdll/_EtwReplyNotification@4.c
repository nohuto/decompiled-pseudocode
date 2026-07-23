/*
 * XREFs of _EtwReplyNotification@4 @ 0x4B382400
 * Callers:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

ULONG __cdecl EtwReplyNotification(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v1; // esi
  NTSTATUS v2; // eax
  ULONG result; // eax
  ULONG ReturnLength; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v2 = ZwTraceControl(EtwSendReplyDataBlock, Notification, Notification->NotificationSize, 0, 0, &ReturnLength);
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  result = v1;
  EtwpReplySend = 1;
  return result;
}
