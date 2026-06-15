/*
 * XREFs of ??0fail_fast@gsl@@QEAA@AEBU01@@Z @ 0x1801188E4
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18006AC22 (_o___std_exception_copy_0.c)
 */

gsl::fail_fast *__fastcall gsl::fail_fast::fail_fast(gsl::fail_fast *this, const struct gsl::fail_fast *a2)
{
  *(_QWORD *)this = &std::logic_error::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &gsl::fail_fast::`vftable';
  return this;
}
