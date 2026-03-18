/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C00C7370
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C00C7498 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct tagWND *v10; // rbp
  unsigned int v11; // edi
  unsigned int v12; // ebx
  InteractiveControlManager *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = 0LL;
  if ( a3 )
  {
    v10 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v10 )
      goto LABEL_11;
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v18;
  *((_QWORD *)&v18 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87LL, v6, v7);
  }
  else
  {
    v11 = 761;
    v12 = 744;
    if ( a2 )
    {
      v11 = a2;
      v12 = a2;
    }
    v13 = InteractiveControlManager::Instance();
    LOBYTE(v8) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v13, a1, v12, v11, v10) >= 0;
  }
  ThreadUnlock1(v15, v14, v16);
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v6, v7);
  return v8;
}
