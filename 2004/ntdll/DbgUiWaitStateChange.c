/*
 * XREFs of DbgUiWaitStateChange @ 0x1800CCAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiWaitStateChange()
{
  return ZwWaitForDebugEvent();
}
