/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C0209EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D1C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0004A20 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C02099B8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209B28 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _WORD *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v25[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v26[3]; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v7, v8);
    return v5;
  }
  v9 = HMValidateHandleNoSecure((unsigned __int64)a2, 1);
  if ( v9 )
  {
    v25[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v25;
    v25[1] = v9;
    HMLockObject(v9);
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v9) )
      goto LABEL_23;
    v14 = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
    v15 = v14;
    if ( !v14 )
      goto LABEL_23;
    v12 = gptiCurrent;
    v11 = gptiCurrent;
    if ( *(_QWORD *)(v14 + 16) != gptiCurrent )
      goto LABEL_23;
    v13 = *(_WORD **)(*(_QWORD *)(v14 + 136) + 8LL);
    v11 = gpsi;
    v12 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( *v13 != (_WORD)v12 )
      goto LABEL_23;
    v26[2] = 0LL;
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v26[0] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v26;
    v26[1] = v15;
    HMLockObject(v15);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v15, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v9, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v15, 1);
        xxxShowGhostWindow((struct tagWND *)v15, (struct tagWND *)v9);
        if ( !(unsigned int)IsWindowBeingDestroyed(v15)
          && !(unsigned int)IsWindowBeingDestroyed(v9)
          && (HWND)GetProp(v15, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a2
          && (HWND)GetProp(v9, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v5 = 1;
          goto LABEL_22;
        }
        SetGhostFNID((struct tagWND *)v15, 0);
        if ( (HWND)GetProp(v9, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v20 = *(unsigned __int16 *)(gpsi + 1378LL);
          v21 = *(_QWORD *)(v9 + 144);
          if ( (_WORD)v20 == word_1C0339F54 )
            *(_QWORD *)(*(_QWORD *)(v9 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v21, v20, 1LL);
        }
        xxxHideGhostWindow((struct tagWND *)v15, (struct tagWND *)v9);
      }
      v22 = *(unsigned __int16 *)(gpsi + 1378LL);
      v23 = *(_QWORD *)(v15 + 144);
      if ( (_WORD)v22 == word_1C0339F54 )
        *(_QWORD *)(*(_QWORD *)(v15 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v23, v22, 1LL);
    }
LABEL_22:
    ThreadUnlock1(v18, v17, v19);
LABEL_23:
    ThreadUnlock1(v12, v11, v13);
  }
  return v5;
}
