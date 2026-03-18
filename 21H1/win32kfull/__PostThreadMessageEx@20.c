/*
 * XREFs of __PostThreadMessageEx@20 @ 0x82662
 * Callers:
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?AdjustForCoalescing@@YGXPAUtagMLIST@@PAUHWND__@@I@Z @ 0x827F4 (-AdjustForCoalescing@@YGXPAUtagMLIST@@PAUHWND__@@I@Z.c)
 *     _ProcessSuspendedPostMessage@20 @ 0xADCD4 (_ProcessSuspendedPostMessage@20.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     _AllocQEntry@4 @ 0xEFE7A (_AllocQEntry@4.c)
 */

int __fastcall _PostThreadMessageEx(int a1, unsigned int a2, struct tagWND *a3, unsigned int a4, unsigned int a5)
{
  _DWORD *v7; // ebx
  unsigned int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v15; // ecx
  HWND v16; // [esp+0h] [ebp-10h]
  void *v17; // [esp+0h] [ebp-10h]
  unsigned int v18; // [esp+4h] [ebp-Ch]
  struct tagUIPI_INFO *v19; // [esp+4h] [ebp-Ch]
  _DWORD *CurrentProcessWin32Process; // [esp+Ch] [ebp-4h]

  if ( !a1 || (*(_DWORD *)(a1 + 264) & 0x1000001) != 0x1000000 )
  {
    v15 = 1444;
    goto LABEL_49;
  }
  if ( a2 < 0x400 && ((MessageTable[a2] & 0x200) != 0 || a2 == 537 && ((unsigned __int16)a3 & 0x8000) != 0)
    || a2 == 536 && ((unsigned __int16)a3 & 0x8000) != 0 )
  {
    v15 = 1159;
    goto LABEL_49;
  }
  v7 = *(_DWORD **)(a1 + 232);
  CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
  if ( v7 != CurrentProcessWin32Process )
  {
    if ( a2 <= 0xD0 )
    {
      if ( a2 != 208 && a2 != 12 )
      {
        if ( a2 == 13 )
          goto LABEL_8;
        if ( a2 == 78 )
          goto LABEL_28;
        if ( a2 != 188 )
          goto LABEL_8;
      }
    }
    else
    {
      if ( a2 == 272 )
        goto LABEL_28;
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_8;
    }
    if ( (unsigned __int8)Enforced() && *v7 != _gpepCSRSS
      || v7[106] == CurrentProcessWin32Process[106] && v7[107] == CurrentProcessWin32Process[107] )
    {
      goto LABEL_8;
    }
LABEL_28:
    v15 = 5;
LABEL_49:
    UserSetLastError((struct _NT_TIB *)v15);
    return 0;
  }
LABEL_8:
  if ( IsTouchInputMessage((void *)a2) || a2 == 281 || IsPointerInputMessage(v8) )
  {
    v15 = 1002;
    goto LABEL_49;
  }
  AdjustForCoalescing((struct tagMLIST *)a2, v16, v18);
  if ( (*(_BYTE *)(a1 + 688) & 0x20) != 0 && a1 != _gptiCurrent && !ProcessSuspendedPostMessage(a1, 0, a2, a3, a4) )
    return 0;
  v9 = AllocQEntry(a1 + 448);
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(a1 + 236);
  v11 = *(_DWORD *)(v10 + 64);
  if ( v11 )
    v12 = *(_DWORD *)(v11 + 8);
  else
    v12 = *(_DWORD *)(v10 + 52);
  StoreQMessage(
    (struct tagQMSG *)a2,
    a3,
    a4,
    0,
    0,
    0,
    0LL,
    0,
    a5,
    *(_DWORD *)(*(_DWORD *)(v12 + 232) + 156),
    0,
    0,
    v17,
    v19);
  SetWakeBit(a1, 264);
  if ( a2 == 786 )
    SetWakeBit(a1, 128);
  v13 = *(_DWORD *)(a1 + 236);
  if ( a1 == *(_DWORD *)(v13 + 36) )
    *(_DWORD *)(v13 + 40) = v9;
  return 1;
}
