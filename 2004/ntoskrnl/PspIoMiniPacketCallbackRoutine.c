/*
 * XREFs of PspIoMiniPacketCallbackRoutine @ 0x1406E39E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void __fastcall PspIoMiniPacketCallbackRoutine(__int64 a1, struct _DMA_ADAPTER *a2)
{
  *(_DWORD *)&a2->Version = 0;
  HalPutDmaAdapter(a2);
}
