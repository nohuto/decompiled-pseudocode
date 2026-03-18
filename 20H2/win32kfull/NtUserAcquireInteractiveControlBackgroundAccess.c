/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C000AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C000ABE8 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C000ACA4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rsi
  struct tagWND *v7; // rbp
  unsigned int v8; // edi
  unsigned int v9; // ebx
  InteractiveControlManager *v10; // rax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( a3 )
  {
    v7 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v7 )
      goto LABEL_11;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v12;
  *((_QWORD *)&v12 + 1) = v7;
  if ( v7 )
    HMLockObject(v7);
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v8 = 761;
    v9 = 744;
    if ( a2 )
    {
      v8 = a2;
      v9 = a2;
    }
    v10 = InteractiveControlManager::Instance();
    LOBYTE(v6) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v10, a1, v9, v8, v7) >= 0;
  }
  ThreadUnlock1();
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v6;
}
