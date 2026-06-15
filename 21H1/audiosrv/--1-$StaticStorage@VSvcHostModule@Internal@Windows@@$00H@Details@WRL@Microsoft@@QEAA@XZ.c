/*
 * XREFs of ??1?$StaticStorage@VSvcHostModule@Internal@Windows@@$00H@Details@WRL@Microsoft@@QEAA@XZ @ 0x180069C98
 * Callers:
 *     _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Windows::Internal::SvcHostModule_1_int_::instance___ @ 0x18007D640 (_dynamic_atexit_destructor_for__Microsoft--WRL--Details--StaticStorage_Windows--Internal--SvcHos.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::StaticStorage<Windows::Internal::SvcHostModule,1,int>::~StaticStorage<Windows::Internal::SvcHostModule,1,int>()
{
  __int64 result; // rax

  if ( byte_18019F520 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_18019F508)(&qword_18019F508, 0LL);
    byte_18019F520 = 0;
  }
  return result;
}
