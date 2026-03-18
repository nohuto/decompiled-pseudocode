/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C0003798
 * Callers:
 *     xxxHandleHealthyWindow @ 0x1C0003700 (xxxHandleHealthyWindow.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 * Callees:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     IsNonImmersiveBand @ 0x1C0022AB4 (IsNonImmersiveBand.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0;
  v4 = *((_QWORD *)a1 + 18);
  v5 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v5 == word_1C033AF24 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v6 = RealInternalRemoveProp(v4, v5, 1LL);
  if ( v6 )
  {
    if ( v6 == -1 )
    {
      if ( !(unsigned int)IsNonImmersiveBand(a1) )
        PostShellHookMessages(52LL, *(_QWORD *)a1);
      v6 = 0LL;
    }
    goto LABEL_5;
  }
  v14 = *(unsigned __int16 *)(gpsi + 1378LL);
  v15 = *((_QWORD *)a1 + 18);
  if ( (_WORD)v14 == word_1C033AF24 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v6 = RealInternalRemoveProp(v15, v14, 1LL);
  if ( v6 )
  {
    v2 = 1;
LABEL_5:
    v1 = 1;
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      v8 = HMValidateHandleNoSecure(v6, v7);
      if ( v8 )
      {
        v16[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v16[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v16;
        v16[1] = v8;
        HMLockObject(v8);
        v10 = *(_QWORD *)(v8 + 40);
        if ( (*(_WORD *)(v10 + 42) & 0x3FFF) == 0x2AA )
        {
          if ( v2 )
            v11 = *(unsigned __int16 *)(gpsi + 1378LL);
          else
            v11 = *(unsigned __int16 *)(gpsi + 900LL);
          v12 = *(_QWORD *)(v8 + 144);
          if ( (_WORD)v11 == word_1C033AF24 )
            *(_QWORD *)(v10 + 312) = 0LL;
          RealInternalRemoveProp(v12, v11, 1LL);
          xxxHideGhostWindow((struct tagWND *)v8, a1);
        }
        else
        {
          v1 = 0;
        }
        ThreadUnlock1();
      }
    }
  }
  return v1;
}
