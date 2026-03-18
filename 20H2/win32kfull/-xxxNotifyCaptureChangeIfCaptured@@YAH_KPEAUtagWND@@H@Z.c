/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F1310
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F0718 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  unsigned int v2; // edi
  struct tagINPUTDEST *v4; // rax
  __int64 *v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[4]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v13[112]; // [rsp+50h] [rbp-88h] BYREF

  v2 = 0;
  v12[2] = 0LL;
  memset(v13, 0, sizeof(v13));
  v4 = CTouchProcessor::NotifyCaptureChangedIfCaptured(gpTouchProcessor, a1, (struct tagINPUTDEST *)v13);
  if ( !v4 )
    return 1LL;
  v6 = (__int64 *)*((_QWORD *)v4 + 10);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = v6;
  if ( v6 )
    HMLockObject(v6);
  v8 = xxxSendPointerMessageWorker((__int64)v6, 588LL, a1, *v6, 0LL, 183);
  ThreadUnlock1(v10, v9, v11);
  LOBYTE(v2) = v8 != 0;
  return v2;
}
