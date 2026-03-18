/*
 * XREFs of IopUpdateOtherOperationCount @ 0x14020A4D0
 * Callers:
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
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
