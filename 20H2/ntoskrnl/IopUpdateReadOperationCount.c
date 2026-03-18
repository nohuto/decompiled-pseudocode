/*
 * XREFs of IopUpdateReadOperationCount @ 0x140209F0C
 * Callers:
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *IopUpdateReadOperationCount()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  ++result->ReadOperationCount;
  __incgsdword(0x2EDCu);
  return result;
}
