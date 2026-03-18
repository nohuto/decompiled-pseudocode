/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAKXZ @ 0x18010AA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<ILegacyRemotingSwapChain>::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IDeviceResource>::AddRef(a1 - *(int *)(a1 - 4) - 200);
}
