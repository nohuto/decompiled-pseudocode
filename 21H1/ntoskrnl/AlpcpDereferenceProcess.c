/*
 * XREFs of AlpcpDereferenceProcess @ 0x1408BDAF0
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpDereferenceProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x63706C41u);
}
