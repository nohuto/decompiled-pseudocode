/*
 * XREFs of AlpcpDereferenceProcess @ 0x1408C4BF0
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpDereferenceProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x63706C41u);
}
