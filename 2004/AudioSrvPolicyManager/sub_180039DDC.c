/*
 * XREFs of sub_180039DDC @ 0x180039DDC
 * Callers:
 *     ActivatePolicyManager @ 0x1800059F0 (ActivatePolicyManager.c)
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 *     sub_180007980 @ 0x180007980 (sub_180007980.c)
 *     sub_180007EA0 @ 0x180007EA0 (sub_180007EA0.c)
 *     sub_18000D298 @ 0x18000D298 (sub_18000D298.c)
 *     sub_18000F6B8 @ 0x18000F6B8 (sub_18000F6B8.c)
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180017200 @ 0x180017200 (sub_180017200.c)
 *     sub_180018308 @ 0x180018308 (sub_180018308.c)
 *     sub_18001E14C @ 0x18001E14C (sub_18001E14C.c)
 *     sub_180025854 @ 0x180025854 (sub_180025854.c)
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 *     sub_180029FD4 @ 0x180029FD4 (sub_180029FD4.c)
 *     sub_18002A698 @ 0x18002A698 (sub_18002A698.c)
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 *     sub_18002FEBC @ 0x18002FEBC (sub_18002FEBC.c)
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 * Callees:
 *     sub_18000218C @ 0x18000218C (sub_18000218C.c)
 */

LPVOID __fastcall sub_180039DDC(SIZE_T a1)
{
  LPVOID result; // rax

  try
  {
    result = sub_18000218C(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
