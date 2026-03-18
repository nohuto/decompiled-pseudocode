/*
 * XREFs of AlpcpLogConnectSuccess @ 0x1408BF3D8
 * Callers:
 *     NtSecureConnectPort @ 0x140645D70 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1406468E8 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1408BF1FC (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogConnectSuccess(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+34h] [rbp-24h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v5 = 0;
  v7 = 0;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v6 = a1;
  v4 = 7;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x1Cu);
}
