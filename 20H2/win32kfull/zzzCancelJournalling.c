/*
 * XREFs of zzzCancelJournalling @ 0x1C002A378
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C0102160 (xxxDoHotKeyStuff.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0048C00 (zzzEndDeferWinEventNotify.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0074694 (zzzUnhookWindowsHookEx.c)
 *     PhkNextValid @ 0x1C0074F10 (PhkNextValid.c)
 *     SendMsgCleanup @ 0x1C007EE60 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C007F3DC (xxxReceiverDied.c)
 *     _PostThreadMessage @ 0x1C00BE598 (_PostThreadMessage.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     PhkFirstGlobalValid @ 0x1C00D7DDC (PhkFirstGlobalValid.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzCancelJournalling()
{
  __int64 GlobalValid; // rdi
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 Valid; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx

  ForceResetMouseButtonsDownState();
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1LL);
  if ( GlobalValid )
  {
    do
    {
      v5 = *(_QWORD *)(GlobalValid + 16);
      if ( v5 )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 75LL, 0LL);
        SendMsgCleanup(v5);
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
  }
  zzzEndDeferWinEventNotify();
  ++gdwDeferWinEvent;
  v1 = PhkFirstGlobalValid(gptiRit, 0LL);
  if ( v1 )
  {
    do
    {
      v7 = *(_QWORD *)(v1 + 16);
      if ( v7 )
      {
        PostThreadMessage(*(_QWORD *)(v1 + 16), 75LL, 0LL);
        SendMsgCleanup(v7);
      }
      v8 = PhkNextValid(v1);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v1);
      v1 = v8;
    }
    while ( v8 );
  }
  zzzEndDeferWinEventNotify();
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v3 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 )
      {
        result = *(_QWORD *)(v4 + 40);
        if ( (*(_BYTE *)(result + 31) & 8) != 0 )
          return SetOrClrWF(0LL, v4, 3848LL, 1LL);
      }
    }
  }
  return result;
}
