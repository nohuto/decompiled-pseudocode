/*
 * XREFs of BgReleaseSpinLock @ 0x1409F7B28
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}
