/*
 * XREFs of ?SetMetallicRoughnessInput@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x1801758E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnMetallicRoughnessInputChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801EE974 (-OnMetallicRoughnessInputChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetMetallicRoughnessInput(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[21] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xED9u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
      this[21] = a2;
      CSceneMetallicRoughnessMaterial::OnMetallicRoughnessInputChanged((CSceneMetallicRoughnessMaterial *)this);
    }
  }
  return v2;
}
