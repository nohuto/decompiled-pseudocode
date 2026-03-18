/*
 * XREFs of BgGetDisplayContext @ 0x140AAB028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403DC330 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
