/*
 * XREFs of MmGetPeakCommitment @ 0x14027B5C0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140646800 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetPeakCommitment(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 6208LL);
}
