/*
 * XREFs of _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$4 @ 0x1800DCB0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
