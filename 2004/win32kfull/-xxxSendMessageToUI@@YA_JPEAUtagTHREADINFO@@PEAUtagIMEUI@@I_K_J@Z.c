/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3450
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E36A0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  struct tagIMEUI *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v15; // [rsp+50h] [rbp-78h]
  __int128 v16; // [rsp+70h] [rbp-58h] BYREF
  __int64 v17; // [rsp+80h] [rbp-48h]
  __int128 v18; // [rsp+88h] [rbp-40h] BYREF
  __int64 v19; // [rsp+98h] [rbp-30h]
  __int64 v21; // [rsp+F0h] [rbp+28h]

  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, &v18);
    KeAttachProcess(*a1[52]);
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (struct tagIMEUI *)MmUserProbeAddress;
  v15 = HMValidateHandleNoSecure(*((_QWORD *)v8 + 4), 1);
  if ( v15 )
  {
    v9 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v9);
    if ( v7 )
      KeDetachProcess();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
    *((_QWORD *)&v16 + 1) = v15;
    HMLockObject(v15);
    _InterlockedIncrement(&glSendMessage);
    v21 = xxxSendTransformableMessageTimeout(v15, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v12, v11, v13);
    if ( v7 )
    {
      if ( ((_DWORD)a1[60] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)&v18);
        return v21;
      }
      KeAttachProcess(*a1[52]);
    }
    _InterlockedDecrement(v9);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v21;
}
