/*
 * XREFs of ExpNlsDeleteSiloState @ 0x14063C25C
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1409ABED8 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExpNlsDeleteSiloState(ULONG_PTR BugCheckParameter3)
{
  void *v2; // rcx

  v2 = *(void **)(BugCheckParameter3 + 8);
  if ( (unsigned __int64)v2 > 1 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  return ExFreeHeapPool(BugCheckParameter3);
}
