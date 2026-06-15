/*
 * XREFs of sub_180138D68 @ 0x180138D68
 * Callers:
 *     sub_180138EA0 @ 0x180138EA0 (sub_180138EA0.c)
 * Callees:
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_180138FF0 @ 0x180138FF0 (sub_180138FF0.c)
 *     sub_18013909C @ 0x18013909C (sub_18013909C.c)
 *     sub_18013A0F0 @ 0x18013A0F0 (sub_18013A0F0.c)
 */

__int64 __fastcall sub_180138D68(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx

  *a1 = off_180147890;
  v2 = a1 + 16;
  sub_180138FF0(a1, a1 + 16);
  sub_18013909C(v3, a1 + 25);
  sub_1800C28E0(a1 + 25);
  sub_18013A0F0(v2);
  sub_1800F4CBC((__int64)(a1 + 10));
  return sub_18013A194(a1 + 1);
}
