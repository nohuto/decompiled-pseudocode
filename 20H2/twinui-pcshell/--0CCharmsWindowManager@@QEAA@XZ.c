/*
 * XREFs of ??0CCharmsWindowManager@@QEAA@XZ @ 0x1801657EC
 * Callers:
 *     ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x18016572C (--$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveAppli.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

CCharmsWindowManager *__fastcall CCharmsWindowManager::CCharmsWindowManager(CCharmsWindowManager *this)
{
  CCharmsWindowManager *result; // rax

  *(_QWORD *)this = &CWRLObjectWithSite::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal>::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal>::`vftable'{for `IImmersiveCharmsWindowManager'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICharmWindowManagerInternal>'};
  *((_DWORD *)this + 11) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CCharmsWindowManager::`vftable';
  *((_QWORD *)this + 3) = &CCharmsWindowManager::`vftable'{for `IImmersiveCharmsWindowManager'};
  *((_QWORD *)this + 4) = &CCharmsWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICharmWindowManagerInternal>'};
  *((_QWORD *)this + 6) = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  return result;
}
