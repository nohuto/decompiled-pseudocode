/*
 * XREFs of sub_180054150 @ 0x180054150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_180054150(__int64 a1, char a2)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 24LL);
  return a1;
}
