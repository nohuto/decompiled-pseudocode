/*
 * XREFs of sub_180036570 @ 0x180036570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_180036570(__int64 a1, void *a2, SIZE_T a3)
{
  void *v3; // rcx

  v3 = *(void **)(a1 + 8);
  if ( !a2 )
    return HeapAlloc(v3, 0, a3);
  if ( a3 )
    return HeapReAlloc(v3, 0, a2, a3);
  HeapFree(v3, 0, a2);
  return 0LL;
}
