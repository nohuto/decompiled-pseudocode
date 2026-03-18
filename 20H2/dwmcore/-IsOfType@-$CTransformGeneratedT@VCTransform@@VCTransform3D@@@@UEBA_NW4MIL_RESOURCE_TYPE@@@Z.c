/*
 * XREFs of ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0E60
 * Callers:
 *     ?IsOfType@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001F9C0 (-IsOfType@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE.c)
 *     ?IsOfType@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0CE0 (-IsOfType@-$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@UEBA_NW4MIL_RESOU.c)
 *     ?IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0D40 (-IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0D70 (-IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0E30 (-IsOfType@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE.c)
 *     ?IsOfType@?$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016EE60 (-IsOfType@-$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TY.c)
 *     ?IsOfType@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016EF80 (-IsOfType@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@.c)
 * Callees:
 *     ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0EF0 (-IsOfType@-$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransformGeneratedT<CTransform,CTransform3D>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 185 )
    return 1;
  v2 = CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
