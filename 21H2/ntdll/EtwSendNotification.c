/*
 * XREFs of EtwSendNotification @ 0x180051690
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x1800016FC (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtTraceControl @ 0x1800A0E90 (NtTraceControl.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bp
  ULONG Timeout; // esi
  NTSTATUS v11; // eax
  ULONG v12; // edi
  ULONG ReplyCount; // r9d
  void *Reserved2; // rbp
  ULONG v16; // r10d
  char *v17; // rax
  ULONG ReturnLength; // [rsp+50h] [rbp-D8h] BYREF
  char v19; // [rsp+58h] [rbp-D0h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  Timeout = DataBlock->Timeout;
  if ( ReplyRequested == 1 )
  {
    DataBlock->Reserved2 = 0LL;
    if ( !Timeout )
      Timeout = 60000;
  }
  v11 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v11 )
    v12 = RtlNtStatusToDosError(v11);
  else
    v12 = 0;
  if ( ReplyRequested && !v12 )
  {
    ReplyCount = DataBlock->ReplyCount;
    Reserved2 = (void *)DataBlock->Reserved2;
    if ( ReplyCount )
    {
      v16 = 120;
      v17 = &v19;
      if ( DataBlock->NotificationType != EtwNotificationTypeEnable )
      {
        v16 = ReceiveDataBlockSize;
        v17 = (char *)ReceiveDataBlock;
      }
      v12 = EtwpReceiveReplyDataBlock(
              (int)Reserved2,
              Timeout,
              DataBlock->NotificationType == EtwNotificationTypeEnable,
              ReplyCount,
              v17,
              v16,
              ReplyReceived,
              ReplySizeNeeded,
              DataBlock->NotificationType);
    }
    if ( Reserved2 )
      NtClose(Reserved2);
  }
  return v12;
}
