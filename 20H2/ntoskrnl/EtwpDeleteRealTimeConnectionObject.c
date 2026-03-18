/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x1406E3440
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 */

void __fastcall EtwpDeleteRealTimeConnectionObject(__int64 a1)
{
  ZwClose(*(HANDLE *)(a1 + 16));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 48));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 56));
}
