/*
 * XREFs of BgAcquireSpinLock @ 0x1409F7B40
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
