/*
 * XREFs of AlpcpReferenceProcess @ 0x1408C2634
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3260 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReferenceProcess(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x63706C41u);
}
