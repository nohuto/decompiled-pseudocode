/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1405B8FA4
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x140959FA4 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
