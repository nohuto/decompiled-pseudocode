/*
 * XREFs of BiConvertElementFormatToValueType @ 0x140770360
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiConvertElementFormatToValueType(unsigned int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 > 1 )
  {
    if ( a1 <= 3 )
      return result;
    if ( a1 == 4 )
      return 7LL;
  }
  return 3LL;
}
