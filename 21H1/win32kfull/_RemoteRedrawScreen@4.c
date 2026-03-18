/*
 * XREFs of _RemoteRedrawScreen@4 @ 0xD2434
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _NtUserRemoteRedrawScreen@0 @ 0x1682E0 (_NtUserRemoteRedrawScreen@0.c)
 *     _RemotePassthruDisable@0 @ 0x187AD9 (_RemotePassthruDisable@0.c)
 *     _RemoteShadowCleanup@8 @ 0x187B8D (_RemoteShadowCleanup@8.c)
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
int RemoteRedrawScreen()
{
  void *v0; // ebx
  int v1; // edx
  union _LARGE_INTEGER CurrentTime; // [esp+10h] [ebp-68h] BYREF
  int v4; // [esp+18h] [ebp-60h]
  _DWORD v5[3]; // [esp+24h] [ebp-54h] BYREF
  _DWORD v6[17]; // [esp+30h] [ebp-48h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 19, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
  if ( _gbFreezeScreenUpdates )
  {
    _gbFreezeScreenUpdates = 0;
    if ( UserRemoteConnectedSessionUsingWddm() )
    {
      memset(v6, 0, 0x40u);
      EtwActivityIdControl(3u, (LPGUID)&v6[1]);
      CurrentTime.QuadPart = 0LL;
      KeQuerySystemTime(&CurrentTime);
      *(union _LARGE_INTEGER *)&v6[14] = CurrentTime;
      v6[5] = 66;
      LOBYTE(v6[11]) = -1;
      DrvSetMonitorPowerState(*(_DWORD *)(_gpDispInfo + 8), 1, 0, v6);
    }
    else
    {
      KeSetEvent(_gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( _gspdeskShouldBeForeground )
    {
      _gbDesktopLocked = 0;
      v0 = *(void **)(_gspdeskShouldBeForeground + 20);
      if ( (*(_BYTE *)(_gspdeskShouldBeForeground + 24) & 8) == 0 )
      {
        CurrentTime.QuadPart = 0LL;
        v4 = 0;
        memset(v5, 0, sizeof(v5));
        PushW32ThreadLock((int)v0, v5, (int)UserDereferenceObject);
        if ( v0 )
          ObfReferenceObject(v0);
        PushW32ThreadLock(_gspdeskShouldBeForeground, &CurrentTime, (int)UserDereferenceObject);
        v1 = _gspdeskShouldBeForeground;
        if ( _gspdeskShouldBeForeground )
        {
          ObfReferenceObject(_gspdeskShouldBeForeground);
          v1 = _gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((int)v0, v1, 2, 0);
        PopAndFreeW32ThreadLock((int)&CurrentTime);
        PopAndFreeW32ThreadLock((int)v5);
      }
      LockObjectAssignment(_gspdeskShouldBeForeground, 0);
    }
  }
  return 0;
}
