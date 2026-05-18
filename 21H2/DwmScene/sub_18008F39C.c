/*
 * XREFs of sub_18008F39C @ 0x18008F39C
 * Callers:
 *     sub_18008F14C @ 0x18008F14C (sub_18008F14C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18008AC98 @ 0x18008AC98 (sub_18008AC98.c)
 *     sub_18008F48C @ 0x18008F48C (sub_18008F48C.c)
 *     sub_18008F59C @ 0x18008F59C (sub_18008F59C.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall sub_18008F39C(_QWORD *a1, unsigned __int64 a2)
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
    sub_18008F48C(a1 + 3, 2 * v5);
  }
  v9[0] = a1[1];
  sub_18008F59C(a1 + 3, 2 * v5, v9);
  a1[7] = v5;
  a1[6] = v5 - 1;
  result = (_QWORD *)a1[1];
  if ( (_QWORD *)*result != result )
  {
    v7 = (__int64 *)result[1];
    do
    {
      v8 = *(__int64 **)a1[1];
      result = (_QWORD *)sub_18008AC98(a1, (__int64)v9, v8 + 2, v8);
    }
    while ( v8 != v7 );
  }
  return result;
}
