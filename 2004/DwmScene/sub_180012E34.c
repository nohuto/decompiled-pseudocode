/*
 * XREFs of sub_180012E34 @ 0x180012E34
 * Callers:
 *     sub_180013110 @ 0x180013110 (sub_180013110.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_180072F30 @ 0x180072F30 (sub_180072F30.c)
 *     sub_18007EF38 @ 0x18007EF38 (sub_18007EF38.c)
 *     sub_18008217C @ 0x18008217C (sub_18008217C.c)
 *     sub_18009F7B4 @ 0x18009F7B4 (sub_18009F7B4.c)
 *     sub_18009F8D4 @ 0x18009F8D4 (sub_18009F8D4.c)
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 *     sub_1800AC3C8 @ 0x1800AC3C8 (sub_1800AC3C8.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800CBFB0 @ 0x1800CBFB0 (sub_1800CBFB0.c)
 *     sub_1800D3560 @ 0x1800D3560 (sub_1800D3560.c)
 *     sub_1800D3808 @ 0x1800D3808 (sub_1800D3808.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800D48FC @ 0x1800D48FC (sub_1800D48FC.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 *     sub_1800EB130 @ 0x1800EB130 (sub_1800EB130.c)
 *     sub_1800ED7EC @ 0x1800ED7EC (sub_1800ED7EC.c)
 *     sub_1800F2CE0 @ 0x1800F2CE0 (sub_1800F2CE0.c)
 *     sub_1800FA1B0 @ 0x1800FA1B0 (sub_1800FA1B0.c)
 *     sub_1800FB7E4 @ 0x1800FB7E4 (sub_1800FB7E4.c)
 *     sub_180104D98 @ 0x180104D98 (sub_180104D98.c)
 *     sub_18010D020 @ 0x18010D020 (sub_18010D020.c)
 *     sub_1801147F0 @ 0x1801147F0 (sub_1801147F0.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 *__fastcall sub_180012E34(__int64 *a1, __int64 *Src)
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
      sub_18000FB34(a1, Src[2], 0LL, v3);
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
