/*
 * XREFs of BgReleaseSpinLock @ 0x1409F1B28
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C96F0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}
