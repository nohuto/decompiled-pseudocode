/*
 * XREFs of IopUpdateWriteOperationCount @ 0x140209EB8
 * Callers:
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
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
