/*
 * XREFs of BgAcquireSpinLock @ 0x1409F5B40
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CCE70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
