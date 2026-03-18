/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x1407C26E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 */

void __fastcall FsRtlWaitForSmssEvent(PADAPTER_OBJECT DmaAdapter)
{
  KeWaitForSingleObject(DmaAdapter, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  HalPutDmaAdapter(DmaAdapter);
}
