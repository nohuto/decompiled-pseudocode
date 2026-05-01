/*
 * XREFs of ??0task_canceled@Concurrency@@QEAA@AEBV01@@Z @ 0x180324BFC
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1801383E8 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

Concurrency::task_canceled *__fastcall Concurrency::task_canceled::task_canceled(
        Concurrency::task_canceled *this,
        const struct Concurrency::task_canceled *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &Concurrency::task_canceled::`vftable';
  return this;
}
