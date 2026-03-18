/*
 * XREFs of MmGetAvailablePages @ 0x14023EAB4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094D53C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * a1) + 7104LL);
}
