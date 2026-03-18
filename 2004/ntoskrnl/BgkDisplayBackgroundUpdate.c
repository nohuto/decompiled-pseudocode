/*
 * XREFs of BgkDisplayBackgroundUpdate @ 0x140A93EE4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayBackgroundUpdate @ 0x1409F1748 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDisplayBackgroundUpdate()
{
  __int64 result; // rax

  if ( !byte_140C50998 || !byte_140C50999 )
    return 3221225473LL;
  result = BgDisplayBackgroundUpdate(1);
  if ( (int)result >= 0 )
    byte_140C50544 = 1;
  return result;
}
