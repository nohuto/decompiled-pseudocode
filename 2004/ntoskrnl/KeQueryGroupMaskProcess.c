/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14027D64C
 * Callers:
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x14065F68C (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
