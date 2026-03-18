/*
 * XREFs of PspDeleteMemoryPartitionContext @ 0x14090B558
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteMemoryPartitionContext(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObjectWithTag(a1, 0x624A7350u);
  return result;
}
