/*
 * XREFs of ??0UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18023B5C4
 * Callers:
 *     ??$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x18023B13C (--$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@A.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::UserPresenceListener(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IImmersiveSessionIdleNotification'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::`vftable'{for `IImmersiveSessionIdleNotification'};
  *v1 = &Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
