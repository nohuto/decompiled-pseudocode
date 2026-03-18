/*
 * XREFs of KiMaskToLength @ 0x140A5A21C
 * Callers:
 *     KiInitializeMTRR @ 0x140B1A508 (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x1402471E0 (RtlFindLeastSignificantBit.c)
 */

__int64 __fastcall KiMaskToLength(ULONGLONG a1)
{
  CCHAR LeastSignificantBit; // cl

  if ( a1 )
    LeastSignificantBit = RtlFindLeastSignificantBit(a1);
  else
    LeastSignificantBit = KiMtrrMaxRangeShift;
  return 1LL << LeastSignificantBit;
}
