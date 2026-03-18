/*
 * XREFs of ?SetAlphaCutoff@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x180174798
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801EECA4 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetAlphaCutoff(float *a1, float a2)
{
  if ( a2 != a1[20] )
  {
    a1[20] = a2;
    CScenePbrMaterial::OnAlphaCutoffChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
