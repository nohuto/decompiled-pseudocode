/*
 * XREFs of ??1CSceneMesh@@MEAA@XZ @ 0x18023BB04
 * Callers:
 *     ??_ECSceneMesh@@MEAAPEAXI@Z @ 0x18023BC20 (--_ECSceneMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199EF0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneMesh::~CSceneMesh(CSceneMesh *this)
{
  struct ISceneNotificationListener *v1; // rdx
  __int64 v3; // rcx

  v1 = (CSceneMesh *)((char *)this + 152);
  *(_QWORD *)this = &CSceneMesh::`vftable'{for `CSceneMeshGeneratedT<CSceneMesh,CSceneObject>'};
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)v1 = &CSceneMesh::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(*(CSceneResourceManager **)(v3 + 288), v1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 20);
  CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::~CSceneMeshGeneratedT<CSceneMesh,CSceneObject>((struct CResource **)this);
}
