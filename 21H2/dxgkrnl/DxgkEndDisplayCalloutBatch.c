/*
 * XREFs of DxgkEndDisplayCalloutBatch @ 0x1C01F3A78
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F3A94 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkEndDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::EndDisplayCalloutBatch(*(ADAPTER_DISPLAY **)(a1 + 2792));
}
