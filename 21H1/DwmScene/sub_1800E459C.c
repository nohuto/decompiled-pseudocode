/*
 * XREFs of sub_1800E459C @ 0x1800E459C
 * Callers:
 *     sub_1800E5DC0 @ 0x1800E5DC0 (sub_1800E5DC0.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     sub_1800E4758 @ 0x1800E4758 (sub_1800E4758.c)
 */

void __fastcall sub_1800E459C(_QWORD *a1, _OWORD *a2, _OWORD *a3)
{
  _OWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v7; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = a3 - a2;
  if ( v5 )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_180010B0C((__int64)a1, a3 - a2);
    *a1 = v7;
    a1[2] = &v7[2 * v5];
    a1[1] = v7;
    while ( v4 != a3 )
    {
      *(_OWORD *)v7 = *v4;
      v7 += 2;
      ++v4;
    }
    v8[0] = 0LL;
    a1[1] = v7;
    sub_1800E4758(v8);
  }
}
