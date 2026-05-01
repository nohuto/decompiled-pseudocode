/*
 * XREFs of ??0InputEaterElement@@QEAA@XZ @ 0x1803BC4AC
 * Callers:
 *     ??$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVInputEaterElement@@AEAPEAUIInputEaterElementNotifications@@@Z @ 0x1803BC3D8 (--$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180394EA8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

InputEaterElement *__fastcall InputEaterElement::InputEaterElement(InputEaterElement *this)
{
  InputEaterElement *result; // rax

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *((_DWORD *)this + 53) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &InputEaterElement::`vftable';
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  return result;
}
