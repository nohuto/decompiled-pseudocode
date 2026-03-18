/*
 * XREFs of GreGetPeakHandleCount @ 0x1C0143170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetPeakHandleCount()
{
  return *(unsigned int *)gpHandleManager;
}
