/*
 * XREFs of RawUnload @ 0x140911B50
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void RawUnload()
{
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceTapeObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceCdRomObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceDiskObject);
}
