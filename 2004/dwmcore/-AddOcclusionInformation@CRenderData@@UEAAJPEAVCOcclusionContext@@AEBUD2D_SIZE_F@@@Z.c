/*
 * XREFs of ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180081250
 * Callers:
 *     ?AddOcclusionInformation@CRenderData@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800F0F70 (-AddOcclusionInformation@CRenderData@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
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
