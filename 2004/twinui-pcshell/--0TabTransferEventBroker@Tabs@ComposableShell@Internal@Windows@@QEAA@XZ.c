/*
 * XREFs of ??0TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x180289E1C
 * Callers:
 *     ??$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802899E8 (--$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::TabTransferEventBroker(
        RTL_SRWLOCK *this)
{
  this[3].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::`vftable'{for `Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker'};
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::`vftable'{for `Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker'};
  this[1].Ptr = &Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  this[4].Ptr = 0LL;
  InitializeSRWLock(this + 5);
  InitializeSRWLock(this + 6);
  this[7].Ptr = 0LL;
  InitializeSRWLock(this + 8);
  InitializeSRWLock(this + 9);
  this[10].Ptr = 0LL;
  InitializeSRWLock(this + 11);
  InitializeSRWLock(this + 12);
  this[13].Ptr = 0LL;
  InitializeSRWLock(this + 14);
  InitializeSRWLock(this + 15);
  this[16].Ptr = 0LL;
  InitializeSRWLock(this + 17);
  InitializeSRWLock(this + 18);
  this[19].Ptr = 0LL;
  InitializeSRWLock(this + 20);
  InitializeSRWLock(this + 21);
  return this;
}
