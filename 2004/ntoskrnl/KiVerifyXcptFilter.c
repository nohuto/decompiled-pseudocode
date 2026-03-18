/*
 * XREFs of KiVerifyXcptFilter @ 0x140A5DF3C
 * Callers:
 *     KiVerifyXcpt2 @ 0x140A5D85C (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140A5D9B0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140A5DA00 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A5DA50 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A5DAA0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A5DAF0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A5DB40 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A5DBA0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A5DC00 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A5DC60 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A5DCC0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140A5DDD0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140A5DE20 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A5DE90 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A5DEE0 (KiVerifyXcpt14.c)
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
