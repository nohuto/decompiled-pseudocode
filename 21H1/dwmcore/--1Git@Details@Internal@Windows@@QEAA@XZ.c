/*
 * XREFs of ??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x1800E0FC0
 * Callers:
 *     Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x1800F0F80 (Windows--Internal--Details--_dynamic_atexit_destructor_for___git__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Details::Git::~Git(Windows::Internal::Details::Git *this)
{
  __int64 v1; // rcx

  v1 = qword_180349680;
  if ( qword_180349680 )
  {
    qword_180349680 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
