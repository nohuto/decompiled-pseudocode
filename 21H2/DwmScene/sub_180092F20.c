/*
 * XREFs of sub_180092F20 @ 0x180092F20
 * Callers:
 *     sub_1800932B0 @ 0x1800932B0 (sub_1800932B0.c)
 *     sub_180093508 @ 0x180093508 (sub_180093508.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180019338 @ 0x180019338 (sub_180019338.c)
 *     sub_180020F80 @ 0x180020F80 (sub_180020F80.c)
 */

void __fastcall sub_180092F20(_QWORD *a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rbx
  _QWORD *v6; // rax
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v4 = a2;
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v6 = sub_180020F80((__int64)a1, a2);
    *a1 = v6;
    a1[2] = (char *)v6 + 4 * v4;
    do
    {
      *(_DWORD *)v6 = *a3;
      v6 = (_QWORD *)((char *)v6 + 4);
      --v4;
    }
    while ( v4 );
    v7 = 0LL;
    a1[1] = v6;
    sub_180019338(&v7);
  }
}
