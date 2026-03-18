/*
 * XREFs of ?VidMmSetMemoryBudgetTarget@@YAXPEAVVIDMM_GLOBAL@@KK@Z @ 0x1C0022160
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00B4894 (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 */

void __fastcall VidMmSetMemoryBudgetTarget(struct VIDMM_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetMemoryBudgetTarget(a1, a2, a3);
}
