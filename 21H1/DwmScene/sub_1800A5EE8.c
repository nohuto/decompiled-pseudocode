/*
 * XREFs of sub_1800A5EE8 @ 0x1800A5EE8
 * Callers:
 *     sub_1800A60A4 @ 0x1800A60A4 (sub_1800A60A4.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_1800A5EE8(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // [rsp+28h] [rbp-20h]

  v6 = (char *)operator new(0x58uLL);
  *((_DWORD *)v6 + 8) = *(_DWORD *)a3;
  *((_QWORD *)v6 + 7) = 0LL;
  *((_QWORD *)v6 + 8) = 0LL;
  sub_18001CDF8((_QWORD *)v6 + 5, a3 + 8);
  *(_OWORD *)(v6 + 72) = *(_OWORD *)(a3 + 40);
  *(_QWORD *)v6 = a2;
  *((_QWORD *)v6 + 1) = a2;
  *((_QWORD *)v6 + 2) = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
