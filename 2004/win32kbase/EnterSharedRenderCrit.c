/*
 * XREFs of EnterSharedRenderCrit @ 0x1C005F750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID EnterSharedRenderCrit()
{
  PsEnterPriorityRegion();
  return ExEnterCriticalRegionAndAcquireResourceShared(gpresRender);
}
