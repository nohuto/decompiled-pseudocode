/*
 * XREFs of ?AddRef@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14003AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComAggObject<CAudioDeviceGraph>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 8), a2);
}
