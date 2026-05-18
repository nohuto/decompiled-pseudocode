/*
 * XREFs of sub_180072218 @ 0x180072218
 * Callers:
 *     sub_180075E6C @ 0x180075E6C (sub_180075E6C.c)
 * Callees:
 *     sub_1800716D8 @ 0x1800716D8 (sub_1800716D8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180072218(_QWORD *a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  _QWORD *v6; // rdi
  _QWORD *v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v8[1] = a1;
  v6 = operator new(0x60uLL);
  v8[2] = v6;
  v8[0] = *a4;
  sub_1800716D8((__int64)(v6 + 4), v8);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
