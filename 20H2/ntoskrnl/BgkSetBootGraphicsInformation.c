/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x1409F94C4
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x1409F9684 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C50A20 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
