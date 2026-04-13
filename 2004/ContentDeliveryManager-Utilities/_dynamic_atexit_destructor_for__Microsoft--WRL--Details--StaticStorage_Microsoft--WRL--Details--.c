/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x1800D8D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___()
{
  __int64 result; // rax

  if ( byte_180199428 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)(
               &Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
               0LL);
    byte_180199428 = 0;
  }
  return result;
}
