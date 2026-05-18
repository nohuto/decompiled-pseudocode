/*
 * XREFs of sub_18010781C @ 0x18010781C
 * Callers:
 *     sub_180107790 @ 0x180107790 (sub_180107790.c)
 * Callees:
 *     sub_180018764 @ 0x180018764 (sub_180018764.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010781C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    sub_18001CDF8((_QWORD *)a3, i);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 32);
    sub_180018764((_QWORD *)(a3 + 40), i + 40);
    a3 += 64LL;
  }
  return a3;
}
