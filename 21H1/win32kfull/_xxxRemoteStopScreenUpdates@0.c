/*
 * XREFs of _xxxRemoteStopScreenUpdates@0 @ 0xD1646
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _NtUserRemoteStopScreenUpdates@0 @ 0x168334 (_NtUserRemoteStopScreenUpdates@0.c)
 *     _xxxRemotePassthruEnable@0 @ 0x188512 (_xxxRemotePassthruEnable@0.c)
 *     _xxxRemoteShadowSetup@0 @ 0x1885FB (_xxxRemoteShadowSetup@0.c)
 *     _xxxRemoteShadowStop@0 @ 0x188650 (_xxxRemoteShadowStop@0.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _RemoteDisableScreen@16 @ 0xD17D8 (_RemoteDisableScreen@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall xxxRemoteStopScreenUpdates()
{
  __int16 v0; // bx
  unsigned __int16 v1; // dx
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // ecx
  union _LARGE_INTEGER CurrentTime; // [esp+10h] [ebp-E0h] BYREF
  _DWORD v7[16]; // [esp+18h] [ebp-D8h] BYREF
  _DWORD v8[37]; // [esp+58h] [ebp-98h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 19, &WPP_ce4686b973ab32e3a2c7742364a6f9c9_Traceguids);
  if ( !_gbFreezeScreenUpdates )
  {
    if ( UserRemoteConnectedSessionUsingWddm() )
    {
      memset(v7, 0, sizeof(v7));
      EtwActivityIdControl(3u, (LPGUID)&v7[1]);
      CurrentTime.QuadPart = 0LL;
      KeQuerySystemTime(&CurrentTime);
      *(union _LARGE_INTEGER *)&v7[14] = CurrentTime;
      v7[5] = 65;
      LOBYTE(v7[11]) = -1;
      DrvSetMonitorPowerState(*(_DWORD *)(_gpDispInfo + 8), 4, 1, v7);
    }
    else
    {
      KeSetEvent(_gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskDisconnect )
    {
      v0 = _gwMKButtonState & ~_gwMKCurrentButton;
      v1 = (v0 ^ _gwMKButtonState) & 1;
      if ( (((unsigned __int8)(_gwMKButtonState & ~_gwMKCurrentButton) ^ _gwMKButtonState) & 2) != 0 )
        v1 = (v0 ^ _gwMKButtonState) & 1 | 2;
      if ( v1 )
        ReleaseMouseButton(v1);
      v8[0] = -2136735560;
      _gwMKButtonState &= ~_gwMKCurrentButton;
      memset(&v8[1], 0, 20);
      v2 = 6;
      v8[6] = -2119892808;
      memset(&v8[7], 0, 20);
      v8[12] = -2136866659;
      memset(&v8[13], 0, 20);
      v8[18] = -2120023907;
      memset(&v8[19], 0, 20);
      v8[24] = -2136997718;
      memset(&v8[25], 0, 20);
      v8[30] = -2120154954;
      memset(&v8[31], 0, 20);
      v3 = v8;
      do
      {
        xxxProcessKeyEvent(v3, 0, 1, 0, 0, 0);
        v3 += 6;
        --v2;
      }
      while ( v2 );
      UpdateKeyLights(1);
      RemoteDisableScreen(v4, v4);
      _gbFreezeScreenUpdates = 1;
    }
  }
  return 0;
}
