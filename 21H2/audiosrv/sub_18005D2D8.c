/*
 * XREFs of sub_18005D2D8 @ 0x18005D2D8
 * Callers:
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 * Callees:
 *     sub_18005444C @ 0x18005444C (sub_18005444C.c)
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

void __fastcall sub_18005D2D8(__int64 a1)
{
  double v2; // xmm9_8
  double v3; // xmm0_8

  v2 = o_pow();
  v3 = o_pow();
  *(_QWORD *)(a1 + 24) = sub_18005444C((_DWORD *)a1, v3).m128_u64[0];
  *(_QWORD *)(a1 + 32) = sub_18005444C((_DWORD *)a1, v2).m128_u64[0];
}
