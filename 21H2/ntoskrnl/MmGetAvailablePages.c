/*
 * XREFs of MmGetAvailablePages @ 0x140269500
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14063B5F0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AEDC (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * a1) + 7104LL);
}
