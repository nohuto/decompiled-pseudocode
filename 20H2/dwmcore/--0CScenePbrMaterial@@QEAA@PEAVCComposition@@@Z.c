/*
 * XREFs of ??0CScenePbrMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18016AD58
 * Callers:
 *     ??0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18016ACFC (--0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18016864C (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CScenePbrMaterial *__fastcall CScenePbrMaterial::CScenePbrMaterial(CScenePbrMaterial *this, struct CComposition *a2)
{
  struct ISceneNotificationListener *v2; // rbx
  __int64 v4; // rax
  CScenePbrMaterial *result; // rax

  *((_DWORD *)this + 2) = 0;
  v2 = (CScenePbrMaterial *)((char *)this + 56);
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 7) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 8) = v4;
  CSceneResourceManager::RegisterSceneListener(*(CSceneResourceManager **)(*((_QWORD *)this + 2) + 152LL), v2);
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = 1056964608;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 1065353216;
  *((_DWORD *)this + 27) = 1065353216;
  *(_QWORD *)this = &CScenePbrMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *(_QWORD *)v2 = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  result = this;
  *((_BYTE *)this + 100) = 0;
  return result;
}
