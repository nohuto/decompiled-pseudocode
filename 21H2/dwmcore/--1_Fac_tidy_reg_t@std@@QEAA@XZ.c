/*
 * XREFs of ??1_Fac_tidy_reg_t@std@@QEAA@XZ @ 0x1800E6A54
 * Callers:
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x1800F98D0 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  void *v1; // rbx
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rax

  while ( 1 )
  {
    v1 = qword_180347588;
    if ( !qword_180347588 )
      break;
    v2 = *((_QWORD *)qword_180347588 + 1);
    qword_180347588 = *(void **)qword_180347588;
    v3 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v3 )
      (**v3)(v3, 1LL);
    operator delete(v1);
  }
}
