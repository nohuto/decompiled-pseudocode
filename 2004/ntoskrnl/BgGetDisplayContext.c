/*
 * XREFs of BgGetDisplayContext @ 0x1409EE028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C96F0 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
