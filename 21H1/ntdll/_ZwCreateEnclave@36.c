/*
 * XREFs of _ZwCreateEnclave@36 @ 0x4B2F3400
 * Callers:
 *     _LdrCreateEnclave@36 @ 0x4B32DC50 (_LdrCreateEnclave@36.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwCreateEnclave(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return Wow64SystemServiceCall();
}
