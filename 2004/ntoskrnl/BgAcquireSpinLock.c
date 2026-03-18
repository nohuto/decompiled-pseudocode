/*
 * XREFs of BgAcquireSpinLock @ 0x1409F1B40
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C96F0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
