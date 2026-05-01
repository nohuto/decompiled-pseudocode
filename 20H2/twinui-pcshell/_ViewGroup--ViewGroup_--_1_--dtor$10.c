/*
 * XREFs of _ViewGroup::ViewGroup_::_1_::dtor$10 @ 0x180295A04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewGroup::ViewGroup_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 224LL));
}
