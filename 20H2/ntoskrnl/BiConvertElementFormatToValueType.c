/*
 * XREFs of BiConvertElementFormatToValueType @ 0x140780D70
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
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
