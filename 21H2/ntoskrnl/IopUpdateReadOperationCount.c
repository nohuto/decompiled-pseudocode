/*
 * XREFs of IopUpdateReadOperationCount @ 0x140232B24
 * Callers:
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
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
