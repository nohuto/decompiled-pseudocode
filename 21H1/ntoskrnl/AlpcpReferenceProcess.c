/*
 * XREFs of AlpcpReferenceProcess @ 0x1408BDC14
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReferenceProcess(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x63706C41u);
}
