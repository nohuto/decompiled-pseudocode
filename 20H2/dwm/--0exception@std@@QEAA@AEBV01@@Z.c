/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x14000A918
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x14000A844 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1400041D8 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((__int64)a2 + 8);
  return this;
}
