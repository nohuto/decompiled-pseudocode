/*
 * XREFs of ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1DC0
 * Callers:
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1BE0 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1D30 (-IsOfType@-$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1D60 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1D90 (-IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170C10 (-IsOfType@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOU.c)
 *     ?IsOfType@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170C70 (-IsOfType@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170DB0 (-IsOfType@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180170DE0 (-IsOfType@-$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1DEC (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 186 )
    return 1;
  v4 = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
