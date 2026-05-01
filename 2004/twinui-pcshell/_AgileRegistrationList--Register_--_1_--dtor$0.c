/*
 * XREFs of _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x18014F602
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AgileRegistrationList::Register_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::~Iterator(a2 + 32);
}
