/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected_::_1_::dtor$1 @ 0x18004E610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
