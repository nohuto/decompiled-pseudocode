/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F0160
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F0160 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F0160 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00F03A4 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     DecPaintCount @ 0x1C00F0544 (DecPaintCount.c)
 *     xxxCompositedPaint @ 0x1C023F3F0 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct tagWND *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  v24 = 0LL;
  v3 = a2;
  v5 = a1;
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 2) != 0 )
        break;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
    }
    while ( v5 );
    if ( v5 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v22 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
      v23 = v5;
      HMLockObject(v5);
      xxxCompositedPaint(v5);
LABEL_14:
      ThreadUnlock1(v10, a2, a3);
      return;
    }
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v6 + 136) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*(_BYTE *)(v6 + 17) & 0x10) == 0 )
  {
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1, (__int64)a1, 0x240u, 1);
  SetOrClrWF(0, (__int64)a1, 0x120u, 1);
  v13 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v13 + 21) & 2) == 0 && (*(_BYTE *)(v13 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
  {
    v14 = 1LL;
    v15 = 38;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
    {
      v18 = *((_QWORD *)a1 + 2);
      if ( gptiCurrent != v18 )
      {
        v19 = *(_QWORD *)(v18 + 808);
        v20 = v19 + 16;
        v21 = -v19;
        a3 = v20 & -(__int64)(v21 != 0);
        if ( !a3
          || *(_DWORD *)((v20 & -(__int64)(v21 != 0)) + 8) != 15
          || *(_QWORD *)((v20 & -(__int64)(v21 != 0)) + 0x10)
          || *(_QWORD *)((v20 & -(__int64)(v21 != 0)) + 0x18) )
        {
          PostMessage((int)a1, 15, 0, 0);
        }
        goto LABEL_26;
      }
    }
    v14 = 0LL;
    v15 = 15;
  }
  xxxSendMessage((unsigned __int64)a1, v15, v14, 0LL);
LABEL_26:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_7:
  if ( (v3 & 1) != 0 )
  {
    v7 = *((_QWORD *)a1 + 3);
    v8 = 0LL;
    if ( v7 )
    {
      a2 = *(_QWORD *)(v7 + 8);
      if ( a2 )
        v8 = *(struct tagWND **)(a2 + 24);
    }
    if ( a1 != v8 )
    {
      v9 = 0LL;
      v10 = gptiCurrent;
      v22 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v22;
      v11 = *((_QWORD *)a1 + 14);
      v23 = 0LL;
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 40);
        if ( (*(_BYTE *)(v12 + 24) & 0x20) == 0 || !*(_QWORD *)(v12 + 136) && (*(_BYTE *)(v12 + 17) & 0x10) == 0 )
          goto LABEL_17;
        a2 = *(_QWORD *)(v11 + 88);
        v10 = a2;
        if ( !a2 )
          goto LABEL_17;
        while ( 1 )
        {
          v16 = *(_QWORD *)(v10 + 40);
          if ( *(_QWORD *)(v16 + 136) || (*(_BYTE *)(v16 + 17) & 0x10) != 0 )
            break;
          v10 = *(_QWORD *)(v10 + 88);
          if ( !v10 )
            goto LABEL_17;
        }
        if ( v10 )
        {
          v11 = *(_QWORD *)(v11 + 88);
        }
        else
        {
LABEL_17:
          v23 = (struct tagWND *)v11;
          HMLockObject(v11);
          if ( v9 )
            HMUnlockObject(v9);
          xxxUpdateWindow2((struct tagWND *)v11, v3 | 4);
          v11 = *(_QWORD *)(v11 + 88);
          v9 = v23;
        }
      }
      goto LABEL_14;
    }
  }
}
