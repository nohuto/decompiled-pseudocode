/*
 * XREFs of EtwpSendSessionNotification @ 0x180055E54
 * Callers:
 *     EtwpLogger @ 0x180054FE0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x1800551E4 (EtwpFlushActiveBuffers.c)
 *     EtwpStartUmLogger @ 0x180055AC8 (EtwpStartUmLogger.c)
 *     EtwpStopLoggerInstance @ 0x180058570 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x1800452A0 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  unsigned __int16 v3; // ax
  GUID v4; // xmm1
  unsigned int v6; // [rsp+20h] [rbp-29h]
  _ETW_NOTIFICATION_HEADER Notification; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+78h] [rbp+2Fh]
  int v9; // [rsp+7Ch] [rbp+33h]
  __int64 v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  v3 = *(_WORD *)(a1 + 20);
  v4 = *(GUID *)(a1 + 56);
  LODWORD(Notification.Reserved2) = -1;
  v6 = v3;
  *(_OWORD *)&Notification.Offset = 0LL;
  *(ULONGLONG *)((char *)&Notification.Reserved2 + 4) = 0LL;
  v11 = 0LL;
  Notification.NotificationSize = 96;
  Notification.NotificationType = EtwNotificationTypeSession;
  Notification.DestinationGuid = SessionNotificationGuid;
  v8 = a2;
  Notification.SourceGuid = v4;
  v9 = a3;
  HIBYTE(v6) = 1;
  v10 = v6;
  Notification.SourcePID = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(&Notification);
}
