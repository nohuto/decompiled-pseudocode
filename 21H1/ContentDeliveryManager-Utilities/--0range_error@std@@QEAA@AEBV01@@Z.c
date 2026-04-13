/*
 * XREFs of ??0range_error@std@@QEAA@AEBV01@@Z @ 0x180027A18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::range_error *__fastcall std::range_error::range_error(std::range_error *this, const struct std::range_error *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
