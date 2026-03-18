/*
 * XREFs of BgGetDisplayContext @ 0x1409F4028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CC330 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
