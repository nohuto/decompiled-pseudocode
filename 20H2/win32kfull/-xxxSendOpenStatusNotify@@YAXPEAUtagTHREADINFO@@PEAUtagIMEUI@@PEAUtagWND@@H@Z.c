/*
 * XREFs of ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E29E0
 * Callers:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E25F4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2790 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 */

void __fastcall xxxSendOpenStatusNotify(PRKPROCESS **a1, struct tagIMEUI *a2, struct tagWND *a3, int a4)
{
  _BOOL8 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a4 != 0;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 2) + 632LL) >= 0x400u && *(_QWORD *)(*((_QWORD *)a3 + 5) + 208LL) )
  {
    v10[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = a3;
    HMLockObject(a3);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((unsigned __int64)a3, 0x282u, v5 + 1, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v8, v7, v9);
  }
  else
  {
    xxxSendMessageToUI(a1, a2, (__int64)a3, v5 + 1);
  }
}
