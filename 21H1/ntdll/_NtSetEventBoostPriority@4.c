/*
 * XREFs of _NtSetEventBoostPriority@4 @ 0x4B2F2C50
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetEventBoostPriority(int a1)
{
  return Wow64SystemServiceCall();
}
