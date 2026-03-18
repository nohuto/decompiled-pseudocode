/*
 * XREFs of ?SetOcclusionStrength@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x1801714AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801EA8A4 (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetOcclusionStrength(
        float *a1,
        float a2)
{
  if ( a2 != a1[27] )
  {
    a1[27] = a2;
    CScenePbrMaterial::OnOcclusionStrengthChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
