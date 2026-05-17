/*
 * XREFs of _LdrInitializeEnclave@20 @ 0x4B32DD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall LdrInitializeEnclave(int a1, int a2, int a3, int a4, int a5)
{
  return NtInitializeEnclave(a1, a2, a3, a4, a5);
}
