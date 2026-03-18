/*
 * XREFs of GreGetPeakHandleCount @ 0x1C01494C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetPeakHandleCount()
{
  return *(unsigned int *)gpHandleManager;
}
