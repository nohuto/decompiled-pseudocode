/*
 * XREFs of sub_18006C840 @ 0x18006C840
 * Callers:
 *     sub_180071490 @ 0x180071490 (sub_180071490.c)
 *     sub_18007CF50 @ 0x18007CF50 (sub_18007CF50.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006C840(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // [rsp+28h] [rbp-20h]

  v6 = operator new(0x60uLL);
  v6[6] = 0LL;
  v6[7] = 0LL;
  sub_18001CDF8(v6 + 4, a3);
  v6[10] = 0LL;
  v6[11] = 0LL;
  sub_18001CDF8(v6 + 8, a3 + 32);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
