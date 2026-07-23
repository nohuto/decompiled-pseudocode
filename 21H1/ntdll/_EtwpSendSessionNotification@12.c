/*
 * XREFs of _EtwpSendSessionNotification@12 @ 0x4B2F0314
 * Callers:
 *     _EtwpStopLoggerInstance@4 @ 0x4B2EDB7A (_EtwpStopLoggerInstance@4.c)
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 * Callees:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __fastcall EtwpSendSessionNotification(GUID *a1, int a2, int a3)
{
  int v4; // [esp+10h] [ebp-70h]
  _ETW_NOTIFICATION_HEADER Notification; // [esp+18h] [ebp-68h] BYREF
  int v6; // [esp+60h] [ebp-20h]
  int v7; // [esp+64h] [ebp-1Ch]
  int v8; // [esp+68h] [ebp-18h]
  int v9; // [esp+6Ch] [ebp-14h]
  int v10; // [esp+70h] [ebp-10h]
  int v11; // [esp+74h] [ebp-Ch]

  HIWORD(v4) = 256;
  LOWORD(v4) = a1[1].Data2;
  memset(&Notification.Offset, 0, 16);
  Notification.Reserved2 = 0xFFFFFFFFLL;
  Notification.TargetPID = 0;
  v10 = 0;
  v11 = 0;
  Notification.NotificationSize = 96;
  Notification.NotificationType = EtwNotificationTypeSession;
  Notification.DestinationGuid = *(GUID *)SessionNotificationGuid;
  Notification.SourceGuid = a1[3];
  v8 = v4;
  v7 = a3;
  v9 = 0;
  v6 = a2;
  Notification.SourcePID = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(&Notification);
}
