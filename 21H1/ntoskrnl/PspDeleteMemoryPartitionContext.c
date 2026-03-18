/*
 * XREFs of PspDeleteMemoryPartitionContext @ 0x140904658
 * Callers:
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteMemoryPartitionContext(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObjectWithTag(a1, 0x624A7350u);
  return result;
}
