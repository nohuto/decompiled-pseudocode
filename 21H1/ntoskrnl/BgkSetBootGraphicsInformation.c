/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x1409F34C4
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x1409F3684 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C50AD0 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
