/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VDynamicNodeSourceBase@567@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801568CC
 * Callers:
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x180156C30 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B2F4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::Holographic::CreateGuidFailFast @ 0x18015ADD8 (Windows--Internal--Holographic--CreateGuidFailFast.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  _QWORD *v2; // rax
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a1 + 32) = &Windows::Internal::Holographic::DynamicNodeSourceBase::`vftable'{for `Windows::Internal::Holographic::ISpatialGraphDynamicNodeSource'};
  *(_QWORD *)(a1 + 40) = &Windows::Internal::Holographic::DynamicNodeSourceBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 64) = v2;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)Windows::Internal::Holographic::CreateGuidFailFast(v5);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 112));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Holographic::ISpatialGraphDriverClient'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Holographic::ISpatialGraphDynamicNodeSource'};
  *(_QWORD *)(a1 + 40) = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>'};
  *(_QWORD *)(a1 + 112) = &Windows::Internal::Holographic::SpatialGraphDriverClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::Holographic::DynamicNodeSourceBase>,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 152) = 1LL;
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
