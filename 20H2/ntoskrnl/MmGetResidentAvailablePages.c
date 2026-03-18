/*
 * XREFs of MmGetResidentAvailablePages @ 0x14023EBF4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetResidentAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * a1) + 7168LL);
}
