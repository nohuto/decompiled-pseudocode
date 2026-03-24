/*
 * XREFs of KiVerifyXcptFilter @ 0x140A668BC
 * Callers:
 *     KiVerifyXcpt2 @ 0x140A661DC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140A66330 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140A66380 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A663D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A66420 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A66470 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A664C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A66520 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A66580 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A665E0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A66640 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140A66750 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140A667A0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A66810 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A66860 (KiVerifyXcpt14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
