/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x1406220C0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 */

void __fastcall EtwpDeleteRealTimeConnectionObject(__int64 a1)
{
  ZwClose(*(HANDLE *)(a1 + 16));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 48));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 56));
}
