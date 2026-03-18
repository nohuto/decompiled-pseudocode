/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DF980
 * Callers:
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C001B338 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00C0738 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxFocusSetInputContext @ 0x1C00C1FBC (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00C2554 (zzzInputFocusLostWindowEvent.c)
 *     UnlockCaptureWindow @ 0x1C0103550 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // edi
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagWND **v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  PETHREAD *v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  char v17; // [rsp+90h] [rbp+30h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  if ( !a2 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 120LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v10;
    if ( v10 )
      HMLockObject(v10);
    QueueNotifyTransformableMessage((struct tagWND *)v10, 134, 0, 0, 0, 0);
    QueueNotifyTransformableMessage(
      (struct tagWND *)v10,
      6,
      (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x20) << 16,
      0,
      0,
      0);
    v11 = (_QWORD *)(*((_QWORD *)a1 + 54) + 120LL);
    if ( v10 == *v11 )
      HMAssignmentUnlock(v11);
    v12 = *(PETHREAD **)(v10 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*v12);
    v14 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v12);
    goto LABEL_21;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 112LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v9;
    if ( v9 )
      HMLockObject(v9);
    QueueNotifyTransformableMessage(v9, 8, 0, 0, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext((__int64)v9, 0, 1);
    v8 = (struct tagWND **)(*((_QWORD *)a1 + 54) + 112LL);
    if ( v9 == *v8 )
    {
      HMAssignmentUnlock(v8);
      if ( v9 )
      {
        v8 = (struct tagWND **)gpqForeground;
        if ( *((_QWORD *)a1 + 54) == gpqForeground )
          zzzInputFocusLostWindowEvent(0LL);
      }
    }
    goto LABEL_21;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL) &= ~0x100000u;
    v5 = *(struct tagWND **)(*((_QWORD *)a1 + 54) + 104LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    QueueNotifyTransformableMessage(v5, 31, 0, 0, 0, 0);
    v8 = (struct tagWND **)*((_QWORD *)a1 + 54);
    if ( v5 == v8[13] )
      UnlockCaptureWindow((__int64)v8);
LABEL_21:
    ThreadUnlock1(v8, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
}
