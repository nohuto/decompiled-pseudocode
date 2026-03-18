/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0056C74
 * Callers:
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0056AE0 (xxxEmptyClipboard.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, int a2)
{
  __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD v10[3]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+68h] [rbp-20h] BYREF
  __int64 v12; // [rsp+78h] [rbp-10h]
  unsigned __int64 LowLimit; // [rsp+90h] [rbp+8h] BYREF

  v10[2] = 0LL;
  LowLimit = 0LL;
  v2 = *((_QWORD *)a1 + 14);
  v11 = 0LL;
  v12 = 0LL;
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v10;
    v10[1] = v2;
    HMLockObject(v2);
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(v2, 775, 0, 0, 2, 5000, (unsigned __int64)&LowLimit, 1, 0) )
        xxxSendNotifyMessage(v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v8 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 416LL), 0LL, 2LL, 0LL);
      v9 = v8;
      if ( v8 )
        PushW32ThreadLock(v8, &v11, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout(v2, a2, 0, 0, 64, 0, (unsigned __int64)&LowLimit, 1, 0);
      if ( v9 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v11);
    }
    ThreadUnlock1(v6, v5, v7);
  }
}
