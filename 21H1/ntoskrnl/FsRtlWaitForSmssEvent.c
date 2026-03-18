/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x1407BF1E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

void __fastcall FsRtlWaitForSmssEvent(PADAPTER_OBJECT DmaAdapter)
{
  KeWaitForSingleObject(DmaAdapter, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  HalPutDmaAdapter(DmaAdapter);
}
