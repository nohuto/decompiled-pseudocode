/*
 * XREFs of EtwReplyNotification @ 0x1800019A0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800452A0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0660 (NtTraceControl.c)
 */

ULONG __cdecl EtwReplyNotification(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = NtTraceControl(EtwSendReplyDataBlock, Notification, Notification->NotificationSize, 0LL, 0, &ReturnLength);
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  EtwpReplySend = 1;
  return v1;
}
