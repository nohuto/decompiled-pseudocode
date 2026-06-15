/*
 * XREFs of sub_180008A64 @ 0x180008A64
 * Callers:
 *     sub_18000AF30 @ 0x18000AF30 (sub_18000AF30.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180008F00 @ 0x180008F00 (sub_180008F00.c)
 */

__int64 __fastcall sub_180008A64(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // rdi
  int v6; // esi
  __int64 v9; // rax
  __int64 v10; // r10

  v5 = *a1;
  v6 = (int)a1;
  v9 = sub_180008EAC(0x48uLL);
  v10 = *a5;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_OWORD *)(v9 + 32) = *(_OWORD *)v10;
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_WORD *)v10 = 0;
  *(_QWORD *)(v10 + 24) = 7LL;
  *(_DWORD *)(v9 + 64) = 0;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 16) = v5;
  *(_WORD *)(v9 + 24) = 0;
  sub_180008F00(v6, a2, a3, v9 + 32, v9);
  return a2;
}
