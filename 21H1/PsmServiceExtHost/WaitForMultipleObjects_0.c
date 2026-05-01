/*
 * XREFs of WaitForMultipleObjects_0 @ 0x180046120
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180087028 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall WaitForMultipleObjects_0(DWORD nCount, const HANDLE *lpHandles, BOOL bWaitAll, DWORD dwMilliseconds)
{
  return WaitForMultipleObjects(nCount, lpHandles, bWaitAll, dwMilliseconds);
}
