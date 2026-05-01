/*
 * XREFs of ??1?$StaticStorage@V?$DefaultModule@$00@Details@WRL@Microsoft@@$0A@H@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C200
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x1800DFE30 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::~StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>()
{
  __int64 result; // rax

  if ( byte_18059FAD8 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)(
               &Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
               0LL);
    byte_18059FAD8 = 0;
  }
  return result;
}
