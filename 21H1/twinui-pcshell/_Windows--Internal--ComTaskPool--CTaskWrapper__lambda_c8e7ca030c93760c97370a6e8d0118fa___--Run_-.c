/*
 * XREFs of _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8e7ca030c93760c97370a6e8d0118fa___::Run_::_1_::dtor$0 @ 0x180175DF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8e7ca030c93760c97370a6e8d0118fa___::Run_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
