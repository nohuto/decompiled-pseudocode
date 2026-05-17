/*
 * XREFs of _DbgSetDebugFilterState@12 @ 0x4B33EEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DbgSetDebugFilterState(int a1, int a2, int a3)
{
  return NtSetDebugFilterState(a1, a2, a3);
}
