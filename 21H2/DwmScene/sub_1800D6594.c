/*
 * XREFs of sub_1800D6594 @ 0x1800D6594
 * Callers:
 *     sub_1800D53E8 @ 0x1800D53E8 (sub_1800D53E8.c)
 *     sub_1800D60A0 @ 0x1800D60A0 (sub_1800D60A0.c)
 *     sub_1800D61D8 @ 0x1800D61D8 (sub_1800D61D8.c)
 * Callees:
 *     sub_1800D642C @ 0x1800D642C (sub_1800D642C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800D6594(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v5) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    sub_1800D642C(a1, 1uLL);
    v5 = a1[3];
  }
  v6 = v5 & (2LL * a1[2] - 1);
  a1[3] = v6;
  v7 = v6 + a1[4];
  v8 = a1[1];
  v9 = (v7 >> 1) & (a1[2] - 1LL);
  if ( !*(_QWORD *)(v8 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = operator new(0x10uLL);
    v8 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v8 + 8 * v9) + 8 * (v7 & 1)) = *a2;
  ++a1[4];
  return result;
}
