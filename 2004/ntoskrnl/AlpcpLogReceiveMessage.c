/*
 * XREFs of AlpcpLogReceiveMessage @ 0x1408C0790
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140683B20 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x140684DE0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406DF770 (AlpcpReceiveDirectMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1408C054C (AlpcpInvokeLogCallbacks.c)
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
