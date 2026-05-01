/*
 * XREFs of sub_180026FA4 @ 0x180026FA4
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_18002831C @ 0x18002831C (sub_18002831C.c)
 *     sub_180028ECC @ 0x180028ECC (sub_180028ECC.c)
 * Callees:
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 */

__int64 __fastcall sub_180026FA4(__int64 a1)
{
  __int64 i; // rax
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 648); (i & 0x1000000000000LL) != 0; i = *(_QWORD *)(a1 + 648) )
    sub_180005700(a1, a1 + 680, 0LL);
  result = i | 0x1000000000000LL;
  *(_QWORD *)(a1 + 648) = result;
  return result;
}
