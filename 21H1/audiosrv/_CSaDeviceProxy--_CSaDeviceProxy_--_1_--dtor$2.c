/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$2 @ 0x18007C3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CResourcePriorityTracker>::~CAutoPtr<CResourcePriorityTracker>(*(_QWORD *)(a2 + 96) + 56LL);
}
