/*
 * XREFs of ??1CSceneMaterial@@MEAA@XZ @ 0x18023CFE0
 * Callers:
 *     ??1?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ @ 0x18019D9EC (--1-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ.c)
 *     ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x18023D060 (--_GCSceneMaterial@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180199214 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTexture@@.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199EF0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneMaterial::~CSceneMaterial(CSceneMaterial *this)
{
  struct ISceneNotificationListener *v1; // rdx
  __int64 v3; // rcx

  v1 = (CSceneMaterial *)((char *)this + 64);
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)v1 = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(*(CSceneResourceManager **)(v3 + 288), v1);
  std::_Tree_val<std::_Tree_simple_types<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 72,
    (__int64)this + 72,
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x30uLL);
  CResource::~CResource(this);
}
