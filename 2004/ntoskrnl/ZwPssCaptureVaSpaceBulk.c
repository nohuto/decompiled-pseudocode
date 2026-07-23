/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x1403F5D40
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
