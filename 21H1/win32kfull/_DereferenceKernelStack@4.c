/*
 * XREFs of _DereferenceKernelStack@4 @ 0xAEBEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __stdcall DereferenceKernelStack(PVOID Object)
{
  PsDereferenceKernelStack(Object);
  return ObfDereferenceObject(Object);
}
