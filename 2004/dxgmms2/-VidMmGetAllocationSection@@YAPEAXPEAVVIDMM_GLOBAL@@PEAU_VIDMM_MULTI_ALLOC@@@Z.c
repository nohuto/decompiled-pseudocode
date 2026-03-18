/*
 * XREFs of ?VidMmGetAllocationSection@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0014EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllocationSection@VIDMM_GLOBAL@@QEAAPEAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C008AA10 (-GetAllocationSection@VIDMM_GLOBAL@@QEAAPEAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

void *__fastcall VidMmGetAllocationSection(struct VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::GetAllocationSection(a1, a2);
}
