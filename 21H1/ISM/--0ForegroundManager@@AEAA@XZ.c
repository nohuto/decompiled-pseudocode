/*
 * XREFs of ??0ForegroundManager@@AEAA@XZ @ 0x18003362C
 * Callers:
 *     ??$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundManager@@@Z @ 0x180033574 (--$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ??0?$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAA@PEBD@Z @ 0x1800464D4 (--0-$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAA@PEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

ForegroundManager *__fastcall ForegroundManager::ForegroundManager(ForegroundManager *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IForegroundManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ForegroundManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  KernelInputConnection<_tagActivationObjectNotification>::KernelInputConnection<_tagActivationObjectNotification>((char *)this + 24);
  *((_QWORD *)this + 20) = 0LL;
  return this;
}
