/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1405B96C4
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x14095B344 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
