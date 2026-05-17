/*
 * XREFs of _RtlAreAnyAccessesGranted@8 @ 0x4B346030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlAreAnyAccessesGranted(int a1, int a2)
{
  return (a1 & a2) != 0;
}
