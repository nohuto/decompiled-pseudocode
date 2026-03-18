/*
 * XREFs of xxxFocusSetInputContext @ 0x1C00C1FBC
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DF980 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C001B338 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _LARGE_STRING *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v14[2] = 0LL;
  result = *(_QWORD *)(a1 + 136);
  v7 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v7 + 10) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 898LL);
    if ( *(_WORD *)v7 != (_WORD)result )
    {
      result = *(_QWORD *)(a1 + 16);
      v8 = *(struct tagWND **)(result + 784);
      if ( v8 )
      {
        result = *(unsigned int *)(result + 488);
        if ( (result & 1) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v14;
          v14[1] = v8;
          HMLockObject(v8);
          v10 = *(struct _LARGE_STRING **)a1;
          if ( a3 )
            QueueNotifyTransformableMessage(v8, 647, 24 - (a2 != 0), (int)v10, 0, 0);
          else
            xxxSendMessage((unsigned __int64)v8, 0x287u, 24LL - (a2 != 0), v10);
          return ThreadUnlock1(v12, v11, v13);
        }
      }
    }
  }
  return result;
}
