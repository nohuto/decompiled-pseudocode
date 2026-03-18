/*
 * XREFs of MmGetPeakCommitment @ 0x140203F84
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetPeakCommitment(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * a1) + 6208LL);
}
