/*
 * XREFs of ??0VirtualTouchpadUriHandler@@QEAA@XZ @ 0x180328EF0
 * Callers:
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180328BE4 (--$MakeAndInitialize@VVirtualTouchpadUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CWRLExecuteCommandBase@@QEAA@XZ @ 0x180328E40 (--0CWRLExecuteCommandBase@@QEAA@XZ.c)
 */

VirtualTouchpadUriHandler *__fastcall VirtualTouchpadUriHandler::VirtualTouchpadUriHandler(
        VirtualTouchpadUriHandler *this)
{
  CWRLExecuteCommandBase::CWRLExecuteCommandBase(this);
  *((_DWORD *)this + 33) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &VirtualTouchpadUriHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualTouchpadUriHandler::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &VirtualTouchpadUriHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  return this;
}
