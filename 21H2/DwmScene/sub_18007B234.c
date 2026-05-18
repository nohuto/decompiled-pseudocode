/*
 * XREFs of sub_18007B234 @ 0x18007B234
 * Callers:
 *     sub_1800971B0 @ 0x1800971B0 (sub_1800971B0.c)
 *     sub_18009F380 @ 0x18009F380 (sub_18009F380.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18007B234(__int64 a1, int a2, int a3)
{
  return (a3 & *(_DWORD *)(a1 + 4LL * a2 + 748)) != 0;
}
