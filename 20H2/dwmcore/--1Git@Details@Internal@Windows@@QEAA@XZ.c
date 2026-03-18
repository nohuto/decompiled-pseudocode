/*
 * XREFs of ??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x1800E2770
 * Callers:
 *     Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x1800F3B60 (Windows--Internal--Details--_dynamic_atexit_destructor_for___git__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Details::Git::~Git(Windows::Internal::Details::Git *this)
{
  __int64 v1; // rcx

  v1 = qword_180344678;
  if ( qword_180344678 )
  {
    qword_180344678 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
