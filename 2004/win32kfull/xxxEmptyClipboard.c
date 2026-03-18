/*
 * XREFs of xxxEmptyClipboard @ 0x1C0056AE0
 * Callers:
 *     NtUserEmptyClipboard @ 0x1C00566C0 (NtUserEmptyClipboard.c)
 *     FreeWindowStation @ 0x1C00568C0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0056C74 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014F178 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object)
{
  __int64 ThreadWin32Thread; // rsi
  int v3; // r14d
  struct tagCLIP *v4; // rdi
  struct tagWINDOWSTATION *v6; // rax
  int v7; // ebp
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( Object )
    goto LABEL_2;
  v6 = CheckClipboardAccess();
  Object = (struct tagCLIP **)v6;
  if ( !v6 )
    return 0LL;
  if ( *((_QWORD *)v6 + 10) != ThreadWin32Thread )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
LABEL_2:
  if ( ((_DWORD)Object[8] & 0x10) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, &v10, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v4 = Object[16];
  if ( v4 )
  {
    v7 = *((_DWORD *)Object + 34);
    if ( v7 )
    {
      do
      {
        v8 = *(unsigned __int16 *)v4;
        --v7;
        if ( (unsigned __int16)v8 >= 0xC000u )
          UserDeleteAtom(v8);
        UT_FreeCBFormat(v4);
        v4 = (struct tagCLIP *)((char *)v4 + 32);
      }
      while ( v7 );
      v4 = Object[16];
    }
    Win32FreePool(v4);
    Object[16] = 0LL;
    *((_DWORD *)Object + 34) = 0;
  }
  *((_DWORD *)Object + 16) |= 0x40u;
  v9[0] = Object + 14;
  v9[1] = Object[12];
  HMAssignmentLock(v9);
  ++*((_DWORD *)Object + 35);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 16) &= ~0x80u;
  if ( !v3 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock(&v10);
  }
  return 1LL;
}
