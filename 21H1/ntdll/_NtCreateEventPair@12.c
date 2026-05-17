/*
 * XREFs of _NtCreateEventPair@12 @ 0x4B2F3420
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtCreateEventPair(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
