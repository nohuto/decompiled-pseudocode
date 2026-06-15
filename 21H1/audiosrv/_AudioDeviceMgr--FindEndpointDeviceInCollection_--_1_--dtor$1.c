/*
 * XREFs of _AudioDeviceMgr::FindEndpointDeviceInCollection_::_1_::dtor$1 @ 0x18013E384
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::FindEndpointDeviceInCollection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 32));
}
