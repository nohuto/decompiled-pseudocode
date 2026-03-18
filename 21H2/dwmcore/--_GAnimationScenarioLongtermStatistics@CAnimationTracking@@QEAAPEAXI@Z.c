/*
 * XREFs of ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801CACFC
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180074CF4 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x1801CAD28 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x1801CAF80 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(void **this)
{
  DefaultHeap::Free(this[2]);
  DefaultHeap::Free(this);
  return this;
}
