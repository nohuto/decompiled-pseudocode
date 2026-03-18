/*
 * XREFs of _CategoryMaskFromEvent@4 @ 0x42BB2
 * Callers:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 * Callees:
 *     <none>
 */

int __fastcall CategoryMaskFromEvent(unsigned int a1)
{
  int result; // eax
  unsigned int v2; // ecx

  if ( a1 > 0x800E )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
        return 512;
      if ( a1 > 0x80000007 )
        return 0x8000;
    }
    else if ( a1 < 0x80000000 && (a1 < 0x7FFFFF10 || a1 != 2147483440 && a1 > 0x7FFFFF12 && a1 != 2147483424) )
    {
      return 0x8000;
    }
    return 256;
  }
  if ( a1 == 32782 )
    return 16;
  if ( a1 > 0x800A )
  {
    v2 = a1 - 32779;
    if ( !v2 )
      return 64;
    if ( v2 == 1 )
      return 8;
    return 0x8000;
  }
  if ( a1 == 32778 )
    return 32;
  result = 4;
  if ( a1 < 4 )
    return 0x8000;
  if ( a1 <= 7 )
    return 1;
  if ( a1 <= 0x4000 )
    return 0x8000;
  if ( a1 <= 0x4007 )
    return 2;
  if ( a1 != 32773 )
    return 0x8000;
  return result;
}
