/*
 * XREFs of NtConnectPort @ 0x14062E980
 * Callers:
 *     <none>
 * Callees:
 *     NtSecureConnectPort @ 0x14062E280 (NtSecureConnectPort.c)
 */

__int64 __fastcall NtConnectPort(
        HANDLE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        volatile void *a7,
        unsigned int *a8)
{
  return NtSecureConnectPort(a1, a2, a3, a4, 0LL, a5, a6, a7, a8);
}
