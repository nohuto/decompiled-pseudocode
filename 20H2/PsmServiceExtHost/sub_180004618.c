/*
 * XREFs of sub_180004618 @ 0x180004618
 * Callers:
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 * Callees:
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_18002247C @ 0x18002247C (sub_18002247C.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 */

__int64 __fastcall sub_180004618(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_18000E1BC(a1);
  RtlRbRemoveNode(a1 + 56, a2 + 704);
  *(_QWORD *)(a2 + 720) = -1LL;
  sub_18002247C(a1);
  sub_18000E244(a1);
  result = sub_1800286D8(a1);
  *(_QWORD *)(a2 + 688) = 0LL;
  return result;
}
