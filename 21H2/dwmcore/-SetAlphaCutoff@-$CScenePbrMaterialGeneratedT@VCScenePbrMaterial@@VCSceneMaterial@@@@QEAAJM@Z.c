/*
 * XREFs of ?SetAlphaCutoff@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x1801A20B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18023DA50 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetAlphaCutoff(float *a1, float a2)
{
  if ( a2 != a1[22] )
  {
    a1[22] = a2;
    CScenePbrMaterial::OnAlphaCutoffChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
