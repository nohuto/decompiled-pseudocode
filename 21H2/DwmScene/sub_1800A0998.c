/*
 * XREFs of sub_1800A0998 @ 0x1800A0998
 * Callers:
 *     sub_18004609C @ 0x18004609C (sub_18004609C.c)
 *     sub_1800F98EC @ 0x1800F98EC (sub_1800F98EC.c)
 * Callees:
 *     sub_18003E878 @ 0x18003E878 (sub_18003E878.c)
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A0998(_QWORD *a1)
{
  sub_180067A50((__int64)a1);
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_18003E878((__int64)(a1 + 12));
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
