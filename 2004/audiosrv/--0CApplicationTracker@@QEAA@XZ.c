/*
 * XREFs of ??0CApplicationTracker@@QEAA@XZ @ 0x180053544
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationTracker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800534CC (--$MakeAndInitialize@VCApplicationTracker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

CApplicationTracker *__fastcall CApplicationTracker::CApplicationTracker(CApplicationTracker *this)
{
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationTracker,IFastRundown>::`vftable'{for `IApplicationTracker'};
  *((_QWORD *)this + 1) = &CApplicationTracker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CApplicationTracker::`vftable'{for `IApplicationTracker'};
  *((_QWORD *)this + 1) = &CApplicationTracker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  return this;
}
