/*
 * XREFs of ShouldProcessHungWindow @ 0x1C011EBC0
 * Callers:
 *     ProcessHungWindow @ 0x1C000379C (ProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00037EC (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     NtUserQueryWindow @ 0x1C00C8330 (NtUserQueryWindow.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     IsHungWindow @ 0x1C00CAEE0 (IsHungWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011EC38 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall ShouldProcessHungWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rdi

  v1 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow
    && (unsigned int)IsHungWindow(TopLevelWindow)
    && (unsigned int)_ShouldGhostWindow(v3)
    && !GetProp((__int64)v3, *(unsigned __int16 *)(gpsi + 900LL), 1LL)
    && !(unsigned int)GetWindowCloakState(v3) )
  {
    return v3;
  }
  return (struct tagWND *)v1;
}
