/*
 * XREFs of ApiSetReleaseSchema @ 0x1405B88B8
 * Callers:
 *     PspSiloLoadApiSets @ 0x140902B34 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140959FA4 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
