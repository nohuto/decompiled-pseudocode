/*
 * XREFs of _DoesMsgNeedDPITransform@12 @ 0xA87BE
 * Callers:
 *     _TransformMessageBetweenCoordinateSpaces@24 @ 0x6C458 (_TransformMessageBetweenCoordinateSpaces@24.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall DoesMsgNeedDPITransform(unsigned int a1, int a2, int a3)
{
  if ( a1 <= 0x243 )
  {
    if ( a1 >= 0x241 )
      return 1;
    if ( a1 > 0xAD )
    {
      if ( a1 == 274 )
        return HIWORD(a3) != 0;
      if ( a1 <= 0x1FF )
        return 0;
      if ( a1 <= 0x20E || a1 == 528 )
        return 1;
      return a1 == 544;
    }
    if ( a1 >= 0xAB || a1 == 3 || a1 == 83 || a1 == 123 )
      return 1;
    if ( a1 <= 0x82 )
      return 0;
    if ( a1 <= 0x84 )
      return 1;
    if ( a1 <= 0x9F )
      return 0;
    return a1 <= 0xA9;
  }
  if ( a1 <= 0x2A1 )
  {
    if ( a1 >= 0x2A0 )
      return 1;
    if ( a1 > 0x24F )
    {
      if ( a1 < 0x251 )
        return 0;
      if ( a1 <= 0x252 )
        return 1;
      return a1 == 643;
    }
    if ( a1 >= 0x24E )
      return 1;
    if ( a1 < 0x245 )
      return 0;
    if ( a1 <= 0x247 )
      return 1;
    if ( a1 <= 0x248 )
      return 0;
    return a1 <= 0x24A;
  }
  return a1 >= 0x2F2 && (a1 <= 0x2F4 || a1 == 787 || a1 == 831 || a1 - 833 <= 1);
}
