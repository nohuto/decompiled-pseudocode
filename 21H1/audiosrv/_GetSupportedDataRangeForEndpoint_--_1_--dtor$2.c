/*
 * XREFs of _GetSupportedDataRangeForEndpoint_::_1_::dtor$2 @ 0x18011DF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetSupportedDataRangeForEndpoint_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 64));
}
