/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x140371394
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 96LL) != 0LL;
}
