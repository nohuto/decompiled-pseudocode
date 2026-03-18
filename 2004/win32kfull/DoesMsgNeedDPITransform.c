/*
 * XREFs of DoesMsgNeedDPITransform @ 0x1C01024B4
 * Callers:
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0099FE0 (TransformMessageBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DoesMsgNeedDPITransform(unsigned int a1, __int64 a2, int a3)
{
  __int64 result; // rax
  bool v4; // cc
  bool v5; // zf

  result = 1LL;
  if ( a1 <= 0x243 )
  {
    if ( a1 >= 0x241 )
      return result;
    if ( a1 <= 0xAD )
    {
      if ( a1 < 0xAB && a1 != 3 && a1 != 83 && a1 != 123 )
      {
        if ( a1 <= 0x82 )
          return 0LL;
        if ( a1 > 0x84 )
        {
          if ( a1 <= 0x9F )
            return 0LL;
          v4 = a1 <= 0xA9;
LABEL_17:
          if ( !v4 )
            return 0LL;
          return result;
        }
      }
      return result;
    }
    if ( a1 == 274 )
    {
      if ( HIWORD(a3) )
        return result;
      return 0LL;
    }
    if ( a1 <= 0x1FF )
      return 0LL;
    if ( a1 <= 0x20E || a1 == 528 )
      return result;
    v5 = a1 == 544;
LABEL_24:
    if ( !v5 )
      return 0LL;
    return result;
  }
  if ( a1 <= 0x2A1 )
  {
    if ( a1 >= 0x2A0 )
      return result;
    if ( a1 < 0x245 )
      return 0LL;
    if ( a1 <= 0x247 )
      return result;
    if ( a1 <= 0x248 )
      return 0LL;
    if ( a1 <= 0x24A )
      return result;
    if ( a1 <= 0x24D )
      return 0LL;
    if ( a1 <= 0x24F )
      return result;
    if ( a1 <= 0x250 )
      return 0LL;
    if ( a1 <= 0x252 )
      return result;
    v5 = a1 == 643;
    goto LABEL_24;
  }
  if ( a1 < 0x2F2 )
    return 0LL;
  if ( a1 != 831 && a1 > 0x2F4 && a1 != 787 )
  {
    v4 = a1 - 833 <= 1;
    goto LABEL_17;
  }
  return result;
}
