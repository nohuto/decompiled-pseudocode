/*
 * XREFs of ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1801EB294
 * Callers:
 *     ??_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z @ 0x1801EB310 (--_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801687E8 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneSurfaceMaterialInput::~CSceneSurfaceMaterialInput(CSceneSurfaceMaterialInput *this)
{
  struct CResource *v1; // rdx
  __int64 v3; // rcx

  v1 = (struct CResource *)*((_QWORD *)this + 9);
  *(_QWORD *)this = &CSceneSurfaceMaterialInput::`vftable'{for `CSceneMaterialInput'};
  *((_QWORD *)this + 7) = &CSceneSurfaceMaterialInput::`vftable'{for `ISceneNotificationListener'};
  CResource::UnRegisterNotifierInternal(this, v1);
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 152LL),
    (CSceneSurfaceMaterialInput *)((char *)this + 56));
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CResource::~CResource(this);
}
