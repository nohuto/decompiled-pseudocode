/*
 * XREFs of WaitForMultipleObjects @ 0x180046150
 * Callers:
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WaitForMultipleObjects(DWORD nCount, const HANDLE *lpHandles, BOOL bWaitAll, DWORD dwMilliseconds)
{
  return __imp_WaitForMultipleObjects(nCount, lpHandles, bWaitAll, dwMilliseconds);
}
