/*
 * XREFs of sub_18009E844 @ 0x18009E844
 * Callers:
 *     sub_18009FE8C @ 0x18009FE8C (sub_18009FE8C.c)
 * Callees:
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     sub_18009BC10 @ 0x18009BC10 (sub_18009BC10.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18009E844(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax

  v8 = operator new(0x240uLL);
  if ( v8 )
    v8 = (_QWORD *)sub_18009BC10((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v8 + 2;
  *(_QWORD *)(a1 + 8) = v8;
  sub_18006CC9C(a1, v8 + 2);
  return a1;
}
