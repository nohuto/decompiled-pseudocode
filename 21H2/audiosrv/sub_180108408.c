/*
 * XREFs of sub_180108408 @ 0x180108408
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 *     sub_180108B57 @ 0x180108B57 (sub_180108B57.c)
 *     sub_180108B84 @ 0x180108B84 (sub_180108B84.c)
 *     sub_180108CC0 @ 0x180108CC0 (sub_180108CC0.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180108408(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 48) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 40); i != a2; i = *(_QWORD *)(i + 40) )
      v3 = i;
  }
  return sub_1801084B0(a1, a2, v3);
}
