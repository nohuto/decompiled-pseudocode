/*
 * XREFs of sub_18010986C @ 0x18010986C
 * Callers:
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_180108CE8 @ 0x180108CE8 (sub_180108CE8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010986C(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  double v7; // xmm0_8
  __int64 v8; // rax
  __int64 v9; // rcx
  double v10; // xmm0_8
  __int64 v11; // rax

  v5 = a1 + 8;
  sub_180067278(a1 + 8);
  sub_180108CE8(a1);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 208);
  if ( v6 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 208) & 1LL | ((unsigned __int64)v6 >> 1);
    v7 = (double)(int)v8 + (double)(int)v8;
  }
  else
  {
    v7 = (double)(int)v6;
  }
  *(double *)(a2 + 8) = v7 / a3 * 1000.0;
  v9 = *(_QWORD *)(a1 + 392);
  if ( v9 < 0 )
  {
    v11 = *(_QWORD *)(a1 + 392) & 1LL | ((unsigned __int64)v9 >> 1);
    v10 = (double)(int)v11 + (double)(int)v11;
  }
  else
  {
    v10 = (double)(int)v9;
  }
  *(double *)(a2 + 16) = v10 / a3 * 1000.0;
  sub_180067304(v5);
  return a2;
}
