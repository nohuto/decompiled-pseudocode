/*
 * XREFs of _NtAlpcAcceptConnectPort@36 @ 0x4B2F30F0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtAlpcAcceptConnectPort(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return Wow64SystemServiceCall();
}
