/*
 * XREFs of ?IsOfType@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D82D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D8300 (-IsOfType@-$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 151 )
    return 1;
  v2 = CTransformGeneratedT<CTransform,CTransform3D>::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
