/*
 * XREFs of sub_180089ACC @ 0x180089ACC
 * Callers:
 *     sub_18008987C @ 0x18008987C (sub_18008987C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010AF8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800853C8 @ 0x1800853C8 (sub_1800853C8.c)
 *     sub_180089BBC @ 0x180089BBC (sub_180089BBC.c)
 *     sub_180089CCC @ 0x180089CCC (sub_180089CCC.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall sub_180089ACC(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *result; // rax
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  if ( 2 * v5 > (unsigned __int64)((__int64)(a1[5] - a1[3]) >> 3) )
  {
    if ( (unsigned __int64)(2 * v5) > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_180089BBC(a1 + 3, 2 * v5);
  }
  v9[0] = a1[1];
  sub_180089CCC(a1 + 3, 2 * v5, v9);
  a1[7] = v5;
  a1[6] = v5 - 1;
  result = (_QWORD *)a1[1];
  if ( (_QWORD *)*result != result )
  {
    v7 = (__int64 *)result[1];
    do
    {
      v8 = *(__int64 **)a1[1];
      result = (_QWORD *)sub_1800853C8(a1, (__int64)v9, v8 + 2, v8);
    }
    while ( v8 != v7 );
  }
  return result;
}
