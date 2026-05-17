/*
 * XREFs of _NtRecoverResourceManager@4 @ 0x4B2F4020
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtRecoverResourceManager(int a1)
{
  return Wow64SystemServiceCall();
}
