/*
 * XREFs of _RemoteDisableScreen@16 @ 0xD17D8
 * Callers:
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxRemoteStopScreenUpdates@0 @ 0xD1646 (_xxxRemoteStopScreenUpdates@0.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 */

int __thiscall RemoteDisableScreen(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  PKTHREAD CurrentThread; // eax
  void *v6; // edi
  _DWORD v8[3]; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v9[3]; // [esp+18h] [ebp-18h] BYREF
  int v10; // [esp+24h] [ebp-Ch]
  _DWORD *v11; // [esp+28h] [ebp-8h]
  _DWORD *v12; // [esp+2Ch] [ebp-4h]

  v12 = (_DWORD *)_gbDesktopLocked;
  v10 = _gspdeskShouldBeForeground;
  v3 = gspdeskDisconnect;
  memset(v9, 0, sizeof(v9));
  v11 = this;
  v4 = 0;
  memset(v8, 0, sizeof(v8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(9, 20, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  if ( v3 )
  {
    if ( v11 == v3 )
    {
      *v12 = 1;
    }
    else
    {
      v6 = (void *)v3[5];
      LockObjectAssignment(v10, v11);
      *v12 = 1;
      PushW32ThreadLock((int)v6, v8, (int)UserDereferenceObject);
      if ( v6 )
        ObfReferenceObject(v6);
      PushW32ThreadLock((int)v3, v9, (int)UserDereferenceObject);
      ObfReferenceObject(v3);
      v4 = xxxSwitchDesktop((int)v6, (int)v3, 2, 0);
      PopAndFreeW32ThreadLock((int)v9);
      PopAndFreeW32ThreadLock((int)v8);
    }
  }
  return v4;
}
