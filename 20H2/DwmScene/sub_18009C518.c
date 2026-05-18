/*
 * XREFs of sub_18009C518 @ 0x18009C518
 * Callers:
 *     sub_18009CD60 @ 0x18009CD60 (sub_18009CD60.c)
 *     sub_1800A2130 @ 0x1800A2130 (sub_1800A2130.c)
 *     sub_1800B7CE0 @ 0x1800B7CE0 (sub_1800B7CE0.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009C518(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // [rsp+28h] [rbp-10h]

  v6 = operator new(0x40uLL);
  v6[6] = 0LL;
  v6[7] = 0LL;
  sub_18001CDF8(v6 + 4, a3);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
