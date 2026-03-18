/*
 * XREFs of PsReferenceSiloContext @ 0x14035A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceSiloContext(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x746C6644u);
}
