/*
 * XREFs of _ViewGroup::ViewGroup_::_1_::dtor$8 @ 0x18027463E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewGroup::ViewGroup_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 200LL));
}
