/*
 * XREFs of xxxFocusSetInputContext @ 0x1C0034B4C
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E0640 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F0578 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v14[2] = 0LL;
  result = a1[17];
  v7 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v7 + 10) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 898LL);
    if ( *(_WORD *)v7 != (_WORD)result )
    {
      result = a1[2];
      v8 = *(struct tagWND **)(result + 776);
      if ( v8 )
      {
        result = *(unsigned int *)(result + 480);
        if ( (result & 1) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v14[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v14;
          v14[1] = v8;
          HMLockObject(v8);
          v10 = *a1;
          if ( a3 )
            QueueNotifyTransformableMessage(v8, 0x287u, 24LL - (a2 != 0), v10, 0, 0);
          else
            xxxSendMessage(v8, 647LL, 24LL - (a2 != 0), v10);
          return ThreadUnlock1(v12, v11, v13);
        }
      }
    }
  }
  return result;
}
