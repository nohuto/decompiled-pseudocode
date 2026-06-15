/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800026D4
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18003FF82 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((char *)a2 + 8);
  return this;
}
