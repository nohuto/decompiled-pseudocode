/*
 * XREFs of EnterSharedRenderCrit @ 0x1C0051C40
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
