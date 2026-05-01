/*
 * XREFs of GetCurrentThreadId_0 @ 0x180044E96
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x1800879D4 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
