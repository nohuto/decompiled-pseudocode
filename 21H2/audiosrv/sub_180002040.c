/*
 * XREFs of sub_180002040 @ 0x180002040
 * Callers:
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 *     sub_1800CE808 @ 0x1800CE808 (sub_1800CE808.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 *     sub_1800CF240 @ 0x1800CF240 (sub_1800CF240.c)
 *     sub_1800D0620 @ 0x1800D0620 (sub_1800D0620.c)
 *     sub_1800D07A0 @ 0x1800D07A0 (sub_1800D07A0.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 */

__int64 __fastcall sub_180002040(__int64 a1)
{
  sub_180003E08(a1, &qword_18019F818);
  sub_180003E08(a1 + 8, &qword_18019F818);
  sub_180003E08(a1 + 16, &qword_18019F818);
  sub_180003E08(a1 + 40, &qword_18019F818);
  *(_DWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 24) = xmmword_18015B730;
  *(_DWORD *)(a1 + 60) = -1;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  sub_180003E08(a1 + 72, &qword_18019F818);
  return a1;
}
