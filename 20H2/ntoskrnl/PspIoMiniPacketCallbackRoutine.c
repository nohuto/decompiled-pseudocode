/*
 * XREFs of PspIoMiniPacketCallbackRoutine @ 0x1406BA7D0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __fastcall PspIoMiniPacketCallbackRoutine(__int64 a1, struct _DMA_ADAPTER *a2)
{
  *(_DWORD *)&a2->Version = 0;
  HalPutDmaAdapter(a2);
}
