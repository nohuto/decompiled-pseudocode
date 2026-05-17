/*
 * XREFs of _NtStartProfile@4 @ 0x4B2F4500
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtStartProfile(int a1)
{
  return Wow64SystemServiceCall();
}
