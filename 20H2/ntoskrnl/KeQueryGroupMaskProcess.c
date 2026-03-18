/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14023EF60
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1406ADCA4 (PspWritePebAffinityInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
