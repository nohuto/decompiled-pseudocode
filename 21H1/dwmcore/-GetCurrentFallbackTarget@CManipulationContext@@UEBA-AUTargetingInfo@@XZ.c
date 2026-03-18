/*
 * XREFs of ?GetCurrentFallbackTarget@CManipulationContext@@UEBA?AUTargetingInfo@@XZ @ 0x180235140
 * Callers:
 *     <none>
 * Callees:
 *     ??0TargetingInfo@@QEAA@AEBU0@@Z @ 0x180234478 (--0TargetingInfo@@QEAA@AEBU0@@Z.c)
 */

TargetingInfo *__fastcall CManipulationContext::GetCurrentFallbackTarget(__int64 a1, TargetingInfo *a2)
{
  TargetingInfo::TargetingInfo(a2, (const struct TargetingInfo *)(a1 + 120));
  return a2;
}
