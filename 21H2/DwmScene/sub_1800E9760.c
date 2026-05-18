/*
 * XREFs of sub_1800E9760 @ 0x1800E9760
 * Callers:
 *     sub_1800E9864 @ 0x1800E9864 (sub_1800E9864.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800E94F8 @ 0x1800E94F8 (sub_1800E94F8.c)
 */

void __fastcall sub_1800E9760(_QWORD *a1, int *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rdi

  v5 = a1[1];
  if ( a1[2] == v5 )
  {
    sub_1800E94F8(a1, (_DWORD *)v5, a2, a3, a4, a5);
  }
  else
  {
    v7 = *a2;
    v8 = *a4;
    v9 = *a5;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)v5 = v7;
    sub_180020B7C((_QWORD *)(v5 + 8), a3);
    *(_QWORD *)(v5 + 40) = v8;
    *(_QWORD *)(v5 + 48) = v9;
    a1[1] += 56LL;
  }
}
