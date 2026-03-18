/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x14036E814
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 96LL) != 0LL;
}
