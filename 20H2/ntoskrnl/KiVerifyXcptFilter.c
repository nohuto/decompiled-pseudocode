/*
 * XREFs of KiVerifyXcptFilter @ 0x140A6529C
 * Callers:
 *     KiVerifyXcpt2 @ 0x140A64BBC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140A64D10 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140A64D60 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A64DB0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A64E00 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A64E50 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A64EA0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A64F00 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A64F60 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A64FC0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A65020 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140A65130 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140A65180 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A651F0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A65240 (KiVerifyXcpt14.c)
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
