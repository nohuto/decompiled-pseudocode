/*
 * XREFs of sub_1800E9DC8 @ 0x1800E9DC8
 * Callers:
 *     sub_1800EB690 @ 0x1800EB690 (sub_1800EB690.c)
 *     sub_1800EF3B0 @ 0x1800EF3B0 (sub_1800EF3B0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18006D598 @ 0x18006D598 (sub_18006D598.c)
 *     sub_1800E9FC4 @ 0x1800E9FC4 (sub_1800E9FC4.c)
 */

void __fastcall sub_1800E9DC8(_QWORD *a1, char *a2, char *a3)
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
    v7 = sub_18006D598((__int64)a1, (a3 - a2) >> 6);
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
    sub_1800E9FC4(v8);
  }
}
