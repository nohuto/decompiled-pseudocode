/*
 * XREFs of BiConvertElementFormatToValueType @ 0x14080346C
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
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
