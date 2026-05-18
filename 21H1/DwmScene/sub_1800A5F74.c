/*
 * XREFs of sub_1800A5F74 @ 0x1800A5F74
 * Callers:
 *     sub_1800A6F0C @ 0x1800A6F0C (sub_1800A6F0C.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall sub_1800A5F74(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *v6; // rcx
  _DWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0x58uLL);
  v6 = *a4;
  v8[8] = **a4;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  sub_18001CDF8((_QWORD *)v8 + 5, (__int64)(v6 + 2));
  v8[18] = 0;
  v8[19] = 0;
  v8[20] = 0;
  v8[21] = 0;
  *(_QWORD *)v8 = a2;
  *((_QWORD *)v8 + 1) = a2;
  *((_QWORD *)v8 + 2) = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
