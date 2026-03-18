/*
 * XREFs of ?SetMetallicFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x1801758B8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801EE900 (-OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetMetallicFactor(
        float *a1,
        float a2)
{
  if ( a2 != a1[38] )
  {
    a1[38] = a2;
    CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
  }
  return 0LL;
}
