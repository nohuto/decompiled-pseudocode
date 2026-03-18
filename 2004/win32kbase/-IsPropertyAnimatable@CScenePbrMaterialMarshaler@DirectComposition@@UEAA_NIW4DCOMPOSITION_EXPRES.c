/*
 * XREFs of ?IsPropertyAnimatable@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01D8858
 * Callers:
 *     ?IsPropertyAnimatable@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C01D8820 (-IsPropertyAnimatable@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NIW4DCOMP.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CScenePbrMaterialMarshaler::IsPropertyAnimatable(__int64 a1, int a2, int a3)
{
  if ( !a2 )
    return a3 == 18;
  if ( a2 != 3 )
  {
    if ( a2 != 6 && a2 != 8 )
      return 0;
    return a3 == 18;
  }
  return a3 == 52;
}
