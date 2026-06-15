/*
 * XREFs of _PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor$0 @ 0x1801102FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 64));
}
