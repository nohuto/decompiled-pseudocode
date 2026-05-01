/*
 * XREFs of ??0LightDismissElement@@QEAA@XZ @ 0x1803BC028
 * Callers:
 *     ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x1803BBF48 (--$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180394EA8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

LightDismissElement *__fastcall LightDismissElement::LightDismissElement(LightDismissElement *this)
{
  LightDismissElement *result; // rax

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *(_QWORD *)this = &CMultitaskingViewButtonElement::`vftable';
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement>::`vftable';
  *((_DWORD *)this + 57) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &LightDismissElement::`vftable';
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  return result;
}
