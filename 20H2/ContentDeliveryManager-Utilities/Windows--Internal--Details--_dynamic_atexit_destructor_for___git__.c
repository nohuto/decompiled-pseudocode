/*
 * XREFs of Windows::Internal::Details::_dynamic_atexit_destructor_for___git__ @ 0x1800D8750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::Details::_dynamic_atexit_destructor_for___git__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = qword_180199360;
  if ( qword_180199360 )
  {
    qword_180199360 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
