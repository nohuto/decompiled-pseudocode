/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14020433C
 * Callers:
 *     PspWritePebAffinityInfo @ 0x1405D938C (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
