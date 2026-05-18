/*
 * XREFs of sub_1800D3294 @ 0x1800D3294
 * Callers:
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 * Callees:
 *     sub_18006FA14 @ 0x18006FA14 (sub_18006FA14.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D3294(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rbx
  __int64 **v7; // rax

  v6 = *a1;
  v7 = (__int64 **)operator new(0x30uLL);
  v7[4] = *(__int64 **)a3;
  *((_DWORD *)v7 + 10) = *(_DWORD *)(a3 + 8);
  *v7 = v6;
  v7[1] = v6;
  v7[2] = v6;
  *((_WORD *)v7 + 12) = 0;
  sub_18006FA14(a1, a2, 0, (unsigned __int64 *)v7 + 4, v7);
  return a2;
}
