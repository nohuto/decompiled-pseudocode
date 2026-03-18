/*
 * XREFs of ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1C00069AC
 * Callers:
 *     xxxProcessTSFEvent @ 0x1C00068E4 (xxxProcessTSFEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TSFRangeFromEvent(unsigned int a1, int a2)
{
  if ( a2 )
  {
    if ( a1 == 2147483408 )
      return 1LL;
    if ( a1 - 2147483409 <= 1 )
      return 2LL;
    return 0LL;
  }
  if ( a1 < 0x7FFFFF00 )
    return 0LL;
  if ( a1 <= 0x7FFFFF01 )
    return 1024LL;
  if ( a1 <= 0x7FFFFFFF )
    return 0LL;
  if ( a1 <= 0x80000001 )
    return 256LL;
  if ( a1 <= 0x80000003 )
    return 512LL;
  if ( a1 > 0x80000005 )
    return 0LL;
  return 4096LL;
}
