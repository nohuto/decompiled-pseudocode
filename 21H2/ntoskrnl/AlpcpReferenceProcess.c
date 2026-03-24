/*
 * XREFs of AlpcpReferenceProcess @ 0x1408C24D4
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3100 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReferenceProcess(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x63706C41u);
}
