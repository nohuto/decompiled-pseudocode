/*
 * XREFs of ??0SpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800D595C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatialObjectDDIClientFactory@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x1800D4A18 (--$MakeAndInitialize@VSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UISpatia.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B39C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *__fastcall Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::SpatialObjectDDIClientFactoryHelper(
        Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  return this;
}
