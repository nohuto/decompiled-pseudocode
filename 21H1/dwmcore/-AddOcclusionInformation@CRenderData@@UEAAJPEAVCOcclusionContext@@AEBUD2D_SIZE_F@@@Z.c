/*
 * XREFs of ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800A72F4
 * Callers:
 *     ?AddOcclusionInformation@CRenderData@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EDFE0 (-AddOcclusionInformation@CRenderData@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::AddOcclusionInformation(
        CRenderData *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CRenderData::Draw((char *)this - 296, a2, 2LL);
}
