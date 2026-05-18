/*
 * XREFs of sub_180102C40 @ 0x180102C40
 * Callers:
 *     sub_180103F4C @ 0x180103F4C (sub_180103F4C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     sub_1800EA028 @ 0x1800EA028 (sub_1800EA028.c)
 */

void __fastcall sub_180102C40(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _DWORD *v4; // rax
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v2 = a2;
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v4 = sub_180010BEC((__int64)a1, a2);
    *a1 = v4;
    a1[2] = &v4[4 * v2];
    do
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 1065353216;
      v4 += 4;
      --v2;
    }
    while ( v2 );
    v5 = 0LL;
    a1[1] = v4;
    sub_1800EA028(&v5);
  }
}
