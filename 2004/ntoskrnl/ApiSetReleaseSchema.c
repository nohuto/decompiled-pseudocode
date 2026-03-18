/*
 * XREFs of ApiSetReleaseSchema @ 0x1405B8FD8
 * Callers:
 *     PspSiloLoadApiSets @ 0x140903944 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14095B344 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
