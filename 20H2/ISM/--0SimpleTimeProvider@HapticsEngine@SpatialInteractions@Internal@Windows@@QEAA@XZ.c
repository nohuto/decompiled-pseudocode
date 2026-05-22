/*
 * XREFs of ??0SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180169538
 * Callers:
 *     ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x180168408 (--$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIH.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B3CC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *__fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::SimpleTimeProvider(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::SpatialInteractions::IHapticsTimerProvider'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::System::Threading::ITimerElapsedHandler'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::`vftable'{for `Windows::Internal::SpatialInteractions::IHapticsTimerProvider'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::`vftable'{for `Windows::System::Threading::ITimerElapsedHandler'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  return this;
}
