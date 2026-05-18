/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x18000BF70
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x18011DFC3 (_o___std_exception_copy.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy((char *)a2 + 8);
  return this;
}
