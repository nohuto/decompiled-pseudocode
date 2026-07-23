/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x1409F74C4
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x1409F7684 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C50BE8 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
