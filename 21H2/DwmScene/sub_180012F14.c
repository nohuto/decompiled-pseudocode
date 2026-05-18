/*
 * XREFs of sub_180012F14 @ 0x180012F14
 * Callers:
 *     sub_1800131F0 @ 0x1800131F0 (sub_1800131F0.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_180078800 @ 0x180078800 (sub_180078800.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 *     sub_180087A4C @ 0x180087A4C (sub_180087A4C.c)
 *     sub_1800A5084 @ 0x1800A5084 (sub_1800A5084.c)
 *     sub_1800A51A4 @ 0x1800A51A4 (sub_1800A51A4.c)
 *     sub_1800AEC10 @ 0x1800AEC10 (sub_1800AEC10.c)
 *     sub_1800B1C98 @ 0x1800B1C98 (sub_1800B1C98.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800D1880 @ 0x1800D1880 (sub_1800D1880.c)
 *     sub_1800D8E30 @ 0x1800D8E30 (sub_1800D8E30.c)
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 *     sub_1800DA1CC @ 0x1800DA1CC (sub_1800DA1CC.c)
 *     sub_1800EBE4C @ 0x1800EBE4C (sub_1800EBE4C.c)
 *     sub_1800F0A00 @ 0x1800F0A00 (sub_1800F0A00.c)
 *     sub_1800F30BC @ 0x1800F30BC (sub_1800F30BC.c)
 *     sub_1800F85B0 @ 0x1800F85B0 (sub_1800F85B0.c)
 *     sub_1800FFA80 @ 0x1800FFA80 (sub_1800FFA80.c)
 *     sub_1801010B4 @ 0x1801010B4 (sub_1801010B4.c)
 *     sub_18010A668 @ 0x18010A668 (sub_18010A668.c)
 *     sub_1801128F0 @ 0x1801128F0 (sub_1801128F0.c)
 *     sub_18011A0C0 @ 0x18011A0C0 (sub_18011A0C0.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 *__fastcall sub_180012F14(__int64 *a1, __int64 *Src)
{
  _QWORD *v3; // r9
  size_t v4; // rdi
  void *v5; // rsi

  if ( a1 != Src )
  {
    v3 = Src;
    if ( (unsigned __int64)Src[3] >= 0x10 )
      v3 = (_QWORD *)*Src;
    v4 = Src[2];
    if ( v4 > a1[3] )
    {
      sub_18000FC14(a1, Src[2], 0LL, v3);
    }
    else
    {
      v5 = a1;
      if ( (unsigned __int64)a1[3] >= 0x10 )
        v5 = (void *)*a1;
      a1[2] = v4;
      memmove(v5, v3, v4);
      *((_BYTE *)v5 + v4) = 0;
    }
  }
  return a1;
}
