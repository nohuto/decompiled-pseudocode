/*
 * XREFs of sub_18008F284 @ 0x18008F284
 * Callers:
 *     sub_18008F14C @ 0x18008F14C (sub_18008F14C.c)
 *     sub_1800CB61C @ 0x1800CB61C (sub_1800CB61C.c)
 *     sub_180110D40 @ 0x180110D40 (sub_180110D40.c)
 *     sub_180120FA8 @ 0x180120FA8 (sub_180120FA8.c)
 *     sub_180121024 @ 0x180121024 (sub_180121024.c)
 * Callees:
 *     ceilf @ 0x180125024 (ceilf.c)
 */

unsigned __int64 __fastcall sub_18008F284(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  float v3; // xmm0_4
  __int64 v4; // rax
  float v5; // xmm0_4
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v1 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)v1;
  }
  v5 = ceilf(v3 / *(float *)a1);
  v6 = 0LL;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v5;
  result = 8LL;
  if ( v7 > 8 )
    result = v7;
  if ( v2 >= result )
    return v2;
  if ( v2 < 0x200 )
  {
    v2 *= 8LL;
    if ( v2 >= result )
      return v2;
  }
  return result;
}
