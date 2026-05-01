/*
 * XREFs of _ViewGroup::ViewGroup_::_1_::dtor$9 @ 0x1802962E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewGroup::ViewGroup_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 208LL));
}
