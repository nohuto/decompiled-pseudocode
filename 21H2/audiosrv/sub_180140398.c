/*
 * XREFs of sub_180140398 @ 0x180140398
 * Callers:
 *     sub_1801402A4 @ 0x1801402A4 (sub_1801402A4.c)
 *     sub_18014034C @ 0x18014034C (sub_18014034C.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180140398(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_1800B8610(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 16);
  return sub_18013F4D0(a1, a2);
}
