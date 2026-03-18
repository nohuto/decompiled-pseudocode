/*
 * XREFs of MmGetAvailablePages @ 0x140203F24
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409464DC (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * a1) + 7104LL);
}
