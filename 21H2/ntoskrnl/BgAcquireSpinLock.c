/*
 * XREFs of BgAcquireSpinLock @ 0x140AAEDC8
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403DC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}
