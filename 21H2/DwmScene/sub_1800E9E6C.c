/*
 * XREFs of sub_1800E9E6C @ 0x1800E9E6C
 * Callers:
 *     sub_1800EB690 @ 0x1800EB690 (sub_1800EB690.c)
 *     sub_1800EF3B0 @ 0x1800EF3B0 (sub_1800EF3B0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     sub_1800EA028 @ 0x1800EA028 (sub_1800EA028.c)
 */

void __fastcall sub_1800E9E6C(_QWORD *a1, _OWORD *a2, _OWORD *a3)
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
    v7 = sub_180010BEC((__int64)a1, a3 - a2);
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
    sub_1800EA028(v8);
  }
}
