/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x180001978
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x1800452B2 (_o___std_exception_copy.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy((char *)a2 + 8);
  return this;
}
