/*
 * XREFs of ??1?$StaticStorage@VServiceModule@Internal@Windows@@$00H@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800693FC
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Windows::Internal::ServiceModule_1_int_::instance___ @ 0x18007CC70 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Windows--Internal--Servic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::StaticStorage<Windows::Internal::ServiceModule,1,int>::~StaticStorage<Windows::Internal::ServiceModule,1,int>()
{
  __int64 result; // rax

  if ( byte_18019E510 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_18019E500)(&qword_18019E500, 0LL);
    byte_18019E510 = 0;
  }
  return result;
}
