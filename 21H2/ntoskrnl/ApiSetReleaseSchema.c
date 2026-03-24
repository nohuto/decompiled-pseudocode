/*
 * XREFs of ApiSetReleaseSchema @ 0x1405BE588
 * Callers:
 *     PspSiloLoadApiSets @ 0x140906D14 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14095E984 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ExFreeHeapPool(a1, a2, a3, a4);
  return 1;
}
