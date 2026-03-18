/*
 * XREFs of BgAcquireSpinLock @ 0x1409F1B40
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C88E0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
