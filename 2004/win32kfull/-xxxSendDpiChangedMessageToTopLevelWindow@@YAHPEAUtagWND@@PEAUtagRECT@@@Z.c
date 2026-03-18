/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C011D710
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C006A1D8 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToTopLevelWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  v9[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v9;
  v9[1] = a1;
  HMLockObject(a1);
  xxxSendMessage(
    (unsigned __int64)a1,
    0x2E0u,
    *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 284LL) | (unsigned __int64)(*(unsigned __int16 *)(*((_QWORD *)a1 + 5)
                                                                                                + 284LL) << 16),
    (struct _LARGE_STRING *)a2);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v6, v5, v7);
  return 1LL;
}
