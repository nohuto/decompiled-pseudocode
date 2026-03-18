/*
 * XREFs of ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z @ 0x1801ED068
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18016A44C (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneSurfaceMaterialInput *__fastcall CSceneSurfaceMaterialInput::CSceneSurfaceMaterialInput(
        CSceneSurfaceMaterialInput *this,
        struct CComposition *a2)
{
  struct ISceneNotificationListener *v3; // rdx
  __int64 v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  v3 = (CSceneSurfaceMaterialInput *)((char *)this + 56);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  v4 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CSceneSurfaceMaterialInput::`vftable'{for `CSceneMaterialInput'};
  *((_QWORD *)this + 7) = &CSceneSurfaceMaterialInput::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::RegisterSceneListener(*(CSceneResourceManager **)(v4 + 152), v3);
  return this;
}
