/*
 * XREFs of sub_18008A3A0 @ 0x18008A3A0
 * Callers:
 *     sub_18008AECC @ 0x18008AECC (sub_18008AECC.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008A3A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rdx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0x50uLL);
  v6 = *a4;
  v8[6] = 0LL;
  v8[7] = 0LL;
  sub_18001277C(v8 + 4, v6);
  v8[8] = 0LL;
  v8[9] = 0LL;
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
