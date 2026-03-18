/*
 * XREFs of _zzzCancelJournalling@0 @ 0xB07D0
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     _PhkNextValid@4 @ 0x1299C (_PhkNextValid@4.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     _SendMsgCleanup@4 @ 0x9A52C (_SendMsgCleanup@4.c)
 *     ?InterQueueMsgCleanup@@YGXK@Z @ 0xB085E (-InterQueueMsgCleanup@@YGXK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __stdcall zzzCancelJournalling()
{
  int GlobalValid; // edi
  int v1; // edi
  unsigned int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // esi
  int Valid; // esi
  int v7; // esi
  int v8; // esi
  unsigned int v9; // [esp+0h] [ebp-Ch]

  ForceResetMouseButtonsDownState();
  ++_gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(_gptiRit, 1);
  if ( GlobalValid )
  {
    do
    {
      v5 = *(_DWORD *)(GlobalValid + 8);
      if ( v5 )
      {
        _PostThreadMessage(v5, 75, 0, 0);
        SendMsgCleanup(v5);
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx(GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
  }
  zzzEndDeferWinEventNotify();
  ++_gdwDeferWinEvent;
  v1 = PhkFirstGlobalValid(_gptiRit, 0);
  if ( v1 )
  {
    do
    {
      v7 = *(_DWORD *)(v1 + 8);
      if ( v7 )
      {
        _PostThreadMessage(v7, 75, 0, 0);
        SendMsgCleanup(v7);
      }
      v8 = PhkNextValid(v1);
      zzzUnhookWindowsHookEx(v1);
      v1 = v8;
    }
    while ( v8 );
  }
  zzzEndDeferWinEventNotify();
  InterQueueMsgCleanup(v9);
  _gppiLockSFW = 0;
  result = _grpdeskRitInput;
  if ( _grpdeskRitInput )
  {
    v3 = *(_DWORD *)(_grpdeskRitInput + 4);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 12);
      if ( v4 )
      {
        result = *(_DWORD *)(v4 + 20);
        if ( (*(_BYTE *)(result + 23) & 8) != 0 )
          return SetOrClrWF(0, v4, 0xF08u, 1);
      }
    }
  }
  return result;
}
