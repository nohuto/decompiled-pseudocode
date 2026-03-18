/*
 * XREFs of ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800A72D0
 * Callers:
 *     ?Draw@CRenderData@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EDFF0 (-Draw@CRenderData@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::Draw(
        CRenderData *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CRenderData::Draw((char *)this - 296, ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL), 0LL);
}
