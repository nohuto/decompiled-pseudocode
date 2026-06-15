/*
 * XREFs of sub_18002B330 @ 0x18002B330
 * Callers:
 *     sub_1800746C0 @ 0x1800746C0 (sub_1800746C0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_18002B330(__int64 a1, char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  *(_QWORD *)(a1 + 8) = &off_180147338;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 88LL);
  return a1;
}
