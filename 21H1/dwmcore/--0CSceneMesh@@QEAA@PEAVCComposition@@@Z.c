/*
 * XREFs of ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z @ 0x1801EC594
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18016CFAC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneMesh *__fastcall CSceneMesh::CSceneMesh(CSceneMesh *this, struct CComposition *a2)
{
  struct ISceneNotificationListener *v3; // rdx
  __int64 v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  v3 = (CSceneMesh *)((char *)this + 144);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 19) = 0LL;
  v4 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CSceneMesh::`vftable'{for `CSceneMeshGeneratedT<CSceneMesh,CSceneObject>'};
  *((_QWORD *)this + 18) = &CSceneMesh::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::RegisterSceneListener(*(CSceneResourceManager **)(v4 + 152), v3);
  return this;
}
