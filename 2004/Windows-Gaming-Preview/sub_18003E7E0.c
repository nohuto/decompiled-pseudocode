/*
 * XREFs of sub_18003E7E0 @ 0x18003E7E0
 * Callers:
 *     sub_18003E850 @ 0x18003E850 (sub_18003E850.c)
 * Callees:
 *     sub_18000228C @ 0x18000228C (sub_18000228C.c)
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 */

__int64 __fastcall sub_18003E7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  unsigned int v9; // ebx

  v9 = sub_18000228C(a8);
  sub_180002F40(
    a1,
    14,
    (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
    0LL,
    0LL,
    a6,
    1,
    v9,
    0LL,
    0);
  return v9;
}
