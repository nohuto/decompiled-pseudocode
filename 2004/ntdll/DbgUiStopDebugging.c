/*
 * XREFs of DbgUiStopDebugging @ 0x1800CCA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
