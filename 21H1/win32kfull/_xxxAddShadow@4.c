/*
 * XREFs of _xxxAddShadow@4 @ 0x19D320
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _IsSysShadow@4 @ 0x71BD0 (_IsSysShadow@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YGHPAUtagWND@@0@Z @ 0x19D1DB (-zzzApplyShadow@@YGHPAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall xxxAddShadow(_DWORD *this)
{
  int v2; // edi
  int v3; // esi
  int CurrentProcessWin32Process; // eax
  int v5; // eax
  struct tagVWPL **Window; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  PKTHREAD v14; // eax
  int v15; // eax
  PKTHREAD v16; // eax
  int v17; // eax
  _DWORD v19[3]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v20[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD v21[3]; // [esp+28h] [ebp-10h] BYREF
  BOOL v22; // [esp+34h] [ebp-4h]

  v19[2] = 0;
  memset(v21, 0, sizeof(v21));
  if ( _gbDisableAlpha )
    return 0;
  if ( gcOverlays )
    return 0;
  if ( ((unsigned int)_gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0;
  if ( *(char *)(this[5] + 11) < 0 )
    return 0;
  if ( IsSysShadow(this) )
    return 0;
  v2 = Win32AllocPoolZInit(12, 1685287765);
  if ( !v2 )
    return 0;
  PushW32ThreadLock(v2, v21, (int)Win32FreePool);
  v3 = *(_BYTE *)(this[5] + 16) & 8 | 0x800A0;
  v22 = PsGetCurrentProcessWin32Process()
     && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
         IsImmersiveAppRestricted(CurrentProcessWin32Process));
  SmartObjStackRefBase<tagMENU>::Init(v20, 0);
  v5 = this[5];
  v20[2] = 0;
  Window = (struct tagVWPL **)xxxCreateWindowEx(
                                v3,
                                (_DWORD *)(unsigned __int16)gatomShadow,
                                (unsigned __int16)gatomShadow,
                                0,
                                0x80000000,
                                0,
                                0,
                                0,
                                0,
                                0,
                                (int)v20,
                                _hModuleWin,
                                0,
                                *(_DWORD *)(v5 + 148),
                                0xA00u,
                                v22,
                                0);
  v22 = (BOOL)Window;
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v20);
  if ( !Window || *(char *)(this[5] + 11) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((int)v21);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v19[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v19;
  v19[1] = Window;
  HMLockObject(Window);
  xxxInheritWindowMonitor(Window, this, 1);
  ++_gdwDeferWinEvent;
  if ( *(char *)(this[5] + 11) < 0 || FindShadow(this) || !zzzApplyShadow(v9, (int)Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow(Window);
    ThreadUnlock1();
    goto LABEL_20;
  }
  *(_DWORD *)(v2 + 8) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v2;
  HMAssignmentLock(v11, v10);
  HMAssignmentLock(v13, v12);
  if ( GetWindowCloakState(this) )
    zzzSetWindowCompositionCloak(*(_DWORD **)(v2 + 4), 0, 1);
  v14 = KeGetCurrentThread();
  v15 = W32GetThreadWin32Thread(v14);
  *(_DWORD *)(v15 + 8) = v21[0];
  PushW32ThreadLock(v2, v21, (int)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(v22, (int)this, 0, 0, 0, 0, 83);
  ThreadUnlock1();
  v16 = KeGetCurrentThread();
  v17 = W32GetThreadWin32Thread(v16);
  *(_DWORD *)(v17 + 8) = v21[0];
  return 1;
}
