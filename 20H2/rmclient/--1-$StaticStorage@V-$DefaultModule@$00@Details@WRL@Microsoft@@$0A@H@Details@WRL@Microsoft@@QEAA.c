/*
 * XREFs of ??1?$StaticStorage@V?$DefaultModule@$00@Details@WRL@Microsoft@@$0A@H@Details@WRL@Microsoft@@QEAA@XZ @ 0x180001E10
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x18000BC50 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::~StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>()
{
  __int64 result; // rax

  if ( byte_180024780 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)(
               &Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
               0LL);
    byte_180024780 = 0;
  }
  return result;
}
