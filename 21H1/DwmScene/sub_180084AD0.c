/*
 * XREFs of sub_180084AD0 @ 0x180084AD0
 * Callers:
 *     sub_1800855FC @ 0x1800855FC (sub_1800855FC.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180084AD0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rdx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0x50uLL);
  v6 = *a4;
  v8[6] = 0LL;
  v8[7] = 0LL;
  sub_18001269C(v8 + 4, v6);
  v8[8] = 0LL;
  v8[9] = 0LL;
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
