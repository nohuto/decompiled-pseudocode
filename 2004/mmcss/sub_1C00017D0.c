/*
 * XREFs of sub_1C00017D0 @ 0x1C00017D0
 * Callers:
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00017D0(volatile signed __int32 *a1, signed __int32 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  v2 = *a1;
  if ( *a1 >= a2 )
    return 3221225769LL;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange(a1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( v2 >= a2 )
      return 3221225769LL;
  }
  return 0LL;
}
