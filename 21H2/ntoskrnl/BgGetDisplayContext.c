/*
 * XREFs of BgGetDisplayContext @ 0x1409F2028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CCE70 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
