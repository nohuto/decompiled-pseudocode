/*
 * XREFs of _PostThreadMessageEx @ 0x1C00BE914
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 *     _PostThreadMessage @ 0x1C00BE8A8 (_PostThreadMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0097B60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00BEB28 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FC7C8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1C011CBE0 (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rbp
  struct tagQMSG *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rcx

  v5 = (unsigned int)a2;
  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 480) & 0x1000001) != 0x1000000 )
  {
    v16 = 1444LL;
    goto LABEL_45;
  }
  a2 = 0x8000LL;
  if ( (unsigned int)v5 < 0x400
    && ((a1 = (unsigned __int16)MessageTable[v5], (a1 & 0x200) != 0) || (_DWORD)v5 == 537 && (a3 & 0x8000) != 0)
    || (_DWORD)v5 == 536 && (a3 & 0x8000) != 0 )
  {
    v16 = 1159LL;
LABEL_45:
    UserSetLastError(v16, a2, a3);
    return 0LL;
  }
  v9 = *(_QWORD *)(v8 + 416);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( v9 != CurrentProcessWin32Process )
  {
    if ( (unsigned int)v5 <= 0xD0 )
    {
      if ( (_DWORD)v5 != 208 )
      {
        v10 = (unsigned int)(v5 - 12);
        if ( (_DWORD)v5 != 12 )
        {
          if ( (_DWORD)v5 == 13 )
            goto LABEL_8;
          if ( (_DWORD)v5 == 78 )
            goto LABEL_39;
          v10 = (unsigned int)(v5 - 188);
          if ( (_DWORD)v5 != 188 )
            goto LABEL_8;
        }
      }
    }
    else
    {
      if ( (_DWORD)v5 == 272 )
        goto LABEL_39;
      if ( (_DWORD)v5 != 353 && (_DWORD)v5 != 424 && (_DWORD)v5 != 563 && (_DWORD)v5 != 648 )
        goto LABEL_8;
    }
    if ( (unsigned __int8)Enforced(v10) && *(_QWORD *)v9 != gpepCSRSS
      || *(_DWORD *)(v9 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
      && *(_DWORD *)(v9 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
    {
      goto LABEL_8;
    }
LABEL_39:
    v16 = 5LL;
    goto LABEL_45;
  }
LABEL_8:
  if ( (_DWORD)v5 == 576 || (_DWORD)v5 == 281 || IsPointerInputMessage(v5) )
  {
    v16 = 1002LL;
    goto LABEL_45;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 800), 0LL, v5);
  if ( (*(_DWORD *)(v8 + 1224) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, (unsigned int)v5, a3) )
  {
    return 0LL;
  }
  v12 = AllocQEntryEx((struct tagMLIST *)(v8 + 800), 0LL, 0);
  if ( !v12 )
    return 0LL;
  v13 = PtiKbdFromQ(*(_QWORD *)(v8 + 424));
  StoreQMessage(v12, 0LL, v5, a3, a4, 0, 0LL, 0, 0LL, 0, a5, *(_DWORD *)(*(_QWORD *)(v13 + 416) + 280LL), 0LL, 0LL);
  SetWakeBit(v8, 0x108u);
  if ( (_DWORD)v5 == 786 )
    SetWakeBit(v8, 0x80u);
  v14 = *(_QWORD *)(v8 + 424);
  if ( v8 == *(_QWORD *)(v14 + 64) )
    *(_QWORD *)(v14 + 72) = v12;
  return 1LL;
}
