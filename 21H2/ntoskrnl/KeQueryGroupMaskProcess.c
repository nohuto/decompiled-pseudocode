/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1402D7598
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
