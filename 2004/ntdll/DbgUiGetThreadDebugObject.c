/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x1800CC970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE DbgUiGetThreadDebugObject(void)
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
