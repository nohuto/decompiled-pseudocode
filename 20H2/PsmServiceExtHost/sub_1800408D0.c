/*
 * XREFs of sub_1800408D0 @ 0x1800408D0
 * Callers:
 *     sub_180040460 @ 0x180040460 (sub_180040460.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 */

__int64 __fastcall sub_1800408D0(__int64 a1)
{
  int v2; // ebx
  DWORD TickCount; // eax

  sub_18001E380();
  v2 = *(_DWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 568) = GetTickCount();
  TickCount = GetTickCount();
  sub_18003E4CC(a1, (v2 & 1) != 0 ? 3600000 : 900000, TickCount);
  sub_18000F390();
  return 0LL;
}
