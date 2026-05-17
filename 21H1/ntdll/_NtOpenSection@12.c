/*
 * XREFs of _NtOpenSection@12 @ 0x4B2F2CF0
 * Callers:
 *     _LdrpFindKnownDll@16 @ 0x4B2D0FCB (_LdrpFindKnownDll@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtOpenSection(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
