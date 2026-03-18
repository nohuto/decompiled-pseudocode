/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00078DC (TraceChildWindowDpiTelemetry.c)
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E49DC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rbx
  struct tagBWL *v15; // rbp
  unsigned __int64 *i; // r14
  __int64 v17; // rax
  _QWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-10h]

  result = IsWindowBeingDestroyed((__int64)a1);
  if ( !(_DWORD)result )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 416LL);
    v18[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v18;
    v18[1] = a1;
    HMLockObject(a1);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 13), 2);
    v8 = *(_DWORD *)(v6 + 1072);
    v9 = *(_DWORD *)(v6 + 280);
    if ( !v8 )
      *(_DWORD *)(v6 + 1076) = v9;
    *(_DWORD *)(v6 + 1080) = v9;
    *(_DWORD *)(v6 + 1072) = v8 + 1;
    *(_DWORD *)(v6 + 280) = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v6 + 284) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v10 = *(_QWORD *)(v6 + 664);
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v10 )
      v14 = *(_QWORD **)(v10 + 16);
    else
      v14 = 0LL;
    while ( v14 )
    {
      v15 = BuildHwndList(*(struct tagWND **)(v14[1] + 24LL), 1, 0LL);
      if ( v15 )
      {
        v20 = 0LL;
        v19 = 0LL;
        PushW32ThreadLock((__int64)v14, &v19, UserDereferenceObject);
        ObfReferenceObject(v14);
        for ( i = (unsigned __int64 *)((char *)v15 + 32); *i != 1; ++i )
        {
          v17 = HMValidateHandleNoSecure(*i, 1);
          if ( v17 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) == v6 )
              xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v17, a2, 1);
          }
        }
        FreeHwndList(v15);
        v14 = (_QWORD *)v14[4];
        PopAndFreeW32ThreadLock((__int64)&v19);
      }
    }
    return ThreadUnlock1(v12, v11, v13);
  }
  return result;
}
