/*
 * XREFs of _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___::Run_::_1_::dtor$0 @ 0x18009CFD3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_767713866e9597e09a630e18e26fc18b___::Run_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
