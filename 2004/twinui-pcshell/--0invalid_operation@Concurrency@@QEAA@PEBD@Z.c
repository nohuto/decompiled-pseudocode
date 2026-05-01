/*
 * XREFs of ??0invalid_operation@Concurrency@@QEAA@PEBD@Z @ 0x180324B84
 * Callers:
 *     ?_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ @ 0x180327DE0 (-_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ.c)
 *     ?_Wait@_Task_impl_base@details@Concurrency@@QEAA?AW4task_group_status@3@XZ @ 0x180328890 (-_Wait@_Task_impl_base@details@Concurrency@@QEAA-AW4task_group_status@3@XZ.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18008DDA2 (_o___std_exception_copy_0.c)
 */

Concurrency::invalid_operation *__fastcall Concurrency::invalid_operation::invalid_operation(
        Concurrency::invalid_operation *this,
        const char *a2)
{
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 1;
  v4 = a2;
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((__int64)&v4);
  *(_QWORD *)this = &Concurrency::invalid_operation::`vftable';
  return this;
}
