/*
 * XREFs of KeEnterCriticalRegionThread @ 0x14025B380
 * Callers:
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
