/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140AB07F4
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140AB097C (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140C54D48 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
