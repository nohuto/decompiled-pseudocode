/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E3FC8
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0101ED0 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, int a2)
{
  __int64 v3; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v3 = HMValidateHandleNoSecure(a1, 1);
  v4 = (struct tagWND *)v3;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(v3 + 40);
  if ( (*(_DWORD *)(v5 + 288) & 0xF) != 2 || *(_WORD *)(v5 + 286) )
    return 0LL;
  v11[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v11;
  v11[1] = v4;
  HMLockObject(v4);
  xxxSendMessage((unsigned __int64)v4, 739 - (a2 != 0), 0LL, 0LL);
  if ( a2 )
    xxxSetWindowPos(v4, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v8, v7, v9);
  return 1LL;
}
