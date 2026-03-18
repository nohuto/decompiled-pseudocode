/*
 * XREFs of BgkDrawText @ 0x1409F33DC
 * Callers:
 *     NtDrawText @ 0x1405AD1E0 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x1409F3570 (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140C50998 && byte_140C50999 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
