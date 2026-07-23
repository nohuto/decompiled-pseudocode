/*
 * XREFs of KiVerifyXcptFilter @ 0x140A678BC
 * Callers:
 *     KiVerifyXcpt2 @ 0x140A671DC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140A67330 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140A67380 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A673D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A67420 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A67470 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A674C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A67520 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A67580 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A675E0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A67640 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140A67750 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140A677A0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A67810 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A67860 (KiVerifyXcpt14.c)
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
