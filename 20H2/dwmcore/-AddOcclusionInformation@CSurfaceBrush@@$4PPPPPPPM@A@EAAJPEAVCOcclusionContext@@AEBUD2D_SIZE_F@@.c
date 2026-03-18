/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800F0C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CSurfaceBrush::AddOcclusionInformation((CSurfaceBrush *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
