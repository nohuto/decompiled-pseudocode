/*
 * XREFs of xxxMenuDraw @ 0x1C003354C
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00FAF50 (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023571C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C024CF74 (xxxMenuBarDraw.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00334D0 (xxxSendUAHInitMenuMessage.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0033824 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     DrawEdge @ 0x1C00375E4 (DrawEdge.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00FB170 (xxxSendUAHMenuMessage.c)
 *     GreSetViewportOrg @ 0x1C0104B50 (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C011B8B8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  char v7; // r14
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r15d
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int TextAlign; // eax
  _DWORD **v13; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  struct tagITEM *v18; // r14
  unsigned int v19; // r15d
  int v20; // r13d
  int *v21; // rdx
  int *v22; // r8
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  char v31; // r15
  int v32; // ecx
  _DWORD *v33; // r8
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // [rsp+38h] [rbp-61h] BYREF
  __int128 v39; // [rsp+40h] [rbp-59h]
  int v40; // [rsp+50h] [rbp-49h]
  int v41; // [rsp+54h] [rbp-45h]
  int v42; // [rsp+58h] [rbp-41h]
  int v43; // [rsp+5Ch] [rbp-3Dh]
  int v44; // [rsp+60h] [rbp-39h]
  int v45; // [rsp+64h] [rbp-35h]
  __int64 v46; // [rsp+68h] [rbp-31h]
  __int64 v47; // [rsp+70h] [rbp-29h]
  _QWORD v48[3]; // [rsp+78h] [rbp-21h] BYREF
  __int64 **v49[3]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v50[16]; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v51; // [rsp+B8h] [rbp+1Fh]
  int v52; // [rsp+108h] [rbp+6Fh]

  v3 = 0;
  v38 = 0LL;
  v4 = a3;
  v52 = 0;
  v46 = gptiCurrent;
  v7 = 0;
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 0;
  v39 = 0LL;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v40 = v10;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 80);
  v48[2] = 0LL;
  GreGetDCPoint(a1, 4LL, &v38);
  DPIMETRICS = GetDPIMETRICS((struct tagWND *)v4);
  v47 = GreSelectFont(a1, *(_QWORD *)DPIMETRICS);
  TextAlign = GreGetTextAlign(a1);
  v13 = *(_DWORD ***)(a2 + 88);
  v41 = TextAlign;
  if ( v13 && (**v13 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v48[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  v17 = v48;
  *(_QWORD *)(ThreadWin32Thread + 416) = v48;
  v48[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
  {
LABEL_37:
    v9 = GreSetBkMode(a1);
    v52 = v9;
    goto LABEL_12;
  }
  if ( gihmodUserApiHook >= 0 && v10 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(v49, a2),
          v49[2] = 0LL,
          v7 = 1,
          v31 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, v49, (__int64)a1)) )
    {
      v31 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v49);
    if ( !v31 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      ThreadLockExchange(v4, v48);
      goto LABEL_12;
    }
    xxxSendUAHMenuMessage(v4, 145LL, a2, a1);
    goto LABEL_37;
  }
LABEL_12:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v18 = (struct tagITEM *)MNGetpItemFromIndex(a2, *(unsigned int *)(a2 + 116));
    GreSetViewportOrg(a1);
    v19 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v18 = *(struct tagITEM **)(a2 + 88);
    v19 = 0;
  }
  if ( v19 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
    goto LABEL_27;
  v20 = v40;
  while ( v18 )
  {
    v21 = *(int **)v18;
    v22 = *(int **)v18;
    v23 = **(_DWORD **)v18;
    LOWORD(v24) = v23;
    if ( (v23 & 0x20) != 0 && v20 )
    {
      if ( (v23 & 0x2000) != 0 && v19 )
        v32 = *(_DWORD *)(*((_QWORD *)v18 - 12) + 64LL);
      else
        v32 = v21[16];
      *(_QWORD *)&v39 = (unsigned int)(v32 - 3);
      DWORD2(v39) = v32 - 1;
      HIDWORD(v39) = *(_DWORD *)(a2 + 68);
      DrawEdge(a1);
      v22 = *(int **)v18;
      v24 = **(_DWORD **)v18;
    }
    if ( (v24 & 0x800) == 0
      || (v24 & 0x100) != 0 && *(_WORD *)(v46 + 632) >= 0x400u
      || (unsigned int)MNIsUAHMenu(a2, v21, v22) )
    {
      SmartObjStackRefBase<tagMENU>::Init(v50, a2);
      v51 = 0LL;
      if ( v4 )
      {
        v29 = *(_QWORD *)(v4 + 40);
        if ( (*(_DWORD *)(v29 + 288) & 0xF) != 3 && (*(_DWORD *)(v29 + 232) & 0x8000000) != 0 )
          GetWindowDpiLastNotify(v4);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 0 )
      {
        PsGetCurrentProcessWin32Process(v36, v35, v37);
      }
      xxxDrawMenuItem(a1, 0, v4);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v50);
      if ( (unsigned int)MNGetpItemIndex(a2, v18) == -1 )
        goto LABEL_25;
    }
    else
    {
      v34 = v33[16];
      v43 = (v33[19] >> 1) - 1 + v33[17];
      v42 = v34 + 1;
      v44 = v33[18] - 1 + v34;
      v45 = v43 + 2;
      DrawEdge(a1);
      MNDrawInsertionBar(a1, v18);
    }
    if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
    {
      v3 += *(_DWORD *)(*(_QWORD *)v18 + 76LL);
      if ( v3 > *(_DWORD *)(a2 + 68) )
        break;
    }
LABEL_25:
    v18 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v19);
    if ( v19 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
      break;
  }
  v9 = v52;
LABEL_27:
  ThreadUnlock1(v17, v15, v16);
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1, v41);
  return GreSelectFont(a1, v47);
}
