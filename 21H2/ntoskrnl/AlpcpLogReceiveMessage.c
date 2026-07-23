/*
 * XREFs of AlpcpLogReceiveMessage @ 0x1408C3EF0
 * Callers:
 *     AlpcpReceiveDirectMessagePort @ 0x1405F30D0 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406D6CC0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1408C3CAC (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogReceiveMessage(__int64 a1)
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
  v5 = 2;
  v4 = v1;
  v7 = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x20u);
}
