/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C00CEC6C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C00CEC6C (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxDW_SendDestroyMessages @ 0x1C00CEC6C (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00CEE10 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C011A378 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxDW_SendDestroyMessages(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int128 v18; // [rsp+38h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  xxxMoveFocusAway((const struct tagWND *)a1);
  v5 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3, v2, v4) + 664);
  if ( v5 && a1 == *(_QWORD *)(v5 + 112) )
  {
    xxxDisownClipboard((struct tagWND *)a1);
  }
  else if ( grpWinStaList && a1 == *(_QWORD *)(grpWinStaList + 112LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 112LL);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 4) != 0 )
  {
    xxxSendMessage(a1, 0x272u, 0LL, 0LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) &= ~4u;
  }
  xxxSendMessage(a1, 2u, 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 112);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 88);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
      *((_QWORD *)&v16 + 1) = v7;
      if ( v7 )
        HMLockObject(v7);
      v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v18 = *(_QWORD *)(v9 + 416);
      *(_QWORD *)(v9 + 416) = &v18;
      *((_QWORD *)&v18 + 1) = v6;
      HMLockObject(v6);
      xxxDW_SendDestroyMessages(v6);
      ThreadUnlock1(v11, v10, v12);
      v6 = v7;
    }
    while ( ThreadUnlock1(v14, v13, v15) && v7 );
  }
  xxxMoveFocusAway((const struct tagWND *)a1);
}
