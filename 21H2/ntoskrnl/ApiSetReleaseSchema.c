/*
 * XREFs of ApiSetReleaseSchema @ 0x1405BE7B8
 * Callers:
 *     PspSiloLoadApiSets @ 0x140906E74 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14095EB64 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
