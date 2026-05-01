/*
 * XREFs of sub_18007E404 @ 0x18007E404
 * Callers:
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 * Callees:
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 */

_QWORD *__fastcall sub_18007E404(__int64 a1, int a2)
{
  sub_18000E1BC(a1);
  *(_DWORD *)(a1 + 92) += a2;
  return sub_18000E244(a1);
}
