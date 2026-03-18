/*
 * XREFs of WdipSemCleanupGroupPolicy @ 0x140784C6C
 * Callers:
 *     WdipSemCleanStart @ 0x140784C00 (WdipSemCleanStart.c)
 *     WdipSemLoadGroupPolicy @ 0x140784D94 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void WdipSemCleanupGroupPolicy()
{
  if ( WdipSemDisabledScenarioTable )
  {
    ExFreePoolWithTag(WdipSemDisabledScenarioTable, 0);
    WdipSemDisabledScenarioTable = 0LL;
  }
}
