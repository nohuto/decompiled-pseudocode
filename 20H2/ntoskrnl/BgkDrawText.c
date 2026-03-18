/*
 * XREFs of BgkDrawText @ 0x1409F93DC
 * Callers:
 *     NtDrawText @ 0x1405B0D40 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x1409F9570 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C50A20 && byte_140C50A21 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
