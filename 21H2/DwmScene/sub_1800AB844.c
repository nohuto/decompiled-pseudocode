/*
 * XREFs of sub_1800AB844 @ 0x1800AB844
 * Callers:
 *     sub_1800AC7DC @ 0x1800AC7DC (sub_1800AC7DC.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall sub_1800AB844(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *v6; // rcx
  _DWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0x58uLL);
  v6 = *a4;
  v8[8] = **a4;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  sub_180020B7C((_QWORD *)v8 + 5, (__int64)(v6 + 2));
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
