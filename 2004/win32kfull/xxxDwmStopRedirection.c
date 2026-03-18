/*
 * XREFs of xxxDwmStopRedirection @ 0x1C000E180
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01F90E0 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     DwmAsyncDesktopFree @ 0x1C000E3C4 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C000E464 (DwmNotifyChildrenAddRemove.c)
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 *     GreDwmShutdown @ 0x1C0128CB0 (GreDwmShutdown.c)
 *     ChangeComposableCursor @ 0x1C01D49F8 (ChangeComposableCursor.c)
 *     StopFade @ 0x1C01E84B0 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C0278A10 (GreDxDwmShutdown.c)
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
  __int64 v6; // r8
  __int64 j; // rbx
  struct tagWND *v8; // rsi
  _QWORD v10[4]; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+78h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 64) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
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
          v3 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopFree(v3);
        }
      }
      v4 = *(_QWORD *)(ProcessWindowStation + 120);
      if ( v4 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v4, 1LL);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(ProcessWindowStation + 64) &= ~0x200u;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( gdwInAtomicOperation )
      {
        v5 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation, v6);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v8 = *(struct tagWND **)(*(_QWORD *)(j + 8) + 24LL);
          if ( v8 )
          {
            v10[2] = 0LL;
            v10[0] = *(_QWORD *)(gptiCurrent + 408LL);
            *(_QWORD *)(gptiCurrent + 408LL) = v10;
            v10[1] = v8;
            HMLockObject(v8);
            xxxRedrawWindow(v8);
            ThreadUnlock1();
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
