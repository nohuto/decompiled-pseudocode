/*
 * XREFs of _MNSetupAnimationDC@4 @ 0xD6DB0
 * Callers:
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     _MNAllocMenuState@4 @ 0x1843C6 (_MNAllocMenuState@4.c)
 * Callees:
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 */

int __thiscall MNSetupAnimationDC(HDC *this)
{
  HDC CompatibleDC; // eax
  int *ProcessDpiMetrics; // eax

  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_DWORD *)(_gpDispInfo + 28));
  this[24] = CompatibleDC;
  if ( !CompatibleDC )
    return 0;
  GreSetDCOwnerEx(CompatibleDC, 0, 0, 0);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    ProcessDpiMetrics = (int *)GetProcessDpiMetrics();
  else
    ProcessDpiMetrics = (int *)Get96DpiMetrics();
  GreSelectFont(this[24], *ProcessDpiMetrics);
  return 1;
}
