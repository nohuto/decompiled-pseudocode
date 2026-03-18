/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YGHKPAUtagWND@@H@Z @ 0x15B489
 * Callers:
 *     _xxxProcessDelegateCapturedPointers@4 @ 0xF1CCE (_xxxProcessDelegateCapturedPointers@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxSendPointerMessageWorker@24 @ 0x15ABD3 (_xxxSendPointerMessageWorker@24.c)
 */

BOOL __userpurge xxxNotifyCaptureChangeIfCaptured@<eax>(
        unsigned int a1@<ecx>,
        unsigned int a2,
        struct tagWND *a3,
        int a4)
{
  struct tagINPUTDEST *v5; // eax
  int *v7; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // esi
  _DWORD v11[3]; // [esp+Ch] [ebp-80h] BYREF
  _BYTE v12[108]; // [esp+18h] [ebp-74h] BYREF

  v11[2] = 0;
  memset(v12, 0, 0x68u);
  v5 = CTouchProcessor::NotifyCaptureChangedIfCaptured(_gpTouchProcessor, a1, (struct tagINPUTDEST *)v12);
  if ( !v5 )
    return 1;
  v7 = (int *)*((_DWORD *)v5 + 20);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v11[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v11;
  v11[1] = v7;
  if ( v7 )
    HMLockObject(v7);
  v10 = xxxSendPointerMessageWorker((int)v7, 588, a1, *v7, 0, 183);
  ThreadUnlock1();
  return v10 != 0;
}
