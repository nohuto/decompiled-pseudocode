/*
 * XREFs of BgkDisplayProgressIndicator @ 0x140A98F4C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayProgressIndicator @ 0x1409F7334 (BgDisplayProgressIndicator.c)
 */

__int64 BgkDisplayProgressIndicator()
{
  __int64 result; // rax

  if ( !byte_140C50A20 || !byte_140C50A21 )
    return 3221225473LL;
  result = BgDisplayProgressIndicator(1);
  if ( (int)result >= 0 )
    byte_140C505C5 = 1;
  return result;
}
