/*
 * XREFs of ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180157D40
 * Callers:
 *     ??_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x180158CC0 (--_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@SpatialInteractions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18007A748 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@S.c)
 *     ?reset@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ @ 0x1800DD564 (-reset@-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180156280 (--0-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18015705C (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015AFA0 (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x180164444 (-StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEB.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180164DB4 (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180165DA4 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NOD.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::~SpatialGraphNodeReference(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  GUID *v4; // rdi
  __int64 v5; // rcx
  volatile int *v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  std::_Ref_count_base *v8; // rcx
  _QWORD v9[40]; // [rsp+20h] [rbp-168h] BYREF

  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReference,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (__int64 *)((char *)this + 72);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    v4 = (GUID *)(v3 + 12);
  else
    v4 = &GUID_00000000_0000_0000_0000_000000000000;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v9,
    (__int64)"DestroySpatialGraphNodeReference");
  v9[0] = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::StartActivity(
    (HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *)v9,
    v4,
    (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 88));
  v5 = *v2;
  if ( *v2 )
  {
    if ( *((_BYTE *)this + 124) )
    {
      *((_BYTE *)this + 124) = 0;
      Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
        v5,
        (char *)this + 88,
        *((unsigned int *)this + 30));
    }
    std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset(v2);
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
  v9[0] = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v6);
}
