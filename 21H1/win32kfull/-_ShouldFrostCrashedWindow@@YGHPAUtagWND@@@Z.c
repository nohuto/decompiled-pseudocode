/*
 * XREFs of ?_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z @ 0x16FC5F
 * Callers:
 *     _xxxFrostCrashedWindow@8 @ 0x170644 (_xxxFrostCrashedWindow@8.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 */

int __thiscall _ShouldFrostCrashedWindow(_DWORD *this)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v6; // [esp+Ch] [ebp-4h]

  v2 = 0;
  v3 = (_DWORD *)this[2];
  v6 = (_DWORD *)v3[58];
  if ( !IsWindowBeingDestroyed(this)
    && _IsTopLevelWindow(this)
    && v3[62] == _grpdeskRitInput
    && !IsGhostWindowClass(this)
    && (v6[2] & 0x8000000) == 0
    && *v6 != _gpepCSRSS
    && !IsProcessDwm(*v6)
    && !PsGetProcessDebugPort(*(_DWORD *)v3[58]) )
  {
    v4 = 0;
    if ( v3[85] <= 0x9900u )
      v4 = v3[88];
    if ( ((unsigned int)&loc_80000 & v4) == 0 && this != (_DWORD *)_GetDesktopWindow(this) )
      return 1;
  }
  return v2;
}
