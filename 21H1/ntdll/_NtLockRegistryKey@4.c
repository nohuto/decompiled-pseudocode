/*
 * XREFs of _NtLockRegistryKey@4 @ 0x4B2F3A40
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtLockRegistryKey(int a1)
{
  return Wow64SystemServiceCall();
}
