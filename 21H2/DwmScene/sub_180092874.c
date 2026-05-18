/*
 * XREFs of sub_180092874 @ 0x180092874
 * Callers:
 *     sub_1800F9F20 @ 0x1800F9F20 (sub_1800F9F20.c)
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 *     sub_180111E90 @ 0x180111E90 (sub_180111E90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180092874(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 152);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_QWORD *)(a1 + 152) = result;
  return result;
}
