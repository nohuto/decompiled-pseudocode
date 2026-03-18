/*
 * XREFs of ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D
 * Callers:
 *     ?xxxContScroll@@YGXPAUtagWND@@IIJ@Z @ 0x1A2DA3 (-xxxContScroll@@YGXPAUtagWND@@IIJ@Z.c)
 *     ?xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A30D9 (-xxxMoveThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     _xxxTrackBox@20 @ 0x1A48C7 (_xxxTrackBox@20.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 */

void __userpurge xxxDoScroll(
        void *a1@<edx>,
        int *a2@<ecx>,
        struct tagWND *a3,
        struct tagWND *a4,
        int a5,
        int a6,
        int a7)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // eax
  _DWORD v12[3]; // [esp+8h] [ebp-Ch] BYREF

  v12[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v12[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v12;
  v12[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  if ( a2 )
    v11 = *a2;
  else
    v11 = 0;
  xxxSendMessage(a1, (unsigned __int16)a3 | ((unsigned __int16)a4 << 16), v11);
  xxxWindowEvent(0x800Eu, (struct tagEVENTHOOK *)a1, (a5 != 0) - 6, 0, 1);
  ThreadUnlock1();
}
