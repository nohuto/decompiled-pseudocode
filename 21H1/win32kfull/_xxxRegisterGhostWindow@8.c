/*
 * XREFs of _xxxRegisterGhostWindow@8 @ 0xC20E8
 * Callers:
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     ?SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0xC229C (-SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YGHPAUtagWND@@H@Z @ 0xC24DC (-SetGhostFNID@@YGHPAUtagWND@@H@Z.c)
 *     ?_ShouldGhostWindow@@YGHPAUtagWND@@@Z @ 0xC25FC (-_ShouldGhostWindow@@YGHPAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 */

int __userpurge xxxRegisterGhostWindow@<eax>(struct tagWND *a1@<edi>, unsigned int a2, unsigned int a3)
{
  int v3; // ebx
  int CurrentProcess; // eax
  _DWORD *v5; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v8; // edi
  PKTHREAD v9; // eax
  int v10; // eax
  struct tagWND *v12; // [esp-4h] [ebp-24h]
  struct tagWND *v13; // [esp-4h] [ebp-24h]
  struct tagWND *v14; // [esp-4h] [ebp-24h]
  struct tagWND *v15; // [esp-4h] [ebp-24h]
  struct tagWND *v16; // [esp-4h] [ebp-24h]
  struct tagWND *v17; // [esp-4h] [ebp-24h]
  HWND v18; // [esp+0h] [ebp-20h]
  HWND v19; // [esp+0h] [ebp-20h]
  int v20; // [esp+0h] [ebp-20h]
  struct tagWND *v21; // [esp+0h] [ebp-20h]
  int v22; // [esp+0h] [ebp-20h]
  struct tagWND *v23; // [esp+0h] [ebp-20h]
  _DWORD v24[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v25[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( !IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return v3;
  }
  v5 = (_DWORD *)HMValidateHandleNoSecure(a3, 1);
  if ( v5 )
  {
    v25[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v25[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v25;
    v25[1] = v5;
    HMLockObject(v5);
    if ( !_ShouldGhostWindow(a1) )
      goto LABEL_23;
    if ( _GetProp((int)v5, *(unsigned __int16 *)(_gpsi + 500), 1) != -1 )
      goto LABEL_23;
    if ( !IsHungWindow((int)v5) )
      goto LABEL_23;
    v8 = (_DWORD *)HMValidateHandleNoSecure(a2, 1);
    if ( !v8 || v8[2] != _gptiCurrent || !IsGhostWindowClass(v8) )
      goto LABEL_23;
    v24[2] = 0;
    v9 = KeGetCurrentThread();
    v10 = W32GetThreadWin32Thread(v9);
    v24[0] = *(_DWORD *)(v10 + 228);
    *(_DWORD *)(v10 + 228) = v24;
    v24[1] = v8;
    HMLockObject(v8);
    if ( SetGhostProp(v12, v18) )
    {
      if ( SetGhostProp(v13, v19) )
      {
        SetGhostFNID(v14, v20);
        xxxShowGhostWindow(v15, v21);
        if ( !IsWindowBeingDestroyed(v8)
          && !IsWindowBeingDestroyed(v5)
          && _GetProp((int)v8, *(unsigned __int16 *)(_gpsi + 500), 1) == a3
          && _GetProp((int)v5, *(unsigned __int16 *)(_gpsi + 500), 1) == a2 )
        {
          v3 = 1;
          goto LABEL_16;
        }
        SetGhostFNID(v16, v22);
        if ( _GetProp((int)v5, *(unsigned __int16 *)(_gpsi + 500), 1) == a2 )
          InternalRemoveProp((int)v5, *(_WORD *)(_gpsi + 500), 1);
        xxxHideGhostWindow(v17, v23);
      }
      InternalRemoveProp((int)v8, *(_WORD *)(_gpsi + 500), 1);
    }
LABEL_16:
    ThreadUnlock1();
    if ( v3 )
    {
LABEL_17:
      ThreadUnlock1();
      return v3;
    }
LABEL_23:
    if ( _GetProp((int)v5, *(unsigned __int16 *)(_gpsi + 500), 1) == -1 )
      InternalRemoveProp((int)v5, *(_WORD *)(_gpsi + 500), 1);
    goto LABEL_17;
  }
  return v3;
}
