/*
 * XREFs of ??1?$StaticStorage@VSvcHostModule@Internal@Windows@@$00H@Details@WRL@Microsoft@@QEAA@XZ @ 0x180069D98
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Windows::Internal::SvcHostModule_1_int_::instance___ @ 0x18007D740 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Windows--Internal--SvcHos.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::StaticStorage<Windows::Internal::SvcHostModule,1,int>::~StaticStorage<Windows::Internal::SvcHostModule,1,int>()
{
  __int64 result; // rax

  if ( byte_18019F510 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_18019F4F8)(&qword_18019F4F8, 0LL);
    byte_18019F510 = 0;
  }
  return result;
}
