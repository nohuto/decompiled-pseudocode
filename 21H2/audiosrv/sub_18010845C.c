/*
 * XREFs of sub_18010845C @ 0x18010845C
 * Callers:
 *     sub_1801083B4 @ 0x1801083B4 (sub_1801083B4.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18010845C(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_1800B8610(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 104) = *(_QWORD *)(a2 + 104);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 112) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 104);
  return sub_180106720(a1, a2);
}
