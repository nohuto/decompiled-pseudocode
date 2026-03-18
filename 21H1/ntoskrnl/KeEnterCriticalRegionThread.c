/*
 * XREFs of KeEnterCriticalRegionThread @ 0x1402A46D0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeEnterCriticalRegionThread(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
}
