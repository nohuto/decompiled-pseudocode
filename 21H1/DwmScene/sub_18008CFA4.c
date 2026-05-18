/*
 * XREFs of sub_18008CFA4 @ 0x18008CFA4
 * Callers:
 *     sub_1800F4650 @ 0x1800F4650 (sub_1800F4650.c)
 *     sub_18010A610 @ 0x18010A610 (sub_18010A610.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 *     sub_18010C5C0 @ 0x18010C5C0 (sub_18010C5C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008CFA4(__int64 a1, __int64 a2, char a3)
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
