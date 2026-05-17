/*
 * XREFs of _ApiSetQueryApiSetPresenceEx@12 @ 0x4B2D0200
 * Callers:
 *     <none>
 * Callees:
 *     _ApiSetQuerySchemaInfo@16 @ 0x4B2D0221 (_ApiSetQuerySchemaInfo@16.c)
 */

int __stdcall ApiSetQueryApiSetPresenceEx(int a1, int a2, int a3)
{
  return ApiSetQuerySchemaInfo(a2, a3);
}
