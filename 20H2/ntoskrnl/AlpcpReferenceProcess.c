/*
 * XREFs of AlpcpReferenceProcess @ 0x1408C4D14
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReferenceProcess(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x63706C41u);
}
