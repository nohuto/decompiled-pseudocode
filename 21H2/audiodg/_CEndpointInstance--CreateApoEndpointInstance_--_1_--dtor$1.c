/*
 * XREFs of _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$1 @ 0x14004A6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 96));
}
