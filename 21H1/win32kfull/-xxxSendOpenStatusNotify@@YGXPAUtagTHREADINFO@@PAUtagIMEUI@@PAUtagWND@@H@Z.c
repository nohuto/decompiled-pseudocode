/*
 * XREFs of ?xxxSendOpenStatusNotify@@YGXPAUtagTHREADINFO@@PAUtagIMEUI@@PAUtagWND@@H@Z @ 0xC399E
 * Callers:
 *     ?xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z @ 0xC38A2 (-xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?xxxSendMessageToUI@@YGJPAUtagTHREADINFO@@PAUtagIMEUI@@IIJ@Z @ 0x14EEFD (-xxxSendMessageToUI@@YGJPAUtagTHREADINFO@@PAUtagIMEUI@@IIJ@Z.c)
 */

void __userpurge xxxSendOpenStatusNotify(
        struct tagTHREADINFO *a1@<ecx>,
        struct tagTHREADINFO *a2,
        struct tagIMEUI *a3,
        struct tagWND *a4,
        int a5)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int v7; // [esp+0h] [ebp-14h]
  int v8; // [esp+4h] [ebp-10h]
  _DWORD v9[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(*((_DWORD *)a2 + 2) + 340) >= 0x400u && *(_DWORD *)(*((_DWORD *)a2 + 5) + 132) )
  {
    v9[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v9[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v9;
    v9[1] = a2;
    HMLockObject(a2);
    xxxSendMessage(a2, (a3 != 0) + 1, 0);
    ThreadUnlock1();
  }
  else
  {
    xxxSendMessageToUI(a1, (struct tagIMEUI *)((a3 != 0) + 1), (unsigned int)a1, v7, v8);
  }
}
