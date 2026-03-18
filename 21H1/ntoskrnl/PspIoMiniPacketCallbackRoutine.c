/*
 * XREFs of PspIoMiniPacketCallbackRoutine @ 0x1406C3460
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __fastcall PspIoMiniPacketCallbackRoutine(__int64 a1, struct _DMA_ADAPTER *a2)
{
  *(_DWORD *)&a2->Version = 0;
  HalPutDmaAdapter(a2);
}
