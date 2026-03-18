/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x1407D0EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __fastcall FsRtlWaitForSmssEvent(PADAPTER_OBJECT DmaAdapter)
{
  KeWaitForSingleObject(DmaAdapter, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  HalPutDmaAdapter(DmaAdapter);
}
