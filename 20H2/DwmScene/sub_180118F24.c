/*
 * XREFs of sub_180118F24 @ 0x180118F24
 * Callers:
 *     sub_18011A458 @ 0x18011A458 (sub_18011A458.c)
 * Callees:
 *     sub_18011CAFC @ 0x18011CAFC (sub_18011CAFC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180118F24(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0xC0uLL);
  v6 = *a4;
  v8[6] = 0LL;
  v8[7] = 0LL;
  *((_OWORD *)v8 + 2) = *(_OWORD *)v6;
  *((_OWORD *)v8 + 3) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 7LL;
  *(_WORD *)v6 = 0;
  sub_18011CAFC(v8 + 8);
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
