/*
 * XREFs of xxxMenuDraw @ 0x1C00609B8
 * Callers:
 *     xxxPaintMenuBar @ 0x1C005D020 (xxxPaintMenuBar.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02365AC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMenuBarDraw @ 0x1C024E57C (xxxMenuBarDraw.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C005D240 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C005D314 (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     xxxSendUAHMenuMessage @ 0x1C005D4CC (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00608DC (xxxSendUAHInitMenuMessage.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0060C90 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     DrawEdge @ 0x1C0061B00 (DrawEdge.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00626AC (GreSetBkMode.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     ThreadLockExchange @ 0x1C00B2F7C (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
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
  __int64 v17; // r9
  _QWORD *v18; // rcx
  struct tagITEM *v19; // r14
  unsigned int v20; // r15d
  int v21; // r13d
  int *v22; // rdx
  int *v23; // r8
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v29; // r15
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  _DWORD *v33; // r8
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // [rsp+38h] [rbp-61h] BYREF
  __int128 v37; // [rsp+40h] [rbp-59h]
  int v38; // [rsp+50h] [rbp-49h]
  int v39; // [rsp+54h] [rbp-45h]
  int v40; // [rsp+58h] [rbp-41h]
  int v41; // [rsp+5Ch] [rbp-3Dh]
  int v42; // [rsp+60h] [rbp-39h]
  int v43; // [rsp+64h] [rbp-35h]
  __int64 v44; // [rsp+68h] [rbp-31h]
  __int64 v45; // [rsp+70h] [rbp-29h]
  _QWORD v46[3]; // [rsp+78h] [rbp-21h] BYREF
  __int64 **v47[3]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v48[16]; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v49; // [rsp+B8h] [rbp+1Fh]
  int v50; // [rsp+108h] [rbp+6Fh]

  v3 = 0;
  v36 = 0LL;
  v4 = a3;
  v50 = 0;
  v44 = gptiCurrent;
  v7 = 0;
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 0;
  v37 = 0LL;
  v10 = *(_DWORD *)(v8 + 40) & 1;
  v38 = v10;
  if ( gihmodUserApiHook < 0 || !a3 )
    v4 = *(_QWORD *)(a2 + 80);
  v46[2] = 0LL;
  GreGetDCPoint(a1, 4LL, &v36);
  DPIMETRICS = GetDPIMETRICS((struct tagWND *)v4);
  v45 = GreSelectFont(a1, *(_QWORD *)DPIMETRICS);
  TextAlign = GreGetTextAlign(a1);
  v13 = *(_DWORD ***)(a2 + 88);
  v39 = TextAlign;
  if ( v13 && (**v13 & 0x2000) != 0 )
    GreSetTextAlign(a1, TextAlign | 0x100);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v46[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  v18 = v46;
  *(_QWORD *)(ThreadWin32Thread + 408) = v46;
  v46[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) )
    goto LABEL_37;
  if ( gihmodUserApiHook >= 0 && v10 )
  {
    if ( !v4
      || (SmartObjStackRefBase<tagMENU>::Init(v47, a2),
          v47[2] = 0LL,
          v7 = 1,
          v29 = 1,
          !(unsigned int)xxxSendUAHInitMenuMessage(v4, v47, (__int64)a1)) )
    {
      v29 = 0;
    }
    if ( (v7 & 1) != 0 )
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v47);
    if ( !v29 )
    {
      v4 = *(_QWORD *)(a2 + 80);
      ThreadLockExchange(v4, v46);
      goto LABEL_12;
    }
    xxxSendUAHMenuMessage(v4, 145LL, a2, (__int64)a1);
LABEL_37:
    v9 = GreSetBkMode(a1);
    v50 = v9;
  }
LABEL_12:
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v30 = MNGetpItemFromIndex(a2, *(unsigned int *)(a2 + 116));
    v19 = (struct tagITEM *)v30;
    if ( v30 )
      v31 = *(_DWORD *)(*(_QWORD *)v30 + 68LL);
    else
      v31 = 0;
    GreSetViewportOrg(a1, v36, HIDWORD(v36) - v31);
    v20 = *(_DWORD *)(a2 + 116);
  }
  else
  {
    v19 = *(struct tagITEM **)(a2 + 88);
    v20 = 0;
  }
  if ( v20 < *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
  {
    v21 = v38;
    while ( 1 )
    {
      if ( !v19 )
      {
LABEL_26:
        v9 = v50;
        break;
      }
      v22 = *(int **)v19;
      v23 = *(int **)v19;
      v24 = **(_DWORD **)v19;
      LOWORD(v25) = v24;
      if ( (v24 & 0x20) != 0 && v21 )
      {
        if ( (v24 & 0x2000) != 0 && v20 )
          v32 = *(_DWORD *)(*((_QWORD *)v19 - 12) + 64LL);
        else
          v32 = v22[16];
        *(_QWORD *)&v37 = (unsigned int)(v32 - 3);
        DWORD2(v37) = v32 - 1;
        HIDWORD(v37) = *(_DWORD *)(a2 + 68);
        DrawEdge(a1);
        v23 = *(int **)v19;
        v25 = **(_DWORD **)v19;
      }
      if ( (v25 & 0x800) == 0
        || (v25 & 0x100) != 0 && *(_WORD *)(v44 + 624) >= 0x400u
        || (unsigned int)MNIsUAHMenu(a2, v22, v23, v17) )
      {
        SmartObjStackRefBase<tagMENU>::Init(v48, a2);
        v49 = 0LL;
        if ( v4 )
        {
          v27 = *(_QWORD *)(v4 + 40);
          if ( (*(_DWORD *)(v27 + 288) & 0xF) != 3 && (*(_DWORD *)(v27 + 232) & 0x8000000) != 0 )
            GetWindowDpiLastNotify(v4);
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext(v26) & 0xF) != 0 )
        {
          PsGetCurrentProcessWin32Process(v35);
        }
        xxxDrawMenuItem(a1, 0, v4);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v48);
        if ( (unsigned int)MNGetpItemIndex(a2, v19) == -1 )
          goto LABEL_25;
      }
      else
      {
        v34 = v33[16];
        v41 = (v33[19] >> 1) - 1 + v33[17];
        v40 = v34 + 1;
        v42 = v33[18] - 1 + v34;
        v43 = v41 + 2;
        DrawEdge(a1);
        MNDrawInsertionBar(a1, v19);
      }
      if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
      {
        v3 += *(_DWORD *)(*(_QWORD *)v19 + 76LL);
        if ( v3 > *(_DWORD *)(a2 + 68) )
          goto LABEL_26;
      }
LABEL_25:
      v19 = (struct tagITEM *)MNGetpItemFromIndex(a2, ++v20);
      if ( v20 >= *(_DWORD *)(*(_QWORD *)(a2 + 40) + 44LL) )
        goto LABEL_26;
    }
  }
  ThreadUnlock1(v18, v15, v16);
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1, v36, SHIDWORD(v36));
  GreSetTextAlign(a1, v39);
  return GreSelectFont(a1, v45);
}
