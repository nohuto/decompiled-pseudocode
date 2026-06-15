/*
 * XREFs of _CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor$23 @ 0x14002C310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 152);
}
