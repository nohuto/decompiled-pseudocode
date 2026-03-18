/*
 * XREFs of ?SetAlphaMode@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJW4Enum@SceneAlphaMode@@@Z @ 0x180171C2C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnAlphaModeChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801EC390 (-OnAlphaModeChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetAlphaMode(
        CScenePbrMaterial *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 21) )
  {
    *((_DWORD *)a1 + 21) = a2;
    CScenePbrMaterial::OnAlphaModeChanged(a1);
  }
  return 0LL;
}
