/*
 * XREFs of _xxxEnableWindow@8 @ 0x18A3C
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxEnableScrollBar@12 @ 0x8E0EE (_xxxEnableScrollBar@12.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z @ 0x18A7C (-xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ExemptedFromImmersiveRestrictions@4 @ 0x141D39 (_ExemptedFromImmersiveRestrictions@4.c)
 */

int __thiscall xxxEnableWindow(void *this, int a2, int a3)
{
  int CurrentProcessWin32Process; // eax
  struct tagWND *v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  if ( IsNonImmersiveBand(a2) )
    return xxxEnableWindowWorker(v5, v6);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !IsDesktopApp(CurrentProcessWin32Process) || ExemptedFromImmersiveRestrictions(_gptiCurrent) )
    return xxxEnableWindowWorker(v5, v6);
  UserSetLastError(5);
  return (*(unsigned __int8 *)(*(_DWORD *)(a2 + 20) + 23) >> 3) & 1;
}
