/*
 * XREFs of KiVerifyXcptFilter @ 0x140A5EE9C
 * Callers:
 *     KiVerifyXcpt2 @ 0x140A5E7BC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140A5E910 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140A5E960 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A5E9B0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A5EA00 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A5EA50 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A5EAA0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A5EB00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A5EB60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A5EBC0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A5EC20 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140A5ED30 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140A5ED80 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A5EDF0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A5EE40 (KiVerifyXcpt14.c)
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
