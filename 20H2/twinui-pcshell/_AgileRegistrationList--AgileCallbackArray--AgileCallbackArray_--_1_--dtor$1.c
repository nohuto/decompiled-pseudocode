/*
 * XREFs of _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$1 @ 0x180092BE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(*(_QWORD *)(a2 + 64) + 48LL);
}
