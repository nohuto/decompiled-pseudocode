/*
 * XREFs of sub_1800335A0 @ 0x1800335A0
 * Callers:
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800339EC @ 0x1800339EC (sub_1800339EC.c)
 *     sub_180037240 @ 0x180037240 (sub_180037240.c)
 */

void __fastcall sub_1800335A0(_QWORD *a1, char *a2, char *a3)
{
  char *v4; // rdi
  unsigned __int64 v5; // rbx
  _OWORD *v7; // rax
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = (a3 - a2) >> 5;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = (_OWORD *)sub_180037240(a1, (a3 - a2) >> 5);
    *a1 = v7;
    a1[2] = &v7[2 * v5];
    a1[1] = v7;
    while ( v4 != a3 )
    {
      *v7 = *(_OWORD *)v4;
      v7[1] = *((_OWORD *)v4 + 1);
      v7 += 2;
      v4 += 32;
    }
    v8[0] = 0LL;
    a1[1] = v7;
    sub_1800339EC(v8);
  }
}
