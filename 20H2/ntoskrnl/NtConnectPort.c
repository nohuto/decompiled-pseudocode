/*
 * XREFs of NtConnectPort @ 0x1406BF970
 * Callers:
 *     <none>
 * Callees:
 *     NtSecureConnectPort @ 0x1406BF9C0 (NtSecureConnectPort.c)
 */

__int64 __fastcall NtConnectPort(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  return NtSecureConnectPort(a1, a2, a3, a4, 0LL, a5, a6, a7, a8);
}
