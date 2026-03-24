/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x1409F64C4
 * Callers:
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x1409F6684 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C50B99 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
