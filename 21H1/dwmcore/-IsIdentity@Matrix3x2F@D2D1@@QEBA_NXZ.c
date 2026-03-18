/*
 * XREFs of ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800103C8
 * Callers:
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18000DB78 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x18000EE8C (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180010030 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x18006F7E0 (-GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18026B720 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x18026C0EC (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x18026C1B8 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x18026C22C (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z @ 0x18026C7A0 (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2D1::Matrix3x2F::IsIdentity(D2D1::Matrix3x2F *this)
{
  return *(float *)this == 1.0
      && *((float *)this + 1) == 0.0
      && *((float *)this + 2) == 0.0
      && *((float *)this + 3) == 1.0
      && *((float *)this + 4) == 0.0
      && *((float *)this + 5) == 0.0;
}
