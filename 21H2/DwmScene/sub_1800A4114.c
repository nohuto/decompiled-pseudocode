/*
 * XREFs of sub_1800A4114 @ 0x1800A4114
 * Callers:
 *     sub_1800A575C @ 0x1800A575C (sub_1800A575C.c)
 * Callees:
 *     sub_18007256C @ 0x18007256C (sub_18007256C.c)
 *     sub_1800A14E0 @ 0x1800A14E0 (sub_1800A14E0.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800A4114(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax

  v8 = operator new(0x240uLL);
  if ( v8 )
    v8 = (_QWORD *)sub_1800A14E0((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v8 + 2;
  *(_QWORD *)(a1 + 8) = v8;
  sub_18007256C(a1, v8 + 2);
  return a1;
}
