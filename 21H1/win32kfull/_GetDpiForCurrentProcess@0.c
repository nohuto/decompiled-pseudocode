/*
 * XREFs of _GetDpiForCurrentProcess@0 @ 0x1B71EF
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

__int16 __stdcall GetDpiForCurrentProcess()
{
  return *(_WORD *)(PsGetCurrentProcessWin32Process() + 160);
}
