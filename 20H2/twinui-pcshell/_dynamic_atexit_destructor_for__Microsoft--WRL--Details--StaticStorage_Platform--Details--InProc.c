/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Platform::Details::InProcModule_0_int_::instance___ @ 0x1801062F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Platform::Details::InProcModule_0_int_::instance___()
{
  __int64 result; // rax

  if ( byte_1805CB5B0 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_)(
               &Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_,
               0LL);
    byte_1805CB5B0 = 0;
  }
  return result;
}
