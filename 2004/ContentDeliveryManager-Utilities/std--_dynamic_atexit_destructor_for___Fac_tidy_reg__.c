/*
 * XREFs of std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x1800D8F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800CDB71 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

void std::_dynamic_atexit_destructor_for___Fac_tidy_reg__()
{
  __int64 v0; // rcx
  void (__fastcall ***v1)(_QWORD, __int64); // rax
  void *v2; // rbx

  while ( 1 )
  {
    v2 = qword_180198460;
    if ( !qword_180198460 )
      break;
    v0 = *((_QWORD *)qword_180198460 + 1);
    qword_180198460 = *(void **)qword_180198460;
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
    if ( v1 )
      (**v1)(v1, 1LL);
    operator delete(v2);
  }
}
