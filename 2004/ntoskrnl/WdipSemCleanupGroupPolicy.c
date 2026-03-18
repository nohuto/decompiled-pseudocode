/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x14079A644
 * Callers:
 *     WdipSemCleanStart @ 0x14079A5D8 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x14079A76C (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
