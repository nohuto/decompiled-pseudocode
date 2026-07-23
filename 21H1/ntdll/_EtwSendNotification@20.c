/*
 * XREFs of _EtwSendNotification@20 @ 0x4B382440
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpReceiveReplyDataBlock@36 @ 0x4B382527 (_EtwpReceiveReplyDataBlock@36.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bl
  int v6; // edi
  NTSTATUS v7; // eax
  void *Reserved2; // ebx
  ULONG ReturnLength; // [esp+1Ch] [ebp-84h] BYREF
  _BYTE v11[124]; // [esp+20h] [ebp-80h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  v6 = 0;
  if ( ReplyRequested == 1 )
    DataBlock->Reserved2 = 0LL;
  v7 = ZwTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v7 )
    v6 = RtlNtStatusToDosError(v7);
  if ( ReplyRequested && !v6 )
  {
    Reserved2 = (void *)DataBlock->Reserved2;
    if ( DataBlock->ReplyCount )
    {
      if ( DataBlock->NotificationType == EtwNotificationTypeEnable )
        v6 = EtwpReceiveReplyDataBlock(
               DataBlock->NotificationType == EtwNotificationTypeEnable,
               DataBlock->ReplyCount,
               v11,
               __PAIR64__((unsigned int)ReplyReceived, 120),
               (int)ReplySizeNeeded,
               DataBlock->NotificationType);
      else
        v6 = EtwpReceiveReplyDataBlock(
               DataBlock->NotificationType == EtwNotificationTypeEnable,
               DataBlock->ReplyCount,
               ReceiveDataBlock,
               __PAIR64__((unsigned int)ReplyReceived, ReceiveDataBlockSize),
               (int)ReplySizeNeeded,
               DataBlock->NotificationType);
    }
    if ( Reserved2 )
      NtClose(Reserved2);
  }
  return v6;
}
