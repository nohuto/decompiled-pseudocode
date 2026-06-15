/*
 * XREFs of _AudioDeviceMgr::AddEndpointDevice_::_1_::dtor$0 @ 0x180076AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AddEndpointDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 32));
}
