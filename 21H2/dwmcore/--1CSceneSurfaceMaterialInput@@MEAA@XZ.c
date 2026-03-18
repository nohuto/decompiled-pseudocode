/*
 * XREFs of ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x18023E6E8
 * Callers:
 *     ??_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z @ 0x18023E750 (--_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199EF0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneSurfaceMaterialInput::~CSceneSurfaceMaterialInput(CSceneSurfaceMaterialInput *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 10);
  *(_QWORD *)this = &CSceneSurfaceMaterialInput::`vftable'{for `CSceneMaterialInput'};
  *((_QWORD *)this + 8) = &CSceneSurfaceMaterialInput::`vftable'{for `ISceneNotificationListener'};
  CResource::UnRegisterNotifierInternal(this, v1);
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (CSceneSurfaceMaterialInput *)((char *)this + 64));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  CResource::~CResource(this);
}
