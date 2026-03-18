/*
 * XREFs of CategoryMaskFromEvent @ 0x1C008849C
 * Callers:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CategoryMaskFromEvent(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 > 0x800E )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
        return 512LL;
      if ( a1 > 0x80000007 )
        return 0x8000LL;
    }
    else if ( a1 < 0x80000000 && (a1 < 0x7FFFFF10 || a1 != 2147483440 && a1 > 0x7FFFFF12 && a1 != 2147483424) )
    {
      return 0x8000LL;
    }
    return 256LL;
  }
  if ( a1 == 32782 )
    return 16LL;
  result = 4LL;
  if ( a1 < 4 )
    return 0x8000LL;
  if ( a1 <= 7 )
    return 1LL;
  if ( a1 <= 0x4000 )
    return 0x8000LL;
  if ( a1 <= 0x4007 )
    return 2LL;
  if ( a1 == 32779 )
    return 64LL;
  if ( a1 != 32773 )
  {
    if ( a1 == 32778 )
      return 32LL;
    if ( a1 == 32780 )
      return 8LL;
    return 0x8000LL;
  }
  return result;
}
