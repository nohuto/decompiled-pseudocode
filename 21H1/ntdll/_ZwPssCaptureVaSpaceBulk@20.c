/*
 * XREFs of _ZwPssCaptureVaSpaceBulk@20 @ 0x4B2F3D40
 * Callers:
 *     PsspQueryVmBulkMode @ 0x4B387BC0 (PsspQueryVmBulkMode.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  return Wow64SystemServiceCall();
}
