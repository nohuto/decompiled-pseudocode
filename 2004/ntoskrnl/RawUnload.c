/*
 * XREFs of RawUnload @ 0x14090BF20
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void RawUnload()
{
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceTapeObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceCdRomObject);
  HalPutDmaAdapter((PADAPTER_OBJECT)RawDeviceDiskObject);
}
