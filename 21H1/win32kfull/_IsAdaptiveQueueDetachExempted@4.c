/*
 * XREFs of _IsAdaptiveQueueDetachExempted@4 @ 0xC1162
 * Callers:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _EditionMouseMoveShellResilience@4 @ 0xA4760 (_EditionMouseMoveShellResilience@4.c)
 *     _IsShellFrameHangResilient@4 @ 0xAEC08 (_IsShellFrameHangResilient@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     _IsDebuggerAttached@4 @ 0x197BE (_IsDebuggerAttached@4.c)
 *     ?IsAppShellGhosted@@YGHPAUtagTHREADINFO@@@Z @ 0xC11B0 (-IsAppShellGhosted@@YGHPAUtagTHREADINFO@@@Z.c)
 */

BOOL __thiscall IsAdaptiveQueueDetachExempted(int this)
{
  int v2; // ecx
  BOOL result; // eax
  struct tagTHREADINFO *v4; // [esp+0h] [ebp-4h]

  result = 1;
  if ( *(_DWORD *)(this + 796) )
  {
    if ( !IsAppShellGhosted(v4) && !IsDebuggerAttached(*(_DWORD **)(this + 232)) )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(this + 796) + 60);
      if ( !v2 || !IsDebuggerAttached(*(_DWORD **)(*(_DWORD *)(v2 + 8) + 232)) )
        return 0;
    }
  }
  return result;
}
