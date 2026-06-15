/*
 * XREFs of sub_180036A80 @ 0x180036A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_180036A80(__int64 a1, char a2)
{
  sub_18000F708((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 56LL);
  return a1;
}
