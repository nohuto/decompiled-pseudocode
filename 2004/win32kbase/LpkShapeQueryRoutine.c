/*
 * XREFs of LpkShapeQueryRoutine @ 0x1C0295620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LpkShapeQueryRoutine(__int64 a1, int a2, _DWORD *a3)
{
  if ( a2 == 4 )
    *((_DWORD *)gpGdiSharedMemory + 393253) |= 1 << *a3;
  return 0LL;
}
