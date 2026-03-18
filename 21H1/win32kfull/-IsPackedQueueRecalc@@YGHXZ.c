/*
 * XREFs of ?IsPackedQueueRecalc@@YGHXZ @ 0xC7DAA
 * Callers:
 *     ?GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ @ 0xC7CB4 (-GetRecalcHeadPtiListEntry@@YGPAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z @ 0xC7D7A (-GetRecalcPtiFromListEntry@@YGPAUtagTHREADINFO@@PAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IsPackedQueueRecalc()
{
  return !IsListEmpty(&gListAffectedThreadsForQueueRecalc);
}
