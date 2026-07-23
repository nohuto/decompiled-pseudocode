/*
 * XREFs of _DbgUiGetThreadDebugObject@0 @ 0x4B32DAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE DbgUiGetThreadDebugObject(void)
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
