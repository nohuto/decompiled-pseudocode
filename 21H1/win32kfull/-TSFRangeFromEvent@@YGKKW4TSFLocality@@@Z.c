/*
 * XREFs of ?TSFRangeFromEvent@@YGKKW4TSFLocality@@@Z @ 0x155682
 * Callers:
 *     _xxxProcessTSFEvent@4 @ 0x155866 (_xxxProcessTSFEvent@4.c)
 * Callees:
 *     <none>
 */

int __fastcall TSFRangeFromEvent(unsigned int a1, int a2)
{
  if ( !a2 )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
        return 4096;
    }
    else
    {
      if ( a1 >= 0x80000002 )
        return 512;
      if ( a1 >= 0x7FFFFF00 )
      {
        if ( a1 <= 0x7FFFFF01 )
          return 1024;
        if ( a1 + 0x80000000 <= 1 )
          return 256;
      }
    }
    return 0;
  }
  if ( a1 != 2147483408 )
  {
    if ( a1 - 2147483409 <= 1 )
      return 2;
    return 0;
  }
  return 1;
}
