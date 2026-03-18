/*
 * XREFs of IopUpdateWriteOperationCount @ 0x1402A36B0
 * Callers:
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *IopUpdateWriteOperationCount()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  ++result->WriteOperationCount;
  __incgsdword(0x2EE0u);
  return result;
}
