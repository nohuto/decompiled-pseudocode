/*
 * XREFs of ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x180156740
 * Callers:
 *     ??$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDriverClient@234@AEAPEAUHSTRING__@@USpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@$$QEAUSpatialGraphSettings@456@@Z @ 0x18014F30C (--$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDrive.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021D84 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A3E8 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VDynamicNodeSourceBase@567@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801563DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic.c)
 */

// Hidden C++ exception states: #wind=11
Windows::Internal::Holographic::SpatialGraphDriverClient *__fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  void *v2; // rdx
  wil::details *Event; // rsi
  __int64 v4; // r8
  const char *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable'{for `Windows::Internal::Holographic::ISpatialGraphDriverClient'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>'};
  *((_QWORD *)this + 4) = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable'{for `Windows::Internal::Holographic::ISpatialGraphDynamicNodeSource'};
  *((_QWORD *)this + 5) = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>'};
  *((_QWORD *)this + 14) = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Holographic::DynamicNodeSourceBase>,Microsoft::WRL::FtmBase>'};
  *((_DWORD *)this + 40) = 0;
  *((_WORD *)this + 82) = 0;
  *((_BYTE *)this + 166) = 0;
  *((_QWORD *)this + 21) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::FailFast_GetLastError(retaddr, v2, v4, v5);
    __debugbreak();
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 21,
    Event);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = &Windows::Internal::Holographic::PropertyCache::`vftable';
  *((_DWORD *)this + 58) = 1;
  *(_OWORD *)((char *)this + 236) = *((_OWORD *)this + 5);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 33) = v6;
  *(_OWORD *)((char *)this + 280) = *((_OWORD *)this + 5);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *((_QWORD *)this + 38) = v7;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *((_QWORD *)this + 43) = v8;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *((_QWORD *)this + 45) = v9;
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *((_QWORD *)this + 48) = v10;
  return this;
}
