/*
 * XREFs of TR_GetWdfQueue @ 0x1C0008C70
 * Callers:
 *     Endpoint_Create @ 0x1C006A2E0 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetWdfQueue(__int64 a1)
{
  return *(_QWORD *)(a1 + 72);
}
