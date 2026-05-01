/*
 * XREFs of ??0TabAppPolicySettings@@QEAA@XZ @ 0x180269988
 * Callers:
 *     ??$MakeAndInitialize@VTabAppPolicySettings@@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredTabAppPolicySettings@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIServiceProvider@@@Z @ 0x18026490C (--$MakeAndInitialize@VTabAppPolicySettings@@UIBrokeredTabAppPolicySettings@Tabs@ComposableShell@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

TabAppPolicySettings *__fastcall TabAppPolicySettings::TabAppPolicySettings(TabAppPolicySettings *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((TabAppPolicySettings *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Tabs::IBrokeredTabAppPolicySettings,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &TabAppPolicySettings::`vftable';
  *((_QWORD *)this + 1) = &TabAppPolicySettings::`vftable'{for `IWeakReferenceSource'};
  *v2 = &TabAppPolicySettings::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
