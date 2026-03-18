/*
 * XREFs of _NtUserGetForegroundWindow@0 @ 0x25C7C
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __usercall NtUserGetForegroundWindow@<eax>(const struct tagWND *a1@<edi>)
{
  int v1; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *v3; // ecx
  int *v4; // edi
  struct tagWND *TopLevelHostForComponent; // eax
  int *TopLevelWindow; // eax

  v1 = 0;
  EnterSharedCrit(0, 1);
  if ( _gpqForeground )
  {
    if ( *(_DWORD *)(_gpqForeground + 64) )
    {
      CurrentThread = KeGetCurrentThread();
      v3 = (_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248);
      v4 = *(int **)(_gpqForeground + 64);
      if ( *v3 == v4[3] )
      {
        TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
        TopLevelWindow = (int *)_GetTopLevelWindow(TopLevelHostForComponent);
        if ( TopLevelWindow )
          v4 = TopLevelWindow;
        v1 = *v4;
      }
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
