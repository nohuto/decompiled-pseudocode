/*
 * XREFs of IopUpdateOtherOperationCount @ 0x1402F672C
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
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
