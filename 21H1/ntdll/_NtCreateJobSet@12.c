/*
 * XREFs of _NtCreateJobSet@12 @ 0x4B2F3460
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtCreateJobSet(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
