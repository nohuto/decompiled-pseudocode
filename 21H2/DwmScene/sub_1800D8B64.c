/*
 * XREFs of sub_1800D8B64 @ 0x1800D8B64
 * Callers:
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 * Callees:
 *     sub_1800752E4 @ 0x1800752E4 (sub_1800752E4.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D8B64(__int64 **a1, __int64 a2, __int64 a3)
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
  sub_1800752E4(a1, a2, 0, (unsigned __int64 *)v7 + 4, v7);
  return a2;
}
