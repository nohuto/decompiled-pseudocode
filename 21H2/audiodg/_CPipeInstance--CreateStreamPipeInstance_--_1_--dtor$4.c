/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x14002CFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CAPOEndpointProcessNode>::~CAutoPtr<CAPOEndpointProcessNode>(a2 + 80);
}
