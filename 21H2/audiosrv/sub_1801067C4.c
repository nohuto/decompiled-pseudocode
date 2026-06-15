/*
 * XREFs of sub_1801067C4 @ 0x1801067C4
 * Callers:
 *     sub_180108310 @ 0x180108310 (sub_180108310.c)
 *     sub_1801084B0 @ 0x1801084B0 (sub_1801084B0.c)
 * Callees:
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180108014 @ 0x180108014 (sub_180108014.c)
 */

__int64 __fastcall sub_1801067C4(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // eax

  if ( !a2 )
    sub_1800B8610(-2147467259);
  v4 = *(std::_Ref_count_base **)(a2 + 32);
  if ( v4 )
    sub_180052600(v4);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  result = v5;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v5 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v7 = sub_1800CF858(a1, v5);
    sub_180108014(a1, v7);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
    return sub_18005248C(a1);
  return result;
}
