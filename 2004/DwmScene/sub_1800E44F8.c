/*
 * XREFs of sub_1800E44F8 @ 0x1800E44F8
 * Callers:
 *     sub_1800E5DC0 @ 0x1800E5DC0 (sub_1800E5DC0.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180067CC8 @ 0x180067CC8 (sub_180067CC8.c)
 *     sub_1800E46F4 @ 0x1800E46F4 (sub_1800E46F4.c)
 */

void __fastcall sub_1800E44F8(_QWORD *a1, char *a2, char *a3)
{
  char *v4; // rdi
  unsigned __int64 v5; // rbx
  _OWORD *v7; // rax
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = (a3 - a2) >> 6;
  if ( v5 )
  {
    if ( v5 > 0x3FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_180067CC8((__int64)a1, (a3 - a2) >> 6);
    *a1 = v7;
    a1[2] = &v7[4 * v5];
    a1[1] = v7;
    while ( v4 != a3 )
    {
      *v7 = *(_OWORD *)v4;
      v7[1] = *((_OWORD *)v4 + 1);
      v7[2] = *((_OWORD *)v4 + 2);
      v7[3] = *((_OWORD *)v4 + 3);
      v7 += 4;
      v4 += 64;
    }
    v8[0] = 0LL;
    a1[1] = v7;
    sub_1800E46F4(v8);
  }
}
