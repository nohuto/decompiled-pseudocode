/*
 * XREFs of AlpcpDereferenceProcess @ 0x1408C23B0
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3100 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpDereferenceProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x63706C41u);
}
