/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z @ 0x7D75E
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YG_NPAUtagWND@@@Z @ 0x7D7DC (-BeginGetWidnowTrackInfoAsync@@YG_NPAUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?AnyBehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z @ 0xF4E04 (-AnyBehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z @ 0xF4E7E (-EligibleWindow@ShellWindowManagement@@YG_NPAUtagWND@@@Z.c)
 */

BOOL __stdcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  int v1; // edi
  ShellWindowManagement *v3; // [esp+0h] [ebp-Ch]
  ShellWindowManagement *v4; // [esp+0h] [ebp-Ch]
  struct tagWND *v5; // [esp+0h] [ebp-Ch]
  const struct tagDESKTOP *v6; // [esp+4h] [ebp-8h]
  struct tagWND *v7; // [esp+4h] [ebp-8h]

  v1 = *((_DWORD *)a1 + 2);
  if ( IAMThreadAccessGranted(_gptiCurrent)
    && IsShellProcess(*(_DWORD **)(_gptiCurrent + 232))
    && _gptiCurrent != v1
    && ShellWindowManagement::AnyBehaviorEnabled(v3, v6)
    && ShellWindowManagement::EligibleWindow(v4, v7)
    && (*(_BYTE *)(v1 + 688) & 0x20) == 0
    && !IsThreadHung((_DWORD *)v1, 0) )
  {
    return BeginGetWidnowTrackInfoAsync(v5);
  }
  UserSetLastError(5);
  return 0;
}
