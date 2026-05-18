/*
 * XREFs of sub_18008D650 @ 0x18008D650
 * Callers:
 *     sub_18008D9E0 @ 0x18008D9E0 (sub_18008D9E0.c)
 *     sub_18008DC38 @ 0x18008DC38 (sub_18008DC38.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180018BD0 @ 0x180018BD0 (sub_180018BD0.c)
 *     sub_18001D188 @ 0x18001D188 (sub_18001D188.c)
 */

void __fastcall sub_18008D650(_QWORD *a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rbx
  _QWORD *v6; // rax
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v4 = a2;
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v6 = sub_18001D188((__int64)a1, a2);
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
    sub_180018BD0(&v7);
  }
}
