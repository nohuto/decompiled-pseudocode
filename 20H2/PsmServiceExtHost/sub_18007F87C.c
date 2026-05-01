/*
 * XREFs of sub_18007F87C @ 0x18007F87C
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 */

DWORD __fastcall sub_18007F87C(__int64 a1)
{
  __int64 v1; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 608;
  v4 = *(_DWORD *)(a1 + 608);
  sub_180023230(a1);
  RtlWaitOnAddress(v1, &v4, 4LL);
  return sub_1800277CC(a1);
}
