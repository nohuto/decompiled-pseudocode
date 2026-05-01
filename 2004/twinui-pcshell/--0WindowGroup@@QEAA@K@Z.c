/*
 * XREFs of ??0WindowGroup@@QEAA@K@Z @ 0x180299520
 * Callers:
 *     ??$MakeOrThrow@VWindowGroup@@AEAK@wil@@YA?AV?$ComPtr@VWindowGroup@@@WRL@Microsoft@@AEAK@Z @ 0x18029946C (--$MakeOrThrow@VWindowGroup@@AEAK@wil@@YA-AV-$ComPtr@VWindowGroup@@@WRL@Microsoft@@AEAK@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

WindowGroup *__fastcall WindowGroup::WindowGroup(WindowGroup *this, int a2)
{
  _QWORD *v2; // rdi
  WindowGroup *result; // rax

  v2 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((WindowGroup *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroup,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroup,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowGroup,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &WindowGroup::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroup,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = &WindowGroup::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &WindowGroup::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWindowGroup,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &WindowGroup::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IWindowGroup,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &WindowGroup::`vftable';
  result = this;
  *((_DWORD *)this + 22) = a2;
  return result;
}
