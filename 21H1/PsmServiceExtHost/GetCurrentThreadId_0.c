/*
 * XREFs of GetCurrentThreadId_0 @ 0x1800453E6
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x180086FA4 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
