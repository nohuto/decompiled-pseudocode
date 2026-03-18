/*
 * XREFs of ??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x1800E2460
 * Callers:
 *     Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x1800F3F10 (Windows--Internal--Details--_dynamic_atexit_destructor_for___git__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Details::Git::~Git(Windows::Internal::Details::Git *this)
{
  __int64 v1; // rcx

  v1 = qword_180345680;
  if ( qword_180345680 )
  {
    qword_180345680 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
