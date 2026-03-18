/*
 * XREFs of _xxxbFullscreenSwitch@8 @ 0x181710
 * Callers:
 *     _xxxConsoleControl@12 @ 0x1A9EA (_xxxConsoleControl@12.c)
 * Callees:
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _xxxSleepThread@16 @ 0xEFFA2 (_xxxSleepThread@16.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxbFullscreenSwitch(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  bool v9; // zf
  int result; // eax
  struct tagWND *v11; // [esp+0h] [ebp-1Ch]
  struct tagWND *v12; // [esp+0h] [ebp-1Ch]
  unsigned int v13; // [esp+4h] [ebp-18h]
  unsigned int v14; // [esp+4h] [ebp-18h]
  _DWORD v15[3]; // [esp+Ch] [ebp-10h] BYREF
  int v16; // [esp+18h] [ebp-4h]

  v2 = a1;
  v16 = a1;
  v15[2] = 0;
  v3 = 1;
  v4 = ValidateHwnd(a2);
  v5 = v4;
  if ( !v4 )
    return -5;
  v6 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
  if ( v6 == 669 || v6 == 671 )
    return -5;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v15[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v15;
  v15[1] = v5;
  HMLockObject(v5);
  if ( ghSwitcher )
  {
    do
      xxxSleepThread(0, 0);
    while ( ghSwitcher );
    v2 = v16;
  }
  if ( !_gfSwitchInProgress && !_gProtocolType && !_gfSessionSwitchBlock )
  {
    _gfSessionSwitchBlock = 1;
    if ( v2 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v5 + 20) + 15) & 7) != 1 )
      {
        xxxShowWindow(v11, v13);
        xxxInternalUpdateWindow(v12, v14);
      }
      if ( !xxxMakeWindowForegroundWithState(v5, 1) || ghSwitcher )
        goto LABEL_20;
      v9 = _gbFullScreen == 1;
    }
    else
    {
      if ( !xxxMakeWindowForegroundWithState(v5, 0) || ghSwitcher )
        goto LABEL_20;
      v9 = _gbFullScreen == 2;
    }
    if ( v9 )
    {
LABEL_23:
      ThreadUnlock1();
      result = v3;
      _gfSessionSwitchBlock = 0;
      return result;
    }
LABEL_20:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(3, 17, &WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
    v3 = 0;
    goto LABEL_23;
  }
  ThreadUnlock1();
  return 0;
}
