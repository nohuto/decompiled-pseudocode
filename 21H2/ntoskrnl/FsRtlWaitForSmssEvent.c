/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x1407D5360
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

void __fastcall FsRtlWaitForSmssEvent(PADAPTER_OBJECT DmaAdapter)
{
  KeWaitForSingleObject(DmaAdapter, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  HalPutDmaAdapter(DmaAdapter);
}
