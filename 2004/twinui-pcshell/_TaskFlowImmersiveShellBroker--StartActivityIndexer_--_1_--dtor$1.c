/*
 * XREFs of _TaskFlowImmersiveShellBroker::StartActivityIndexer_::_1_::dtor$1 @ 0x180235D94
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::StartActivityIndexer_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
