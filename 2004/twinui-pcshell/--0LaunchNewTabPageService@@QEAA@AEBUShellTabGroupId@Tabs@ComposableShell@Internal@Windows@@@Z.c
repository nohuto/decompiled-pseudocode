/*
 * XREFs of ??0LaunchNewTabPageService@@QEAA@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802698E4
 * Callers:
 *     ?GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILauncherOptions2@System@5@@Z @ 0x180270104 (-GetLauncherOptions@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUILaunc.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

LaunchNewTabPageService *__fastcall LaunchNewTabPageService::LaunchNewTabPageService(
        LaunchNewTabPageService *this,
        const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a2)
{
  _QWORD *v2; // rdi
  LaunchNewTabPageService *result; // rax

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((LaunchNewTabPageService *)((char *)this + 16));
  *((_DWORD *)this + 13) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::`vftable'{for `IUpdateViewValueSet'};
  *v2 = &LaunchNewTabPageService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &LaunchNewTabPageService::`vftable';
  *((_QWORD *)this + 1) = &LaunchNewTabPageService::`vftable'{for `IUpdateViewValueSet'};
  *v2 = &LaunchNewTabPageService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)a2;
  return result;
}
