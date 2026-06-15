/*
 * XREFs of ??1?$StaticStorage@VServiceModule@Internal@Windows@@$00H@Details@WRL@Microsoft@@QEAA@XZ @ 0x180069D5C
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Windows::Internal::ServiceModule_1_int_::instance___ @ 0x18007D730 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Windows--Internal--Servic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::StaticStorage<Windows::Internal::ServiceModule,1,int>::~StaticStorage<Windows::Internal::ServiceModule,1,int>()
{
  __int64 result; // rax

  if ( byte_18019F550 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_18019F540)(&qword_18019F540, 0LL);
    byte_18019F550 = 0;
  }
  return result;
}
