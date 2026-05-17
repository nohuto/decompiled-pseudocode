/*
 * XREFs of _NtUnloadKey@4 @ 0x4B2F45F0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtUnloadKey(int a1)
{
  return Wow64SystemServiceCall();
}
