/*
 * XREFs of ??0TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x1802682F0
 * Callers:
 *     ??$MakeAndInitialize@VTabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabViewProvidedEventArgs@2345@AEAUShellTabId@2345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAUITabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@AEAUShellTabId@4567@AEAH@Z @ 0x180267DF4 (--$MakeAndInitialize@VTabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabViewP.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039524 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *__fastcall Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::TabViewProvidedEventArgs(
        Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_OWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 20) = 0;
  return this;
}
