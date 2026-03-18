/*
 * XREFs of _IAMKeyAcquired@4 @ 0x1419CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall IAMKeyAcquired(int a1)
{
  return *(_DWORD *)(a1 + 176) != 0;
}
