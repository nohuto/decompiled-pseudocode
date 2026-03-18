/*
 * XREFs of DbgkCleanupServerSiloState @ 0x140886DB8
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x140908AFC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall DbgkCleanupServerSiloState(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    result = ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
