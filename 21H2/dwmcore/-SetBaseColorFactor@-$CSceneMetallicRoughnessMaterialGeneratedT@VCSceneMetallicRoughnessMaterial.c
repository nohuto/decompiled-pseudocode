/*
 * XREFs of ?SetBaseColorFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJUD2D_VECTOR_4F@@@Z @ 0x1801A2274
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x18023D5EC (-OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetBaseColorFactor(
        CSceneMetallicRoughnessMaterial *a1,
        _OWORD *a2)
{
  *((_OWORD *)a1 + 9) = *a2;
  CSceneMetallicRoughnessMaterial::OnBaseColorFactorChanged(a1);
  return 0LL;
}
