/*
 * XREFs of _NtInitializeEnclave@20 @ 0x4B2F3960
 * Callers:
 *     _LdrInitializeEnclave@20 @ 0x4B32DD30 (_LdrInitializeEnclave@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtInitializeEnclave(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
