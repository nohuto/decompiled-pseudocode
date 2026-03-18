/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1405BD224
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x140961104 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
