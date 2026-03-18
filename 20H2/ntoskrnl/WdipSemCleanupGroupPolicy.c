/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x1407A9974
 * Callers:
 *     WdipSemCleanStart @ 0x1407A9908 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x1407A9A9C (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
