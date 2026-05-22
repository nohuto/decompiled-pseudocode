/*
 * XREFs of ?RuntimeClassInitialize@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJPEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Z @ 0x1800D241C
 * Callers:
 *     ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJPEAPEAVDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@$$QEAPEAUIHolographicDisplayWatcher@6Holographic@Graphics@7@$$QEAPEAV4567@$$QEA_N@Z @ 0x1800CCC94 (--$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *a3,
        char a4)
{
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v6; // rcx
  char *v7; // r8
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v13; // [rsp+30h] [rbp+8h] BYREF

  *((_BYTE *)this + 16) = a4;
  *((_QWORD *)this + 4) = a3;
  v6 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *)*((_QWORD *)this + 3);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *)*((_QWORD *)this + 3);
    }
    v13 = v6;
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v13);
    v6 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *)*((_QWORD *)this + 3);
  }
  v7 = (char *)this + 40;
  v8 = *(_QWORD *)v6;
  if ( *((_BYTE *)this + 16) )
  {
    v9 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *, char *))(v8 + 56))(
           v6,
           this,
           v7);
    if ( v9 < 0 )
    {
      v10 = 48LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *, char *))(v8 + 72))(
           v6,
           this,
           v7);
    if ( v9 < 0 )
    {
      v10 = 52LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
