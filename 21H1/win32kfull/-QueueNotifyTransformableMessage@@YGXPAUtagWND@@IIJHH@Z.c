/*
 * XREFs of ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E
 * Callers:
 *     _xxxFocusSetInputContext@12 @ 0x184BE (_xxxFocusSetInputContext@12.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394 (-xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z.c)
 *     ?DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z @ 0x739C0 (-DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?CancelInputState@@YGXPAUtagTHREADINFO@@K@Z @ 0x14CC2B (-CancelInputState@@YGXPAUtagTHREADINFO@@K@Z.c)
 *     _QueueNotifyMessage@20 @ 0x1812B6 (_QueueNotifyMessage@20.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 */

void __userpurge QueueNotifyTransformableMessage(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        size_t a4,
        size_t MaxCount,
        int a6,
        int a7,
        int a8)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v12[3]; // [esp+8h] [ebp-14h] BYREF
  _BYTE v13[8]; // [esp+14h] [ebp-8h] BYREF

  v12[2] = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v12[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v12;
  v12[1] = a2;
  if ( a2 )
    HMLockObject(a2);
  xxxSendMessageCallback(a2, a1, a3, a4, 0, 1, 0, MaxCount, a6);
  ThreadUnlock1();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
}
