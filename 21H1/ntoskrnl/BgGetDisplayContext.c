/*
 * XREFs of BgGetDisplayContext @ 0x1409EE028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C88E0 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
