/*
 * XREFs of TR_GetWdfQueue @ 0x1C0001E60
 * Callers:
 *     Endpoint_Create @ 0x1C006B6C8 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetWdfQueue(__int64 a1)
{
  return *(_QWORD *)(a1 + 72);
}
