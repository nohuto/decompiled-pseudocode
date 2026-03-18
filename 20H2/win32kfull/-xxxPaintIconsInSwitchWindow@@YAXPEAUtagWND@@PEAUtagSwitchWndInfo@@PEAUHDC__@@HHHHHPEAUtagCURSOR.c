/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3124
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F24A0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F2F40 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3568 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     xxxSendMessageCallback @ 0x1C0039C44 (xxxSendMessageCallback.c)
 *     _ScrollDC @ 0x1C00416B0 (_ScrollDC.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C01293A8 (DSW_GetTopLevelCreatorWindow.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z @ 0x1C01F2CDC (-NextPrevPhwnd@@YAPEAPEAUHWND__@@PEAUtagSwitchWndInfo@@PEAPEAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F2D18 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 */

void __fastcall xxxPaintIconsInSwitchWindow(
        struct tagWND *a1,
        struct tagSwitchWndInfo *a2,
        HDC a3,
        int PrevTaskIndex,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagCURSOR *a9)
{
  struct tagCURSOR *v9; // rsi
  struct tagCURSOR *v10; // r11
  int v14; // ecx
  HDC v15; // r10
  int v16; // edi
  int v17; // r14d
  __int64 DCEx; // rax
  int v19; // r8d
  LONG v20; // r13d
  int v21; // eax
  LONG v22; // eax
  int v23; // r8d
  int v24; // r12d
  int v25; // r14d
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r13d
  int v30; // ecx
  __int64 v31; // rdi
  HDC v32; // r15
  __int64 v33; // r8
  unsigned __int64 *v34; // rdi
  __int16 KeyState; // ax
  __int16 AsyncKeyState; // ax
  __int64 v37; // rax
  __int64 TopLevelCreatorWindow; // rax
  unsigned __int64 *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  HWND *PrevPhwnd; // rax
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // [rsp+50h] [rbp-71h]
  unsigned int v51; // [rsp+50h] [rbp-71h]
  int v52; // [rsp+54h] [rbp-6Dh]
  int v53; // [rsp+58h] [rbp-69h]
  unsigned int v54; // [rsp+58h] [rbp-69h]
  unsigned int v55; // [rsp+5Ch] [rbp-65h]
  int v56; // [rsp+60h] [rbp-61h]
  HDC v57; // [rsp+68h] [rbp-59h]
  HWND *v58; // [rsp+70h] [rbp-51h]
  RECT v59; // [rsp+78h] [rbp-49h] BYREF
  __int64 v60; // [rsp+88h] [rbp-39h]
  __int128 v61; // [rsp+90h] [rbp-31h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-21h]
  struct tagRECT v63; // [rsp+A8h] [rbp-19h] BYREF

  v9 = a9;
  LODWORD(v10) = 0;
  v62 = 0LL;
  v60 = (__int64)a1;
  v57 = a3;
  v14 = *((_DWORD *)a2 + 29);
  v52 = v14;
  v55 = *((_DWORD *)a2 + 28);
  v15 = a3;
  v53 = v14 - v55;
  v16 = 0;
  v17 = 0;
  v63 = 0LL;
  v61 = 0LL;
  v59 = 0LL;
  if ( a3 )
  {
    v56 = 0;
  }
  else
  {
    v56 = 1;
    DCEx = _GetDCEx(a1, 0LL, 0x10000LL);
    v14 = v52;
    LODWORD(v10) = 0;
    v15 = (HDC)DCEx;
    v57 = (HDC)DCEx;
  }
  v19 = *((_DWORD *)a2 + 22);
  v20 = *((_DWORD *)a2 + 21);
  v50 = v19;
  if ( a7 )
  {
    v63.top = *((_DWORD *)a2 + 22);
    v21 = *((_DWORD *)a2 + 14) * v14;
    v63.left = v20;
    v63.right = v20 + v21;
    v22 = v19 + v14 * *((_DWORD *)a2 + 15);
    v23 = -v14;
    v63.bottom = v22;
    if ( !a8 )
      v23 = v14;
    ScrollDC(v15, 0, v23, &v63, &v63, 0LL, 0LL);
    LODWORD(v10) = 0;
    if ( a8 )
      v16 = *((_DWORD *)a2 + 15) - 1;
    v24 = *((_DWORD *)a2 + 14);
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(a2, *((_DWORD *)a2 + 13), v24 * (*((_DWORD *)a2 + 15) - 1), 1);
    else
      PrevTaskIndex = *((_DWORD *)a2 + 13);
    v19 = v50;
  }
  else
  {
    v24 = a6;
  }
  if ( a9 )
  {
    v25 = PrevTaskIndex - *((_DWORD *)a2 + 13);
    if ( v25 < 0 )
      v25 += *((_DWORD *)a2 + 10);
    v26 = *((_DWORD *)a2 + 14);
    v16 = v25 / v26;
    if ( v25 / v26 >= *((_DWORD *)a2 + 15) )
    {
      v32 = v57;
      goto LABEL_48;
    }
    v17 = v25 % v26;
  }
  v28 = (unsigned int)(v53 >> 31);
  v27 = v53 / 2;
  LODWORD(v28) = v53 % 2;
  v54 = v53 / 2 + v20;
  v29 = v54 + v17 * v52;
  v30 = v16 * v52;
  v31 = PrevTaskIndex;
  v32 = v57;
  v33 = (unsigned int)(v27 + v30 + v19);
  v51 = v33;
  v34 = (unsigned __int64 *)(*((_QWORD *)a2 + 2) + 32LL + 8 * v31);
  v58 = (HWND *)v34;
  if ( v24 )
  {
    while ( 1 )
    {
      --v24;
      if ( *((_DWORD *)a2 + 27) == (_DWORD)v10 )
        goto LABEL_52;
      KeyState = _GetKeyState(18LL);
      LODWORD(v10) = 0;
      if ( KeyState >= 0 )
        break;
      if ( !*((_DWORD *)a2 + 27) )
      {
LABEL_52:
        AsyncKeyState = _GetAsyncKeyState(18LL, v28, v33);
        LODWORD(v10) = 0;
        if ( AsyncKeyState >= 0 )
          break;
      }
      v37 = HMValidateHandleNoSecure(*v34, 1);
      v10 = 0LL;
      if ( v37 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v37);
        v39 = (unsigned __int64 *)TopLevelCreatorWindow;
        if ( v9
          || (v40 = *(_QWORD *)(*(_QWORD *)(TopLevelCreatorWindow + 40) + 272LL)) != 0
          && (v41 = HMValidateHandleNoRip(v40, 3), v10 = 0LL, (v9 = (struct tagCURSOR *)v41) != 0LL)
          || (v9 = *(struct tagCURSOR **)(v39[17] + 80)) != 0LL )
        {
LABEL_46:
          DrawIconEx(v57, v29, v51, (__int64)v9, v55, v55, (int)v10, *(_QWORD *)(gpsi + 4816LL), 3);
          goto LABEL_35;
        }
        if ( (*(_BYTE *)(v39[5] + 21) & 2) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v61 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v61;
          *((_QWORD *)&v61 + 1) = v39;
          HMLockObject(v39);
          LODWORD(v43) = v60;
          if ( v60 )
            v43 = *(_QWORD *)v60;
          xxxSendMessageCallback(
            v39,
            0x37u,
            0LL,
            0LL,
            (void (__fastcall *)(unsigned __int64 *, _QWORD, __int64, __int64))DrawIconCallBack,
            (unsigned int)v43,
            0,
            0,
            1);
          ThreadUnlock1(v45, v44, v46);
          v10 = 0LL;
          goto LABEL_33;
        }
        v9 = (struct tagCURSOR *)qword_1C03307E0;
      }
      if ( v9 )
        goto LABEL_46;
LABEL_33:
      if ( a7 == (_DWORD)v10 )
        goto LABEL_36;
      v59.top = v51;
      v59.left = v29;
      v59.right = v55 + v29;
      v59.bottom = v55 + v51;
      FillRect(v57, &v59, *(HBRUSH *)(gpsi + 4816LL));
LABEL_35:
      v10 = 0LL;
LABEL_36:
      if ( v24 <= 0 )
        break;
      v9 = v10;
      PrevPhwnd = NextPrevPhwnd(a2, v58, 1);
      v33 = v51;
      v28 = (unsigned int)(v17 + 1);
      v34 = (unsigned __int64 *)PrevPhwnd;
      v17 = (int)v10;
      v58 = PrevPhwnd;
      if ( (int)v28 < *((_DWORD *)a2 + 14) )
        v17 = v28;
      v48 = v52 + v29;
      v29 = v54;
      if ( (int)v28 < *((_DWORD *)a2 + 14) )
        v29 = v48;
      v49 = v52 + v51;
      if ( (int)v28 < *((_DWORD *)a2 + 14) )
        v49 = v51;
      v51 = v49;
    }
  }
LABEL_48:
  if ( v56 != (_DWORD)v10 )
    _ReleaseDC(v32);
}
