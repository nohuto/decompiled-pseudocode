/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x14036F444
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407470B8 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 96LL) != 0LL;
}
