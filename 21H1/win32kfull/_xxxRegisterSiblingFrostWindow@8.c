/*
 * XREFs of _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7
 * Callers:
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YGHPAUtagWND@@H@Z @ 0xC24DC (-SetGhostFNID@@YGHPAUtagWND@@H@Z.c)
 *     ?SetFrostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0x16FC1D (-SetFrostProp@@YGHPAUtagWND@@PAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z @ 0x16FD0E (-_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 */

int __stdcall xxxRegisterSiblingFrostWindow(unsigned int a1, unsigned int a2)
{
  int v2; // ebx
  int CurrentProcess; // eax
  int *v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v7; // esi
  PKTHREAD v8; // eax
  int v9; // eax
  int v10; // ecx
  _DWORD v12[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( !IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return v2;
  }
  v4 = (int *)HMValidateHandleNoSecure(a2, 1);
  if ( v4 )
  {
    v13[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v13[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v13;
    v13[1] = v4;
    HMLockObject(v4);
    if ( !_ShouldFrostSiblingWindow(v4) )
      goto LABEL_19;
    v7 = (_DWORD *)HMValidateHandleNoSecure(a1, 1);
    if ( !v7 || v7[2] != _gptiCurrent || !IsGhostWindowClass(v7) )
      goto LABEL_19;
    v12[2] = 0;
    v8 = KeGetCurrentThread();
    v9 = W32GetThreadWin32Thread(v8);
    v12[0] = *(_DWORD *)(v9 + 228);
    *(_DWORD *)(v9 + 228) = v12;
    v12[1] = v7;
    HMLockObject(v7);
    if ( SetFrostProp((int)v7, a2) )
    {
      if ( SetFrostProp((int)v4, a1) )
      {
        SetGhostFNID((int)v7, 1);
        xxxShowGhostWindow(v10, v4);
        if ( !IsWindowBeingDestroyed(v7)
          && !IsWindowBeingDestroyed(v4)
          && _GetProp((int)v7, *(unsigned __int16 *)(_gpsi + 978), 1) == a2
          && _GetProp((int)v4, *(unsigned __int16 *)(_gpsi + 978), 1) == a1 )
        {
          v2 = 1;
          goto LABEL_18;
        }
        SetGhostFNID((int)v7, 0);
        if ( _GetProp((int)v4, *(unsigned __int16 *)(_gpsi + 978), 1) == a1 )
          InternalRemoveProp((int)v4, *(_WORD *)(_gpsi + 978), 1);
        xxxHideGhostWindow((int)v7, (int)v4);
      }
      InternalRemoveProp((int)v7, *(_WORD *)(_gpsi + 978), 1);
    }
LABEL_18:
    ThreadUnlock1();
LABEL_19:
    ThreadUnlock1();
  }
  return v2;
}
