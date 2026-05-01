/*
 * XREFs of _TabAppPolicySettings::GetPropertySetFromActivatedEventArgs_::_1_::dtor$1 @ 0x180283728
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabAppPolicySettings::GetPropertySetFromActivatedEventArgs_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
