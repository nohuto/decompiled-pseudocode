/*
 * XREFs of sub_180036540 @ 0x180036540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_180036540(__int64 a1, void *a2)
{
  BOOL result; // eax

  if ( a2 )
    return HeapFree(*(HANDLE *)(a1 + 8), 0, a2);
  return result;
}
