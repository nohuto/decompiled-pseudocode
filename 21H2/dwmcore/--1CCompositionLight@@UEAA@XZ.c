/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x1801FFC78
 * Callers:
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x1801FFD80 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x18020B750 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x18020C530 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x18020DA50 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 *     ??1CCompositionSpotLight@@UEAA@XZ @ 0x18020F32C (--1CCompositionSpotLight@@UEAA@XZ.c)
 *     ??_GCCompositionEnvironmentLight@@UEAAPEAXI@Z @ 0x18025E6A0 (--_GCCompositionEnvironmentLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x180017150 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199EF0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(CCompositionLight *this)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // rcx

  v1 = 0LL;
  *(_QWORD *)this = &CCompositionLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  if ( *((_BYTE *)this + 252) )
    CSceneResourceManager::UnregisterSceneListener(
      *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
      (CCompositionLight *)((char *)this + 80));
  if ( *((_BYTE *)this + 171) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *(_DWORD *)(v3 + 1072);
    v5 = *(_QWORD *)(v3 + 1048);
    if ( v4 )
    {
      do
      {
        if ( this == *(CCompositionLight **)(v5 + 8 * v1) )
          break;
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < v4 );
    }
    if ( (unsigned int)v1 < v4 )
    {
      for ( ; (unsigned int)v1 < v4 - 1; v4 = *(_DWORD *)(v3 + 1072) )
      {
        v6 = (unsigned int)v1;
        LODWORD(v1) = v1 + 1;
        *(_QWORD *)(v5 + 8 * v6) = *(_QWORD *)(v5 + 8LL * (unsigned int)v1);
      }
      *(_DWORD *)(v3 + 1072) = v4 - 1;
    }
  }
  CCompositionLight::RemoveAllTargets((__int64)this, 0);
  CCompositionLight::RemoveAllTargets((__int64)this, 1u);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 22);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 16);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
