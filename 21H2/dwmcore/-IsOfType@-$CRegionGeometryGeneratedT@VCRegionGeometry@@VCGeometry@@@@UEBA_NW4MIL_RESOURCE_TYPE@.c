/*
 * XREFs of ?IsOfType@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D8220
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D8274 (-IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 141 )
    return 1;
  v4 = CGeometry::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
