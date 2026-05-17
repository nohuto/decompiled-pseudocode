/*
 * XREFs of _DbgQueryDebugFilterState@8 @ 0x4B33EEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DbgQueryDebugFilterState(int a1, int a2)
{
  return NtQueryDebugFilterState(a1, a2);
}
