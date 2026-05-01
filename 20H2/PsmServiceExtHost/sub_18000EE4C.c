/*
 * XREFs of sub_18000EE4C @ 0x18000EE4C
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180008EE4 @ 0x180008EE4 (sub_180008EE4.c)
 *     sub_18000DC14 @ 0x18000DC14 (sub_18000DC14.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000EE4C(__int64 a1)
{
  if ( *(int *)(a1 - 40) < 0 )
    return 0LL;
  ++*(_QWORD *)(a1 + 592);
  return 1LL;
}
