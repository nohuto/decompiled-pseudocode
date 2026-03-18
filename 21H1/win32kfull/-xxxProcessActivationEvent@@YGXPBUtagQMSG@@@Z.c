/*
 * XREFs of ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _zzzInputFocusReceivedWindowEvent@4 @ 0x177FE (_zzzInputFocusReceivedWindowEvent@4.c)
 *     _xxxCancelTracking@0 @ 0x17842 (_xxxCancelTracking@0.c)
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1A0DC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _zzzActiveCursorTracking@4 @ 0x14ED7B (_zzzActiveCursorTracking@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __thiscall xxxProcessActivationEvent(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // esi
  PKTHREAD v10; // eax
  int v11; // eax
  struct tagWND *v12; // [esp+0h] [ebp-20h]
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 60) != 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v15 = 0;
  v2 = *(_DWORD *)(this + 20);
  v17 = *(_DWORD *)(_gptiCurrent + 236);
  if ( v2 )
  {
    v3 = HMValidateHandleNoSecure(v2, 1);
    v4 = v3;
    if ( !v3 )
      return;
    if ( _gptiCurrent != *(_DWORD *)(v3 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v13 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v13;
    v14 = v4;
    HMLockObject(v4);
    v16 = _gpqForeground;
    if ( _gpqForeground )
    {
      v7 = v17;
      if ( v4 == *(_DWORD *)(v17 + 64) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage(v4, v17 == _gpqForeground, 0);
        if ( v7 == v16 )
        {
          xxxUpdateTray(v12);
          if ( (*(_BYTE *)(this + 12) & 2) == 0 )
            xxxSetWindowPos(v4, 0, 0, 0, 0, 0, 3);
        }
      }
      else if ( (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(*(_DWORD *)(this + 12) & 2 | 0x84)
             && ((unsigned __int8)_gpdwCPUserPreferencesMask & 1) != 0 )
      {
        zzzActiveCursorTracking(v4);
      }
    }
    else
    {
      xxxSetForegroundWindow2(v4, _gptiCurrent, 0);
    }
    if ( (*(_BYTE *)(this + 12) & 1) != 0 && (*(_BYTE *)(*(_DWORD *)(v4 + 20) + 23) & 0x20) != 0 )
      _PostMessage(v4, 274, 61728, 0);
    goto LABEL_13;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(_gpCursorClip);
  zzzLockWindowUpdate2(0, 1);
  v8 = *(_DWORD *)(_gptiCurrent + 236);
  if ( *(_DWORD *)(this + 16) )
  {
    v9 = *(_DWORD *)(v8 + 64);
    if ( v9 )
    {
      if ( v8 == _gpqForeground )
      {
        v10 = KeGetCurrentThread();
        v11 = W32GetThreadWin32Thread(v10);
        v13 = *(_DWORD *)(v11 + 228);
        *(_DWORD *)(v11 + 228) = &v13;
        v14 = v9;
        HMLockObject(v9);
        if ( *(_DWORD *)(v8 + 60) )
          zzzInputFocusReceivedWindowEvent(7);
        anonymous_namespace_::xxxSendNCActivateMessage(v9, 1, 0);
        xxxUpdateTray(v12);
        xxxSetWindowPos(v9, 0, 0, 0, 0, 0, 3);
LABEL_13:
        ThreadUnlock1();
        return;
      }
    }
  }
  if ( v8 != _gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate();
}
