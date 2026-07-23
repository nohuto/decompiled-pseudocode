/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1405BEEA4
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x14095EB64 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
