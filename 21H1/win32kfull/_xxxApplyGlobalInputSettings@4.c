/*
 * XREFs of _xxxApplyGlobalInputSettings@4 @ 0x1855E
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int xxxApplyGlobalInputSettings()
{
  int result; // eax
  int v1; // ecx
  int CurrentProcessWin32Process; // eax
  int v3; // [esp+0h] [ebp-18h]
  struct tagINPUT_MESSAGE_SOURCE *v4; // [esp+4h] [ebp-14h]
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = *(_DWORD *)(_gpqForeground + 60);
  v1 = *(_DWORD *)(result + 8);
  if ( (*(_BYTE *)(v1 + 264) & 1) == 0 && *(_DWORD *)(v1 + 436) )
  {
    if ( v1 == _gptiCurrent )
    {
      result = _gspklGlobalActive;
      if ( _gspklGlobalActive )
      {
        if ( _gspklGlobalActive != *(_DWORD *)(_gptiCurrent + 240) )
        {
          v5[0] = *(_DWORD *)(_gptiCurrent + 228);
          v5[2] = 0;
          *(_DWORD *)(_gptiCurrent + 228) = v5;
          v5[1] = _gspklGlobalActive;
          HMLockObject(_gspklGlobalActive);
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          xxxInternalActivateKeyboardLayout(*(_DWORD *)(CurrentProcessWin32Process + 356), _gspklGlobalActive, 0, 0);
          return ThreadUnlock1();
        }
      }
    }
    else
    {
      return PostEventMessageEx((struct tagTHREADINFO *)0x12, 0, 0, 0, 0, 0, v3, v4);
    }
  }
  return result;
}
