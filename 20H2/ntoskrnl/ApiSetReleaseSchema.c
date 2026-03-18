/*
 * XREFs of ApiSetReleaseSchema @ 0x1405BCB38
 * Callers:
 *     PspSiloLoadApiSets @ 0x140909564 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140961104 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
