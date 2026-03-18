/*
 * XREFs of AlpcpLogSendMessage @ 0x1408BF4B0
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14060C1E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140649EA8 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1408BF1FC (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogSendMessage(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+34h] [rbp-24h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v6 = 0;
  v8 = 0;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  v5 = 1;
  v4 = v1;
  v7 = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x1Cu);
}
