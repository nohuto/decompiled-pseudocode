/*
 * XREFs of ??1CSceneMesh@@MEAA@XZ @ 0x1801EC694
 * Callers:
 *     ??_ECSceneMesh@@MEAAPEAXI@Z @ 0x1801EC790 (--_ECSceneMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18016D148 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneMesh::~CSceneMesh(CSceneMesh *this)
{
  struct ISceneNotificationListener *v1; // rdx
  __int64 v3; // rcx

  v1 = (CSceneMesh *)((char *)this + 144);
  *(_QWORD *)this = &CSceneMesh::`vftable'{for `CSceneMeshGeneratedT<CSceneMesh,CSceneObject>'};
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)v1 = &CSceneMesh::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(*(CSceneResourceManager **)(v3 + 152), v1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 19);
  CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::~CSceneMeshGeneratedT<CSceneMesh,CSceneObject>((struct CResource **)this);
}
