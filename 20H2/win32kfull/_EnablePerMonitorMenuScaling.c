/*
 * XREFs of _EnablePerMonitorMenuScaling @ 0x1C0236B90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall EnablePerMonitorMenuScaling(__int64 a1)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 2 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) |= 0x100000u;
  return 1LL;
}
