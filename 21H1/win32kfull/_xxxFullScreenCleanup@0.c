/*
 * XREFs of _xxxFullScreenCleanup@0 @ 0xA7816
 * Callers:
 *     <none>
 * Callees:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 */

// write access to const memory has been detected, the output may be wrong!
HANDLE __stdcall xxxFullScreenCleanup()
{
  HANDLE result; // eax
  int v1; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  size_t *v4; // eax
  size_t v5; // ecx
  _DWORD v6[3]; // [esp+0h] [ebp-Ch] BYREF

  result = PsGetCurrentThreadId();
  if ( result == ghSwitcher )
  {
    if ( gfGdiEnabled )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(12, 10, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
      _gdwPUDFlags &= ~0x20000000u;
      result = (HANDLE)zzzLockWindowUpdate2(0, 1);
    }
    else
    {
      v6[2] = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(12, 11, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
      HMAssignmentUnlock(&gspwndFullScreen);
      _gbFullScreen = 1;
      v1 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v6[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v6;
      v6[1] = v1;
      if ( v1 )
        HMLockObject(v1);
      v4 = *(size_t **)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
      if ( v4 )
        v5 = *v4;
      else
        v5 = 0;
      xxxSendNotifyMessage((int)v4, 0x3Au, (struct tagWND *)2, v5, 1u);
      result = (HANDLE)ThreadUnlock1();
    }
    ghSwitcher = 0;
    gfRedoFullScreenSwitch = 0;
  }
  return result;
}
