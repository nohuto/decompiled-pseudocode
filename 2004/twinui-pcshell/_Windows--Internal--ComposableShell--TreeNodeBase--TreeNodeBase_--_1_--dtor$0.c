/*
 * XREFs of _Windows::Internal::ComposableShell::TreeNodeBase::TreeNodeBase_::_1_::dtor$0 @ 0x18024C9D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::TreeNodeBase_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::ComposableShell::TreeNodeBase::ParentEdge,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::ComposableShell::TreeNodeBase::ParentEdge,wil::err_exception_policy>(*(_QWORD *)(a2 + 48) + 32LL);
}
