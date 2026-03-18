/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C008A49C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C008A49C (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 * Callees:
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x1C008A49C (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C008A640 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int128 v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  xxxMoveFocusAway((const struct tagWND *)a1);
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 664);
  if ( v3 && a1 == *(_QWORD *)(v3 + 112) )
  {
    xxxDisownClipboard((struct tagWND *)a1);
  }
  else if ( grpWinStaList && a1 == *(_QWORD *)(grpWinStaList + 112LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 112LL);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 4) != 0 )
  {
    xxxSendMessage(a1, 626LL, 0LL, 0LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) &= ~4u;
  }
  xxxSendMessage(a1, 2LL, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 88);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v14 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
      *((_QWORD *)&v14 + 1) = v5;
      if ( v5 )
        HMLockObject(v5);
      v7 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v16 = *(_QWORD *)(v7 + 408);
      *(_QWORD *)(v7 + 408) = &v16;
      *((_QWORD *)&v16 + 1) = v4;
      HMLockObject(v4);
      xxxDW_SendDestroyMessages(v4);
      ThreadUnlock1(v9, v8, v10);
      v4 = v5;
    }
    while ( ThreadUnlock1(v12, v11, v13) && v5 );
  }
  xxxMoveFocusAway((const struct tagWND *)a1);
}
