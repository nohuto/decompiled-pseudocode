/*
 * XREFs of xxxDwmStopRedirection @ 0x1C0081030
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01F8270 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     GreDwmShutdown @ 0x1C000E080 (GreDwmShutdown.c)
 *     _GetProcessWindowStation @ 0x1C000FF00 (_GetProcessWindowStation.c)
 *     zzzDecomposeDesktop @ 0x1C001C008 (zzzDecomposeDesktop.c)
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     DwmAsyncDesktopFree @ 0x1C0081274 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0081314 (DwmNotifyChildrenAddRemove.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     ChangeComposableCursor @ 0x1C01D3BE8 (ChangeComposableCursor.c)
 *     StopFade @ 0x1C01E77F0 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C02774A0 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 i; // rsi
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 j; // rbx
  struct tagWND *v7; // rsi
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 64) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    if ( gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(0LL);
      gbScreenCaptureSoftwareCursorEnabled = 0;
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(i + 8) + 64LL) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
          v3 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8));
          DwmAsyncDesktopFree(v3);
        }
      }
      v4 = *(_QWORD *)(ProcessWindowStation + 120);
      if ( v4 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v4, 1LL);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 64) &= ~0x200u;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( gdwInAtomicOperation )
      {
        v5 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v5);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v7 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v7 )
          {
            v13[2] = 0LL;
            v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = v13;
            v13[1] = v7;
            HMLockObject(v7);
            v8 = 0;
            if ( g_pDwmState )
              v8 = gfDwmDeviceBitmapsEnabled;
            xxxRedrawWindow(v7, 0LL, 0LL, v8 != 0 ? 645 : 66181);
            ThreadUnlock1(v10, v9, v11);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
