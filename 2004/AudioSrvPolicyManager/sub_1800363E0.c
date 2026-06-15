/*
 * XREFs of sub_1800363E0 @ 0x1800363E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_1800363E0(__int64 a1, void *a2)
{
  BOOL result; // eax

  if ( a2 )
    return HeapFree(*(HANDLE *)(*(_QWORD *)(a1 + 8) + 8LL), 0, a2);
  return result;
}
