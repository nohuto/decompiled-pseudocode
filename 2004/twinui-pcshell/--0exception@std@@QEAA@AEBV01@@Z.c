/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1801383E8
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1801382C0 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x180146DBC (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1801AE280 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1802C8860 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??0invalid_operation@Concurrency@@QEAA@AEBV01@@Z @ 0x180324B5C (--0invalid_operation@Concurrency@@QEAA@AEBV01@@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x180324BD4 (--0runtime_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0task_canceled@Concurrency@@QEAA@AEBV01@@Z @ 0x180324BFC (--0task_canceled@Concurrency@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18008DDA2 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((__int64)a2 + 8);
  return this;
}
