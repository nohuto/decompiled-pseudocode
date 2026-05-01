/*
 * XREFs of _lambda_d5a2e35645378a0caf28c8561966fc73_::__lambda_d5a2e35645378a0caf28c8561966fc73_ @ 0x1802DCFAC
 * Callers:
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$5 @ 0x180104728 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$5.c)
 * Callees:
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CCE5C (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_d5a2e35645378a0caf28c8561966fc73_::__lambda_d5a2e35645378a0caf28c8561966fc73_(__int64 a1)
{
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)(a1 + 16));
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
