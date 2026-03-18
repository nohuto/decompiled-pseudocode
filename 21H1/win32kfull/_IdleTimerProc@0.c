/*
 * XREFs of _IdleTimerProc@0 @ 0x73DA6
 * Callers:
 *     _xxxHungAppDemon@16 @ 0x7336E (_xxxHungAppDemon@16.c)
 * Callees:
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __stdcall IdleTimerProc()
{
  int IsDisplayRequired; // eax
  signed int v1; // edi
  char v2; // bl
  signed int v3; // esi
  __int64 GlobalTickCount; // kr00_8
  int v5; // ecx
  _DWORD *v6; // eax
  __int64 v7; // kr08_8
  _DWORD v9[2]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v10[2]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v11[2]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v12[3]; // [esp+28h] [ebp-10h] BYREF
  int v13; // [esp+34h] [ebp-4h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  RIMWatchDog();
  LOBYTE(IsDisplayRequired) = _gPowerState;
  if ( (_gPowerState & 1) != 0 || (_gafAsyncKeyState[0] & 0x14) != 0 || (_gafAsyncKeyState[1] & 0x15) != 0 )
    return IsDisplayRequired;
  EtwTraceIdleStatus();
  if ( gbLockScreenAutoLockActive )
    v1 = _giPowerOffTimeOutMs - 5000;
  else
    v1 = 0;
  if ( v1 <= 0
    || !CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, v1)
    || (GlobalTickCount = CInputGlobals::GetGlobalTickCount(_gpInputGlobals, 1),
        v12[2] = HIDWORD(GlobalTickCount),
        GlobalTickCount == CInputGlobals::GetLastInputTime(_gpInputGlobals))
    || PowerIsDisplayRequired() && !_gbBlockSendInputResets
    || (int)PostWinlogonMessage(1024, 3) < 0 )
  {
    v1 = dword_273884;
  }
  else
  {
    EtwTraceIdleActionExpiration(6, v1);
    CInputGlobals::UpdateGlobalTickCount(_gpInputGlobals, 1);
    dword_273884 = v1;
  }
  if ( v1 <= 0
    || !CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, v1)
    || CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, dword_273884 + 10000) )
  {
    v2 = 0;
    dword_273884 = 0;
  }
  else
  {
    v2 = 1;
  }
  if ( _giPowerOffTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, _giPowerOffTimeOutMs)
    && !v2
    && (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(_gpInputGlobals, 3) )
  {
    EtwTraceIdleActionExpiration(2, _giPowerOffTimeOutMs);
  }
  if ( (_gPowerTransitionsState[0] || MEMORY[0x14] || _gPowerTransitionsState[6]) && !v2 )
  {
    if ( PowerIsDisplayIdleExpired(0, &v13) )
    {
      if ( _gpqForeground )
      {
        v5 = *(_DWORD *)(_gpqForeground + 64);
        if ( v5 )
        {
LABEL_55:
          _PostTransformableMessage(v5, 274, 61808, 2, 0);
          goto LABEL_16;
        }
      }
      v10[1] = v13;
      v6 = v10;
      v10[0] = 5;
    }
    else
    {
      if ( _gPowerTransitionsState[5] || !PowerIsDisplayIdleExpired(5000, 0) )
        goto LABEL_16;
      if ( _gpqForeground )
      {
        v5 = *(_DWORD *)(_gpqForeground + 64);
        if ( v5 )
          goto LABEL_55;
      }
      v9[0] = 5;
      v6 = v9;
      v9[1] = 17;
    }
    QueuePowerRequest(v6, 0);
  }
LABEL_16:
  if ( _giPowerSessionActivityTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, _giPowerSessionActivityTimeOutMs)
    && !_gPowerAdaptiveState )
  {
    _gPowerAdaptiveState = 1;
    if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(_gpInputGlobals, 4) )
      EtwTraceIdleActionExpiration(5, _giPowerSessionActivityTimeOutMs);
    v12[0] = 9;
    QueuePowerRequest(v12, 0);
  }
  if ( _giScreenSaveTimeOutMs > 0 && CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, _giScreenSaveTimeOutMs) )
  {
    if ( gbLockConsoleActive )
    {
      v7 = CInputGlobals::GetGlobalTickCount(_gpInputGlobals, 1);
      if ( v7 != CInputGlobals::GetLastInputTime(_gpInputGlobals) )
      {
        EtwTraceIdleActionExpiration(3, _giScreenSaveTimeOutMs);
        if ( !PowerIsDisplayRequired() || _gbBlockSendInputResets )
          PostWinlogonMessage(1027, 0);
      }
    }
    else
    {
      v12[0] = 6;
      QueuePowerRequest(v12, 0);
    }
  }
  LOBYTE(IsDisplayRequired) = _giDimTimeOutMs;
  v3 = 0;
  if ( _giDimTimeOutMs > 0 )
  {
    LOBYTE(IsDisplayRequired) = _gbManualDimTimeOut;
    if ( _gbManualDimTimeOut )
    {
      v3 = _giDimTimeOutMs;
    }
    else
    {
      LOBYTE(IsDisplayRequired) = _giPowerOffTimeOutMs;
      v3 = _giPowerOffTimeOutMs - 15000;
      if ( _giPowerOffTimeOutMs - 15000 < 45000 )
        v3 = 0;
    }
  }
  if ( v3 > 0 )
  {
    LOBYTE(IsDisplayRequired) = _giPowerOffTimeOutMs;
    if ( _giPowerOffTimeOutMs <= 0 || v3 < _giPowerOffTimeOutMs )
    {
      LOBYTE(IsDisplayRequired) = CInputGlobals::IsTimeFromLastInputEvent(_gpInputGlobals, v3);
      if ( (_BYTE)IsDisplayRequired )
      {
        if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(_gpInputGlobals, 5) )
          EtwTraceIdleActionExpiration(4, v3);
        IsDisplayRequired = PowerIsDisplayRequired();
        if ( !IsDisplayRequired )
        {
          LOBYTE(IsDisplayRequired) = _gPowerDisplayState;
          if ( *((_DWORD *)&_gPowerDisplayState + 16) == 1 )
          {
            IsDisplayRequired = PowerIsDisplayBurstActive(0);
            if ( !IsDisplayRequired )
            {
              v11[1] = 0;
              v11[0] = 7;
              LOBYTE(IsDisplayRequired) = QueuePowerRequest(v11, 0);
            }
          }
        }
      }
    }
  }
  return IsDisplayRequired;
}
