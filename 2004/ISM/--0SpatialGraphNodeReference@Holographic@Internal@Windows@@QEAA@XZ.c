/*
 * XREFs of ??0SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAA@XZ @ 0x180156C08
 * Callers:
 *     ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x18014F4A4 (--$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNode.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B39C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Holographic::SpatialGraphNodeReference *__fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::SpatialGraphNodeReference(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReference,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReference,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 124) = 0;
  return this;
}
