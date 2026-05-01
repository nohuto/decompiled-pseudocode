/*
 * XREFs of ??0TabSetMediator@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18029AB40
 * Callers:
 *     ??$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18029A200 (--$MakeAndInitialize@VTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIUnknown@@$$V@Detai.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UITabSetMediator@Tabs@ComposableShell@Internal@Windows@@UIWindowSnappingEvents@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18029A7B4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_18029A7B4.c)
 */

RTL_SRWLOCK *__fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::TabSetMediator(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::ComposableShell::Tabs::ITabSetMediator,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::ComposableShell::Tabs::ITabSetMediator,IWindowSnappingEvents,Microsoft::WRL::FtmBase>((__int64)this);
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::ComposableShell::Tabs::ITabSetMediator,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  this[23].Ptr = 0LL;
  this[1].Ptr = &Windows::Internal::ComposableShell::Tabs::TabSetMediator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::ITabSetMediator,IWindowSnappingEvents,Microsoft::WRL::FtmBase>'};
  this[6].Ptr = &Windows::Internal::ComposableShell::Tabs::TabSetMediator::`vftable'{for `IImmersiveShellComponent'};
  this[7].Ptr = &Windows::Internal::ComposableShell::Tabs::TabSetMediator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  this[14].Ptr = &Windows::Internal::ComposableShell::Tabs::TabSetMediator::`vftable'{for `IWeakReferenceSource'};
  this[15].Ptr = &Windows::Internal::ComposableShell::Tabs::TabSetMediator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::ComposableShell::Tabs::ITabSetMediator,IWindowSnappingEvents,Microsoft::WRL::FtmBase>'};
  this[16].Ptr = &Windows::Internal::ComposableShell::Tabs::TabSetMediator::`vftable'{for `IWindowSnappingEvents'};
  this[17].Ptr = &Windows::Internal::ComposableShell::Tabs::TabSetMediator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[38].Ptr = 0LL;
  LODWORD(this[39].Ptr) = 0;
  this[40].Ptr = 0LL;
  InitializeSRWLock(this + 41);
  InitializeSRWLock(this + 42);
  this[43].Ptr = 0LL;
  result = this;
  this[44].Ptr = 0LL;
  return result;
}
