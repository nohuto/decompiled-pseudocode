/*
 * XREFs of sub_18006CAD0 @ 0x18006CAD0
 * Callers:
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_18006D850 @ 0x18006D850 (sub_18006D850.c)
 * Callees:
 *     sub_18006CB24 @ 0x18006CB24 (sub_18006CB24.c)
 *     sub_18006D448 @ 0x18006D448 (sub_18006D448.c)
 */

__int64 __fastcall sub_18006CAD0(__int64 a1, __int64 a2)
{
  _QWORD *i; // rdi

  sub_18006D448();
  for ( i = (_QWORD *)(a2 + 80); (_QWORD *)*i != i; sub_18006CB24(a1, *i - 104LL) )
    ;
  return sub_18006D05C(a2);
}
