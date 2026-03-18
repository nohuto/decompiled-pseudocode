/*
 * XREFs of ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3
 * Callers:
 *     ?DrawIconCallBack@@YGXPAUHWND__@@IKJ@Z @ 0x15BF55 (-DrawIconCallBack@@YGXPAUHWND__@@IKJ@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     __ScrollDC@28 @ 0x3267A (__ScrollDC@28.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _DSW_GetTopLevelCreatorWindow@4 @ 0xAEF2E (_DSW_GetTopLevelCreatorWindow@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?NextPrevPhwnd@@YGPAPAUHWND__@@PAUtagSwitchWndInfo@@PAPAU1@H@Z @ 0x15C62F (-NextPrevPhwnd@@YGPAPAUHWND__@@PAUtagSwitchWndInfo@@PAPAU1@H@Z.c)
 *     ?NextPrevTaskIndex@@YGHPAUtagSwitchWndInfo@@HHH@Z @ 0x15C660 (-NextPrevTaskIndex@@YGHPAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?TSW_CalcRowAndCol@@YGHPAUtagSwitchWndInfo@@HPAH1@Z @ 0x15C6C8 (-TSW_CalcRowAndCol@@YGHPAUtagSwitchWndInfo@@HPAH1@Z.c)
 */

void __userpurge xxxPaintIconsInSwitchWindow(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagSwitchWndInfo *a4,
        HDC a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        struct tagCURSOR *a11)
{
  unsigned int *v12; // ebx
  int v13; // edx
  LONG v14; // eax
  HDC DCEx; // eax
  struct XDCOBJ *v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  char *PrevTaskIndex; // eax
  int v22; // eax
  LONG v23; // edi
  int v24; // edx
  int v25; // eax
  unsigned int *v26; // edx
  int v27; // eax
  int v28; // ebx
  bool v29; // zf
  int v30; // eax
  int TopLevelCreatorWindow; // eax
  int v32; // edx
  int v33; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // [esp-4h] [ebp-74h]
  RECT *v39; // [esp+0h] [ebp-70h]
  HBRUSH v40; // [esp+4h] [ebp-6Ch]
  unsigned int *PrevPhwnd; // [esp+Ch] [ebp-64h] BYREF
  struct XDCOBJ *v42; // [esp+10h] [ebp-60h]
  int v43; // [esp+14h] [ebp-5Ch]
  int v44; // [esp+18h] [ebp-58h]
  HDC v45; // [esp+1Ch] [ebp-54h]
  int v46; // [esp+20h] [ebp-50h]
  struct tagSwitchWndInfo *v47; // [esp+24h] [ebp-4Ch]
  int v48; // [esp+28h] [ebp-48h]
  LONG v49; // [esp+2Ch] [ebp-44h]
  int v50; // [esp+30h] [ebp-40h] BYREF
  int v51; // [esp+34h] [ebp-3Ch]
  int v52; // [esp+38h] [ebp-38h]
  int v53; // [esp+3Ch] [ebp-34h]
  LONG v54; // [esp+40h] [ebp-30h]
  struct XDCOBJ *v55; // [esp+44h] [ebp-2Ch]
  int v56; // [esp+48h] [ebp-28h]
  char *v57; // [esp+4Ch] [ebp-24h]
  int v58; // [esp+50h] [ebp-20h] BYREF
  int v59; // [esp+54h] [ebp-1Ch]
  int v60; // [esp+58h] [ebp-18h]
  int v61; // [esp+5Ch] [ebp-14h] BYREF
  struct XDCOBJ *v62; // [esp+60h] [ebp-10h]
  int v63; // [esp+64h] [ebp-Ch]
  char *v64; // [esp+68h] [ebp-8h]

  v46 = a9;
  v44 = 0;
  v50 = 0;
  v51 = a2;
  v61 = 0;
  v12 = 0;
  v47 = a4;
  v62 = 0;
  v13 = a1[24];
  v45 = (HDC)a3;
  PrevPhwnd = 0;
  v63 = 0;
  v48 = v13;
  v64 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v14 = v13 - a1[23];
  v52 = a1[23];
  v49 = v14;
  if ( a3 )
  {
    v53 = 0;
  }
  else
  {
    v53 = 1;
    DCEx = (HDC)_GetDCEx(v51, 0, 0x10000);
    v13 = v48;
    v45 = DCEx;
  }
  v16 = (struct XDCOBJ *)a1[17];
  v17 = a1[16];
  v42 = v16;
  if ( a7 )
  {
    v18 = v13 * a1[9];
    v61 = v17;
    v62 = v16;
    v63 = v17 + v18;
    v64 = (char *)v16 + v13 * a1[10];
    v19 = v13;
    if ( a8 )
      v19 = -v13;
    _ScrollDC(v45, 0, (HDC)v19, &v61, (int)&v61, 0, 0);
    if ( a8 )
      v12 = (unsigned int *)(a1[10] - 1);
    else
      v12 = 0;
    v20 = a1[9];
    PrevPhwnd = v12;
    v43 = v20;
    if ( a8 )
      PrevTaskIndex = NextPrevTaskIndex(
                        a1[8],
                        (int)a1,
                        (struct tagSwitchWndInfo *)(v20 * (a1[10] - 1)),
                        1,
                        (int)v39,
                        (int)v40);
    else
      PrevTaskIndex = (char *)a1[8];
    v47 = (struct tagSwitchWndInfo *)PrevTaskIndex;
  }
  else
  {
    v43 = a6;
    PrevTaskIndex = (char *)v47;
  }
  if ( v46 )
  {
    if ( !TSW_CalcRowAndCol((int)PrevTaskIndex, a1, (struct tagSwitchWndInfo *)&PrevPhwnd, &v50, &v39->left, (int *)v40) )
      goto LABEL_44;
    v12 = PrevPhwnd;
    v44 = v50;
  }
  v22 = v49 / 2;
  v49 = v49 / 2 + v17;
  v23 = v44 * v48 + v49;
  v24 = v22 + (_DWORD)v12 * v48;
  v25 = a1[2];
  v42 = (struct XDCOBJ *)((char *)v42 + v24);
  v26 = (unsigned int *)(v25 + 4 * ((_DWORD)v47 + 4));
  v27 = v43;
  PrevPhwnd = v26;
  if ( v43 )
  {
    v28 = v46;
    while ( 1 )
    {
      v29 = a1[22] == 0;
      v43 = v27 - 1;
      if ( v29 )
        goto LABEL_23;
      if ( (_GetKeyState(18) & 0x8000u) == 0 )
        break;
      if ( !a1[22] )
      {
LABEL_23:
        if ( (_GetAsyncKeyState(18) & 0x8000u) == 0 )
          break;
      }
      v30 = HMValidateHandleNoSecure(*PrevPhwnd, 1);
      if ( v30 )
      {
        TopLevelCreatorWindow = DSW_GetTopLevelCreatorWindow(v30);
        v32 = TopLevelCreatorWindow;
        v46 = TopLevelCreatorWindow;
        if ( v28 )
          goto LABEL_41;
        v33 = *(_DWORD *)(*(_DWORD *)(TopLevelCreatorWindow + 20) + 172);
        if ( v33 )
        {
          v28 = HMValidateHandleNoRip(v33, 3);
          if ( v28 )
            goto LABEL_41;
          v32 = v46;
        }
        v28 = *(_DWORD *)(*(_DWORD *)(v32 + 76) + 48);
        if ( v28 )
        {
LABEL_41:
          _DrawIconEx(v45, v23, v42, v28, v52, v52, 0, *(_DWORD *)(_gpsi + 4352), 3);
          goto LABEL_36;
        }
        if ( (*(_BYTE *)(*(_DWORD *)(v32 + 20) + 13) & 2) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v36 = v46;
          v38 = v46;
          v58 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v58;
          v59 = v36;
          HMLockObject(v38);
          v37 = v51;
          if ( v51 )
            v37 = *(_DWORD *)v51;
          xxxSendMessageCallback(
            v36,
            0x37u,
            0,
            0,
            (void (__stdcall *)(int, unsigned int, int, int))DrawIconCallBack,
            v37,
            0,
            0,
            1);
          ThreadUnlock1();
          goto LABEL_34;
        }
        v28 = dword_26B8CC;
      }
      if ( v28 )
        goto LABEL_41;
LABEL_34:
      if ( a7 )
      {
        v55 = v42;
        v54 = v23;
        v56 = v52 + v23;
        v57 = (char *)v42 + v52;
        FillRect(*(HDC *)(_gpsi + 4352), v39, v40);
      }
LABEL_36:
      if ( v43 <= 0 )
        break;
      v28 = 0;
      PrevPhwnd = (unsigned int *)NextPrevPhwnd(
                                    (int)PrevPhwnd,
                                    (int)a1,
                                    (struct tagSwitchWndInfo *)1,
                                    (HWND *)v39,
                                    (int)v40);
      if ( ++v44 < a1[9] )
      {
        v23 += v48;
      }
      else
      {
        v44 = 0;
        v23 = v49;
        v42 = (struct XDCOBJ *)((char *)v42 + v48);
      }
      v27 = v43;
    }
  }
LABEL_44:
  if ( v53 )
    _ReleaseDC(v45);
}
