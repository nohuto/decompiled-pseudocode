/*
 * XREFs of AlpcpDereferenceProcess @ 0x1408BEE40
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BFAF8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpDereferenceProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x63706C41u);
}
