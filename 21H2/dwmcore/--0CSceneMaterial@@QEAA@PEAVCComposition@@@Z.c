/*
 * XREFs of ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18023CF50
 * Callers:
 *     ??0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18019D24C (--0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180030150 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199DFC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneMaterial *__fastcall CSceneMaterial::CSceneMaterial(CSceneMaterial *this, struct CComposition *a2)
{
  SIZE_T size_of; // rax
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 8) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 9) = v4;
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (CSceneMaterial *)((char *)this + 64));
  return this;
}
