/*
 * XREFs of _DbgUiGetThreadDebugObject@0 @ 0x4B32DAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall DbgUiGetThreadDebugObject()
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
