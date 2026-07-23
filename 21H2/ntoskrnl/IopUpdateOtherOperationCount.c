/*
 * XREFs of IopUpdateOtherOperationCount @ 0x1402D0560
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
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
