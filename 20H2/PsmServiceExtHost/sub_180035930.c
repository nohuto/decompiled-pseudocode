/*
 * XREFs of sub_180035930 @ 0x180035930
 * Callers:
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035930(unsigned int a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 88) == a1 )
    return 0LL;
  else
    return *(_DWORD *)(a2 + 88) < a1 ? 1 : -1;
}
