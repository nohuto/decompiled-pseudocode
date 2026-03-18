/*
 * XREFs of ?CheckTransformAllowsOcclusion@COcclusionContext@@AEBAJAEBVCMILMatrix@@PEA_N@Z @ 0x180045B14
 * Callers:
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x180045A20 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall COcclusionContext::CheckTransformAllowsOcclusion(
        COcclusionContext *this,
        const struct CMILMatrix *a2,
        bool *a3)
{
  *a3 = CMILMatrix::Is2DAxisAlignedPreserving(a2);
  return 0LL;
}
