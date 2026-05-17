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

int __fastcall EtwpSendSessionNotification(int a1, int a2, int a3)
{
  int v4; // [esp+10h] [ebp-70h]
  _DWORD v5[25]; // [esp+18h] [ebp-68h] BYREF

  HIWORD(v4) = 256;
  LOWORD(v4) = *(_WORD *)(a1 + 20);
  memset(&v5[2], 0, 16);
  v5[6] = -1;
  v5[7] = 0;
  v5[8] = 0;
  v5[1] = 96;
  v5[0] = 7;
  v5[10] = SessionNotificationGuid[0];
  v5[11] = SessionNotificationGuid[1];
  v5[12] = SessionNotificationGuid[2];
  v5[13] = SessionNotificationGuid[3];
  v5[14] = *(_DWORD *)(a1 + 48);
  v5[15] = *(_DWORD *)(a1 + 52);
  v5[16] = *(_DWORD *)(a1 + 56);
  v5[17] = *(_DWORD *)(a1 + 60);
  v5[20] = v4;
  v5[19] = a3;
  memset(&v5[21], 0, 12);
  v5[18] = a2;
  v5[9] = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock((int)v5);
}
