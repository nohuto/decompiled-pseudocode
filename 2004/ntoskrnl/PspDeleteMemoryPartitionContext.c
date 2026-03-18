/*
 * XREFs of PspDeleteMemoryPartitionContext @ 0x140905938
 * Callers:
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteMemoryPartitionContext(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObjectWithTag(a1, 0x624A7350u);
  return result;
}
