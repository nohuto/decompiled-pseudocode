/*
 * XREFs of ??1NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAA@XZ @ 0x180169AFC
 * Callers:
 *     ??_ENodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAAPEAXI@Z @ 0x18016A3D0 (--_ENodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::~NodePropertyChangedHandler(
        Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  volatile int *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_BYTE *)this + 104) == 0;
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      177LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      a4);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v6);
}
