/*
 * XREFs of sub_180073760 @ 0x180073760
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180072E20 @ 0x180072E20 (sub_180072E20.c)
 */

__int64 __fastcall sub_180073760(__int64 a1, char a2)
{
  sub_180072E20((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148((void *)a1);
  return a1;
}
