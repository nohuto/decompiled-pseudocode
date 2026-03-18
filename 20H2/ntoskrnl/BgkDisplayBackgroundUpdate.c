/*
 * XREFs of BgkDisplayBackgroundUpdate @ 0x140A99B44
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayBackgroundUpdate @ 0x1409F7748 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDisplayBackgroundUpdate()
{
  __int64 result; // rax

  if ( !byte_140C50A20 || !byte_140C50A21 )
    return 3221225473LL;
  result = BgDisplayBackgroundUpdate(1);
  if ( (int)result >= 0 )
    byte_140C505C4 = 1;
  return result;
}
