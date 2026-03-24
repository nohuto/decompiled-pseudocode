/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14025C828
 * Callers:
 *     MmCreatePeb @ 0x140611D98 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x140612654 (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
