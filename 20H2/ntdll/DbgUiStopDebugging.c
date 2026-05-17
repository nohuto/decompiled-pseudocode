/*
 * XREFs of DbgUiStopDebugging @ 0x1800CCC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
