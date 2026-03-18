/*
 * XREFs of DbgkCleanupServerSiloState @ 0x140881268
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x140902EEC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
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
