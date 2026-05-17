/*
 * XREFs of _LdrxCallInitRoutine@16 @ 0x4B2F2930
 * Callers:
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 * Callees:
 *     <none>
 */

int __stdcall LdrxCallInitRoutine(int (__stdcall *a1)(int, int, int), int a2, int a3, int a4)
{
  return a1(a2, a3, a4);
}
