/*
 * XREFs of ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A
 * Callers:
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 *     ?ValidateParents@@YGHPAUtagWND@@H@Z @ 0x7D624 (-ValidateParents@@YGHPAUtagWND@@H@Z.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     _DecPaintCount@4 @ 0xAA80E (_DecPaintCount@4.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 */

void __fastcall xxxUpdateWindow2(_DWORD *a1, char a2)
{
  int StyleWindow; // edi
  int v5; // ecx
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int i; // eax
  int v13; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v16; // ecx
  _DWORD *v17; // ecx
  struct tagWND *v18; // [esp+0h] [ebp-18h]
  unsigned int v19; // [esp+4h] [ebp-14h]
  int v20; // [esp+Ch] [ebp-Ch] BYREF
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v22 = 0;
  StyleWindow = GetStyleWindow((int)a1, 2818);
  if ( StyleWindow )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v20 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v20;
    v21 = StyleWindow;
    HMLockObject(StyleWindow);
    xxxCompositedPaint(StyleWindow);
LABEL_11:
    ThreadUnlock1();
    return;
  }
  v5 = a1[5];
  if ( *(_DWORD *)(v5 + 92) )
  {
    if ( !ValidateParents(v18, v19) )
      return;
  }
  else if ( (*(_BYTE *)(v5 + 9) & 0x10) == 0 )
  {
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1[5] + 9) & 0x10) != 0 )
  {
    SetOrClrWF(0, (int)a1, 0x110u, 1);
    if ( !*(_DWORD *)(a1[5] + 92) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1, (int)a1, 0x240u, 1);
  SetOrClrWF(0, (int)a1, 0x120u, 1);
  v11 = a1[5];
  if ( (*(_BYTE *)(v11 + 13) & 2) == 0 && (*(_BYTE *)(v11 + 23) & 0x20) != 0 && *(_DWORD *)(a1[19] + 48) )
  {
    xxxSendMessage(a1, 1u, 0);
  }
  else if ( (*(_DWORD *)(_gptiCurrent + 688) & 0x40000) == 0 || (v16 = a1[2], _gptiCurrent == v16) )
  {
    xxxSendMessage(a1, 0, 0);
  }
  else
  {
    v17 = *(_DWORD *)(v16 + 452) != 0 ? (_DWORD *)(*(_DWORD *)(v16 + 452) + 8) : 0;
    if ( !v17 || v17[1] != 15 || v17[2] || v17[3] )
      _PostMessage((int)a1, 15, 0, 0);
  }
  if ( (*(_BYTE *)(a1[5] + 10) & 0x40) != 0 )
    xxxSimpleDoSyncPaint((struct tagVWPL **)a1);
LABEL_4:
  if ( (a2 & 1) != 0 )
  {
    v6 = a1[3];
    v7 = 0;
    if ( v6 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      if ( v8 )
        v7 = *(_DWORD **)(v8 + 12);
    }
    if ( a1 != v7 )
    {
      v20 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v20;
      v9 = a1[15];
      v21 = 0;
LABEL_10:
      while ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 20);
        if ( (*(_BYTE *)(v10 + 16) & 0x20) != 0 && (*(_DWORD *)(v10 + 92) || (*(_BYTE *)(v10 + 9) & 0x10) != 0) )
        {
          for ( i = *(_DWORD *)(v9 + 48); i; i = *(_DWORD *)(i + 48) )
          {
            v13 = *(_DWORD *)(i + 20);
            if ( *(_DWORD *)(v13 + 92) || (*(_BYTE *)(v13 + 9) & 0x10) != 0 )
            {
              v9 = *(_DWORD *)(v9 + 48);
              goto LABEL_10;
            }
          }
        }
        ThreadLockExchangeAlways(v9, &v20);
        xxxUpdateWindow2(v18, v19);
        v9 = *(_DWORD *)(v9 + 48);
      }
      goto LABEL_11;
    }
  }
}
