/*
 * XREFs of BgAcquireSpinLock @ 0x1409F4B40
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CCD00 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
