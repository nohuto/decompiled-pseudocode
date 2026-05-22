/*
 * XREFs of ??0HotkeyContextualProcessor@@QEAA@XZ @ 0x1801374E0
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x180136DC4 (--$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

HotkeyContextualProcessor *__fastcall HotkeyContextualProcessor::HotkeyContextualProcessor(
        HotkeyContextualProcessor *this)
{
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor,ITextInputStateAdapterOwner>::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor,ITextInputStateAdapterOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITextInputStateAdapterOwner>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &HotkeyContextualProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &HotkeyContextualProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITextInputStateAdapterOwner>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
