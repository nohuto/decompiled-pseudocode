/*
 * XREFs of sub_1800BCC28 @ 0x1800BCC28
 * Callers:
 *     sub_1800C3C50 @ 0x1800C3C50 (sub_1800C3C50.c)
 *     sub_18010AE58 @ 0x18010AE58 (sub_18010AE58.c)
 *     sub_18010BD28 @ 0x18010BD28 (sub_18010BD28.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 */

void __fastcall sub_1800BCC28(_QWORD *a1, char *a2, char *a3)
{
  char *v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rax

  v4 = a2;
  v5 = (a3 - a2) >> 4;
  if ( v5 )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_180010BEC((__int64)a1, (a3 - a2) >> 4);
    *a1 = v7;
    a1[2] = &v7[2 * v5];
    a1[1] = v7;
    while ( v4 != a3 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v8 = *((_QWORD *)v4 + 1);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *v7 = *(_QWORD *)v4;
      v7[1] = *((_QWORD *)v4 + 1);
      v7 += 2;
      v4 += 16;
    }
    a1[1] = v7;
  }
}
