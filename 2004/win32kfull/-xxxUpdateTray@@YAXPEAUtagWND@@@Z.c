/*
 * XREFs of ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00328D0
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C00338B4 (xxxSetTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     Is31TrayWindow @ 0x1C023E8F0 (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int8 v5; // r10
  __int64 i; // rdx
  _BYTE *v7; // rcx
  struct tagWND *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  bool v16; // zf
  struct tagWND *v17; // rax
  char v18; // al
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-18h]

  v2 = (unsigned __int64)a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v3 = *((_QWORD *)a1 + 15);
    while ( v3 )
    {
      v16 = (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) == 0;
      v17 = (struct tagWND *)v3;
      v3 = *(_QWORD *)(v3 + 120);
      if ( v16 )
        v17 = (struct tagWND *)v2;
      v2 = (unsigned __int64)v17;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 424LL) == gpqForeground
      && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
       || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 192LL))
      && (unsigned int)IsTopLevelWindow(v2)
      && ((v5 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL)) != 0 || (*(_BYTE *)(v4 + 26) & 4) != 0) )
    {
      v19 = 0LL;
      v20 = 0LL;
      for ( i = 1LL; ; i = 0LL )
      {
        v7 = *(_BYTE **)(v2 + 40);
        if ( (v7[21] & 2) != 0 )
        {
          if ( (*(_BYTE *)(v4 + 21) & 2) != 0 && (unsigned int)IsTrayWindow(a1) )
          {
            v8 = a1;
            goto LABEL_15;
          }
          v15 = IsTrayWindow(v2);
          goto LABEL_23;
        }
        if ( (char)v7[24] < 0 )
          break;
        if ( (v7[20] & 0x40) != 0 || (v18 = v7[30], (v18 & 0xA) != 0) && ((v18 & 0xC0) != 0 || (v7[31] & 0x20) != 0) )
        {
          v15 = Is31TrayWindow(v2, i);
LABEL_23:
          v8 = (struct tagWND *)(v2 & -(__int64)(v15 != 0));
          goto LABEL_15;
        }
        if ( !(_DWORD)i )
          return;
        v2 = *(_QWORD *)(v2 + 200);
        if ( !v2 )
          return;
      }
      v8 = 0LL;
LABEL_15:
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v19 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v19;
      *((_QWORD *)&v19 + 1) = v8;
      if ( v8 )
      {
        HMLockObject(v8);
        v10 = *((_QWORD *)v8 + 3);
      }
      else
      {
        v10 = *(_QWORD *)(v2 + 24);
      }
      xxxSetTrayWindow(v10, v8);
      ThreadUnlock1(v12, v11, v13);
    }
    if ( !*((_QWORD *)a1 + 15) || (v14 = 23LL, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      v14 = 19LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v14, *(_QWORD *)a1);
  }
}
