/*
 * XREFs of DereferenceKernelStack @ 0x1C01238F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceKernelStack(PVOID Object)
{
  PsDereferenceKernelStack();
  return ObfDereferenceObject(Object);
}
