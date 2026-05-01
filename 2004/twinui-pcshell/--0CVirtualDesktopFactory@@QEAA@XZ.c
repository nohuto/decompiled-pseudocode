/*
 * XREFs of ??0CVirtualDesktopFactory@@QEAA@XZ @ 0x180434920
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180434880 (--$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

CVirtualDesktopFactory *__fastcall CVirtualDesktopFactory::CVirtualDesktopFactory(CVirtualDesktopFactory *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopFactory>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualDesktopFactory::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
