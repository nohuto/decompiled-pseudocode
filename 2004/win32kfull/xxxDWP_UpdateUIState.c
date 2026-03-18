/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00603D8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  struct tagWND *v9; // r9
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  _QWORD *i; // rbx
  __int64 v16; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edi
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]

  v3 = a2;
  v4 = a2 >> 16;
  LOWORD(v6) = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  v7 = *gpsi;
  if ( (_WORD)a2 == 3 )
  {
    if ( (v7 & 0x80u) != 0 )
      return 0LL;
    v22 = *(_DWORD *)(gpsi + 7004LL);
    if ( (v22 & 0x20) != 0 || v22 >= 0 || (GetAppCompatFlags2(1024LL) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_10:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1LL, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      v21 = 1LL;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v23 = *gpsi & 0x40;
          SetOrClrWF(v23 == 0, a1, 2944LL, 1LL);
          SetOrClrWF(v23 == 0, a1, 2880LL, 1LL);
          v3 = (v23 != 0) + 196609LL;
        }
        goto LABEL_16;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF((unsigned int)(unsigned __int16)v6 - 2, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
      {
LABEL_16:
        v9 = *(struct tagWND **)(a1 + 112);
        if ( v9 )
        {
          v25 = 0LL;
          v24 = 0LL;
          if ( gptiCurrent == gTermIO[2] || (v11 = 0LL, gptiCurrent == qword_1C0339FE0) )
            v11 = 1LL;
          v12 = BuildHwndList(v9);
          v14 = v12;
          if ( v12 )
          {
            for ( i = (_QWORD *)(v12 + 32); *i != 1LL; ++i )
            {
              LOBYTE(v13) = 1;
              v16 = HMValidateHandleNoSecure(*i, v13);
              if ( v16 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                *(_QWORD *)&v24 = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
                *((_QWORD *)&v24 + 1) = v16;
                HMLockObject(v16);
                if ( v11 )
                  xxxSendNotifyMessage(v16, 0x128u, v3, 0LL, 1);
                else
                  xxxSendMessage(v16, 296LL, v3, 0LL);
                ThreadUnlock1(v19, v18, v20);
              }
            }
            FreeHwndList(v14);
          }
        }
        return 0LL;
      }
      v21 = 0LL;
    }
    SetOrClrWF(v21, a1, 2820LL, 1LL);
    goto LABEL_16;
  }
  if ( (v7 & 0x80u) != 0
    || (v8 = *(_DWORD *)(gpsi + 7004LL), (v8 & 0x20) != 0)
    || v8 >= 0
    || (GetAppCompatFlags2(1024LL) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_10;
  return 0LL;
}
