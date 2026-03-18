/*
 * XREFs of _ShouldProcessHungWindow@4 @ 0xC25A4
 * Callers:
 *     _NtUserQueryWindow@8 @ 0x920B2 (_NtUserQueryWindow@8.c)
 *     ?_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z @ 0xC2514 (-_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z.c)
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     ?_ShouldGhostWindow@@YGHPAUtagWND@@@Z @ 0xC25FC (-_ShouldGhostWindow@@YGHPAUtagWND@@@Z.c)
 */

_DWORD *__thiscall ShouldProcessHungWindow(void *this)
{
  int v1; // edi
  int TopLevelWindow; // eax
  _DWORD *v3; // esi
  struct tagWND *v5; // [esp+0h] [ebp-Ch]

  v1 = 0;
  TopLevelWindow = _GetTopLevelWindow((int)this);
  v3 = (_DWORD *)TopLevelWindow;
  if ( TopLevelWindow
    && IsHungWindow(TopLevelWindow)
    && _ShouldGhostWindow(v5)
    && !_GetProp((int)v3, *(unsigned __int16 *)(_gpsi + 500), 1)
    && !GetWindowCloakState(v3) )
  {
    return v3;
  }
  return (_DWORD *)v1;
}
