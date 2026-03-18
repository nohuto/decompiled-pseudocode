/*
 * XREFs of xxxDoPaint @ 0x1C0092318
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C0036D0C (ExchangeW32ThreadLock.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0092660 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     _IsChild @ 0x1C01213B4 (_IsChild.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v4; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax
  int v9; // r15d
  int v10; // esi
  int v11; // r12d
  _DWORD *v12; // rax
  int v13; // r9d
  int v14; // r8d
  int v15; // edi
  __int64 v16; // rax
  int v17; // r15d
  int v18; // esi
  int v19; // r12d
  _DWORD *v20; // rax
  int v21; // r9d
  int v22; // r8d
  int v23; // edi
  struct tagWND *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v29; // rdi
  __int64 v30; // rax
  _QWORD *i; // rdi
  BOOL v32; // edx
  __int64 v33; // rcx
  void *v34; // rax
  BOOL v35; // edx
  __int64 v36; // rcx
  void *v37; // rax
  __int128 v38; // [rsp+20h] [rbp-38h] BYREF
  __int64 v39; // [rsp+30h] [rbp-28h]

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
  {
    v29 = *(_QWORD *)(gptiCurrent + 608LL);
    if ( !v29 )
      return 0LL;
    v4 = *(struct tagWND **)(*(_QWORD *)(v29 + 56) + 8LL);
    v30 = *((_QWORD *)v4 + 5);
    if ( !*(_QWORD *)(v30 + 136) && (*(_BYTE *)(v30 + 17) & 0x10) == 0 )
    {
      v4 = 0LL;
      v39 = 0LL;
      v38 = 0LL;
      PushW32ThreadLock(0LL, &v38, UserDereferenceObject);
      for ( i = *(_QWORD **)(v29 + 16); i; i = (_QWORD *)i[4] )
      {
        ObfReferenceObject(i);
        ExchangeW32ThreadLock((__int64)i, (__int64)&v38);
        v4 = xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
        if ( v4 )
          break;
      }
      PopAndFreeW32ThreadLock(&v38);
    }
  }
  else
  {
    v4 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL),
           gptiCurrent);
  }
  if ( !v4 )
    return 0LL;
  if ( !(!a1 || a1 == v4 ? 1 : IsChild(a1, v4)) )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, v4, 272LL, 1LL);
    if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 136LL) )
    {
      v6 = *((_QWORD *)v4 + 2);
      if ( (*(_DWORD *)(v6 + 592))-- == 1 )
      {
        *(_WORD *)(*(_QWORD *)(v6 + 440) + 6LL) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(v6 + 440) + 4LL) &= ~0x20u;
      }
    }
  }
  v8 = *((_QWORD *)v4 + 5);
  v9 = *(_DWORD *)(v8 + 28);
  v10 = *(_DWORD *)(v8 + 24);
  v11 = *(_DWORD *)(v8 + 232);
  *(_BYTE *)(v8 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_15;
  v12 = (_DWORD *)*((_QWORD *)v4 + 5);
  v13 = v12[7];
  v14 = v12[6];
  v15 = v12[58];
  if ( v9 != v13 )
    goto LABEL_44;
  if ( v10 == v14 && v11 == v15 )
    goto LABEL_15;
  if ( v9 != v13 )
  {
LABEL_44:
    v32 = ((v9 ^ v13) & 0xB1CF0000) != 0;
    goto LABEL_47;
  }
  if ( v10 != v14 )
  {
    v32 = ((v10 ^ v14) & 0x4E27A9) != 0;
    goto LABEL_47;
  }
  if ( ((v11 ^ v15) & 0x2E00300) != 0 )
  {
    v32 = 1;
LABEL_47:
    if ( v32 )
    {
      DirtyVisRgnTrackers(v4);
      v34 = (void *)ReferenceDwmApiPort(v33);
      DwmAsyncChildStyleChange(v34);
    }
  }
LABEL_15:
  v16 = *((_QWORD *)v4 + 5);
  v17 = *(_DWORD *)(v16 + 28);
  v18 = *(_DWORD *)(v16 + 24);
  v19 = *(_DWORD *)(v16 + 232);
  *(_BYTE *)(v16 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v4) )
    goto LABEL_19;
  v20 = (_DWORD *)*((_QWORD *)v4 + 5);
  v21 = v20[7];
  v22 = v20[6];
  v23 = v20[58];
  if ( v17 != v21 )
    goto LABEL_52;
  if ( v18 == v22 && v19 == v23 )
    goto LABEL_19;
  if ( v17 == v21 )
  {
    if ( v18 == v22 )
    {
      if ( ((v19 ^ v23) & 0x2E00300) == 0 )
        goto LABEL_19;
      v35 = 1;
    }
    else
    {
      v35 = ((v18 ^ v22) & 0x4E27A9) != 0;
    }
  }
  else
  {
LABEL_52:
    v35 = ((v17 ^ v21) & 0xB1CF0000) != 0;
  }
  if ( v35 )
  {
    DirtyVisRgnTrackers(v4);
    v37 = (void *)ReferenceDwmApiPort(v36);
    DwmAsyncChildStyleChange(v37);
  }
LABEL_19:
  v24 = v4;
  while ( (*(_WORD *)(*((_QWORD *)v24 + 5) + 42LL) & 0x3FFF) != 0x29D )
  {
    v24 = (struct tagWND *)*((_QWORD *)v24 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v24 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1LL, v4, 1025LL, 1LL);
      break;
    }
    if ( !v24 )
      break;
  }
  v25 = *(_QWORD *)v4;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)a2 = v25;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v4 + 5) + 288LL));
  v26 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v26 + 21) & 2) == 0 && (*(_BYTE *)(v26 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)v4 + 17) + 80LL) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v27 = 38;
  }
  else
  {
    v27 = 15;
  }
  *(_DWORD *)(a2 + 8) = v27;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
