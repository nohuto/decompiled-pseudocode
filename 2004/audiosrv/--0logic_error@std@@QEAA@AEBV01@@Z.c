/*
 * XREFs of ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x180119608
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18006B582 (_o___std_exception_copy_0.c)
 */

std::logic_error *__fastcall std::logic_error::logic_error(std::logic_error *this, const struct std::logic_error *a2)
{
  *(_QWORD *)this = &std::logic_error::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &std::logic_error::`vftable';
  return this;
}
