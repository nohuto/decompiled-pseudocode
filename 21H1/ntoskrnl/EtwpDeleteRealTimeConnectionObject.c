/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x1406ED400
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 */

void __fastcall EtwpDeleteRealTimeConnectionObject(__int64 a1)
{
  ZwClose(*(HANDLE *)(a1 + 16));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 48));
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 56));
}
