/*
 * XREFs of EtwpSendSessionNotification @ 0x1406B87C8
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405DC884 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140612398 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     EtwpFlushBuffer @ 0x14063990C (EtwpFlushBuffer.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  _QWORD v10[12]; // [rsp+20h] [rbp-88h] BYREF

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset(v10, 0, sizeof(v10));
  v7 = *(_QWORD *)(a1 + 1080);
  v8 = *(_OWORD *)(a1 + 292);
  *(GUID *)&v10[5] = SessionNotificationGuid;
  *(_OWORD *)&v10[7] = v8;
  v10[0] = 0x6000000007LL;
  v10[10] = v3;
  v10[9] = __PAIR64__(a3, a2);
  return EtwpNotifyGuid(v7, v10, 0LL);
}
