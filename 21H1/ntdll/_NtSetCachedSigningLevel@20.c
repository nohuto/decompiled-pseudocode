/*
 * XREFs of _NtSetCachedSigningLevel@20 @ 0x4B2F4210
 * Callers:
 *     _LdrpSetModuleSigningLevel@20 @ 0x4B333D52 (_LdrpSetModuleSigningLevel@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetCachedSigningLevel(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
