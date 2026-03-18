/*
 * XREFs of ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000A230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18000A2B0 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180075DA0 (-IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEB.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800B6D30 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

bool __fastcall CDropShadow::IsDrawListCacheDirty(
        CDropShadow *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  struct CVisual *CurrentVisual; // rax
  unsigned __int64 v10; // rdx

  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a3 + 24));
  v10 = *((_QWORD *)CDropShadow::GetEffectiveShadowIntermediates(this, CurrentVisual) + 7);
  return !v10 || v10 > *((_QWORD *)a2 + 3) || CBrush::IsDrawListCacheDirty(this, a2, a3, a4, a5);
}
