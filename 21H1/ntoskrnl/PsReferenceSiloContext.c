/*
 * XREFs of PsReferenceSiloContext @ 0x14031C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceSiloContext(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x746C6644u);
}
