/*
 * XREFs of BgkDisplayProgressIndicator @ 0x140A932EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayProgressIndicator @ 0x1409F1334 (BgDisplayProgressIndicator.c)
 */

__int64 BgkDisplayProgressIndicator()
{
  __int64 result; // rax

  if ( !byte_140C50998 || !byte_140C50999 )
    return 3221225473LL;
  result = BgDisplayProgressIndicator(1);
  if ( (int)result >= 0 )
    byte_140C50545 = 1;
  return result;
}
