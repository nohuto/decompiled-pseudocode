/*
 * XREFs of IopUpdateOtherOperationCount @ 0x14022BCB0
 * Callers:
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *IopUpdateOtherOperationCount()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  ++result->OtherOperationCount;
  __incgsdword(0x2EE4u);
  return result;
}
