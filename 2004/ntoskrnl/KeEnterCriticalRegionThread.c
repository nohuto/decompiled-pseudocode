/*
 * XREFs of KeEnterCriticalRegionThread @ 0x14024B6A0
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
