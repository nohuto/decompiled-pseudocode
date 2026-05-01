/*
 * XREFs of sub_1800276D4 @ 0x1800276D4
 * Callers:
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 * Callees:
 *     sub_180027310 @ 0x180027310 (sub_180027310.c)
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800276D4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  _OWORD *v7; // rax
  _OWORD *v8; // rdi
  __int128 v9; // xmm1
  __int64 result; // rax

  memset(a3, 0, 0x268uLL);
  sub_180027310(a1, a3);
  v6 = 4LL;
  v7 = a3 + 12;
  v8 = (_OWORD *)(a2 + 536);
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v9 = v8[7];
    v8 += 8;
    *(v7 - 1) = v9;
    --v6;
  }
  while ( v6 );
  result = sub_180027784(0LL);
  a3[11] = result;
  return result;
}
