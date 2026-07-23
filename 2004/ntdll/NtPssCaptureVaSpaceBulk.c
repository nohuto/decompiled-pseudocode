/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x18009F580
 * Callers:
 *     PsspQueryVmBulkMode @ 0x180115670 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 316;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
