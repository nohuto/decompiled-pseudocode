/*
 * XREFs of ??0invalid_operation@Concurrency@@QEAA@AEBV01@@Z @ 0x180302FBC
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x180113D98 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

Concurrency::invalid_operation *__fastcall Concurrency::invalid_operation::invalid_operation(
        Concurrency::invalid_operation *this,
        const struct Concurrency::invalid_operation *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &Concurrency::invalid_operation::`vftable';
  return this;
}
