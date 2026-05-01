/*
 * XREFs of ??0CPPIAllUpViewService@@QEAA@XZ @ 0x1803814D0
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x18038139C (--$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@W.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180075824 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$CloakedIid@UIConfigureWindow.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CPPIAllUpViewService *__fastcall CPPIAllUpViewService::CPPIAllUpViewService(CPPIAllUpViewService *this)
{
  _QWORD *v2; // rdi

  *(_QWORD *)this = &CWRLObjectWithSite::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  v2 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>((__int64)this + 24);
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable';
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable'{for `IPPIAllUpViewService'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPPIAllUpViewInvoker>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPPIAllUpViewService::`vftable';
  *v2 = &CPPIAllUpViewService::`vftable'{for `IPPIAllUpViewService'};
  *((_QWORD *)this + 4) = &CPPIAllUpViewService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPPIAllUpViewInvoker>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
