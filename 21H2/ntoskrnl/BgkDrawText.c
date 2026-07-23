/*
 * XREFs of BgkDrawText @ 0x1409F73DC
 * Callers:
 *     NtDrawText @ 0x1405B2970 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x1409F7570 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C50BE8 && byte_140C50BE9 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
