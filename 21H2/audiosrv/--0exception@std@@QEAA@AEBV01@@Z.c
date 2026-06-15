/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800B47F8
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x18006AA72 (_o___std_exception_copy.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &off_180149EB8;
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy();
  return this;
}
