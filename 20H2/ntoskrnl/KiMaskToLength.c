/*
 * XREFs of KiMaskToLength @ 0x1409A1B14
 * Callers:
 *     KiInitializeMTRR @ 0x140A4B924 (KiInitializeMTRR.c)
 * Callees:
 *     RtlFindLeastSignificantBit @ 0x14031E900 (RtlFindLeastSignificantBit.c)
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
