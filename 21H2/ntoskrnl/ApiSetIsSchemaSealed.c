/*
 * XREFs of ApiSetIsSchemaSealed @ 0x140647850
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x140A0A644 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
