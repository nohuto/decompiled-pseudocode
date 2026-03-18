/*
 * XREFs of _xxxMNInvertItem@20 @ 0x1A9C22
 * Callers:
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxHiliteMenuItem@16 @ 0x1A6B5B (_xxxHiliteMenuItem@16.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z @ 0x1C032 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z.c)
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _GetpwndNotifypMenuState@4 @ 0x8F366 (_GetpwndNotifypMenuState@4.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?MNDrawHilite@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0xB66E6 (-MNDrawHilite@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreSetViewportOrg@16 @ 0xB675E (_GreSetViewportOrg@16.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 *     _MNPositionSysMenu@8 @ 0xC069A (_MNPositionSysMenu@8.c)
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 *     ?RecalcDCVisRgn@@YGXPAUHDC__@@@Z @ 0x1A90C1 (-RecalcDCVisRgn@@YGXPAUHDC__@@@Z.c)
 *     _MNDrawArrow@12 @ 0x1A96CC (_MNDrawArrow@12.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _MNIsOwnerDrawItem@8 @ 0x1A99A0 (_MNIsOwnerDrawItem@8.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 */

int __fastcall xxxMNInvertItem(int a1, int **a2, int a3, _DWORD *a4, int a5)
{
  int v6; // esi
  int v7; // ecx
  _DWORD *v8; // edx
  int *v9; // ecx
  _DWORD *v10; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int SysMenuPtr; // eax
  int v14; // edx
  int v15; // ecx
  signed int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // ecx
  int *v22; // esi
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // eax
  int v26; // edx
  int v27; // esi
  int v28; // ecx
  int v29; // eax
  int *v30; // eax
  HDC DC; // esi
  int DCEx; // eax
  int v33; // edx
  int v34; // ecx
  INT WindowDpiLastNotify; // eax
  int v36; // eax
  int v37; // esi
  int DpiDependentMetric; // eax
  int v39; // edx
  int v40; // ecx
  INT v41; // eax
  int v42; // eax
  int v43; // esi
  _DWORD *v44; // ecx
  int v45; // eax
  int TextAlign; // eax
  int *DPIMETRICS; // eax
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // eax
  bool v51; // zf
  int v52; // ecx
  int v53; // eax
  int *v54; // ecx
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  int v59; // edx
  int CurrentProcessWin32Process; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // ecx
  _DWORD *v66; // eax
  int v67; // ecx
  struct tagWND *v69; // [esp+0h] [ebp-5Ch]
  unsigned int v70; // [esp+4h] [ebp-58h]
  int v71; // [esp+10h] [ebp-4Ch] BYREF
  _DWORD *v72; // [esp+14h] [ebp-48h]
  int v73; // [esp+18h] [ebp-44h]
  _DWORD v74[2]; // [esp+1Ch] [ebp-40h] BYREF
  int v75; // [esp+24h] [ebp-38h]
  int v76; // [esp+28h] [ebp-34h] BYREF
  int v77; // [esp+2Ch] [ebp-30h]
  int v78; // [esp+30h] [ebp-2Ch]
  int v79; // [esp+34h] [ebp-28h]
  int v80; // [esp+38h] [ebp-24h]
  int *v81; // [esp+3Ch] [ebp-20h]
  int v82; // [esp+40h] [ebp-1Ch]
  int v83; // [esp+44h] [ebp-18h]
  HDC v84; // [esp+48h] [ebp-14h]
  int v85; // [esp+4Ch] [ebp-10h]
  int *v86; // [esp+50h] [ebp-Ch]
  int v87; // [esp+54h] [ebp-8h]

  v86 = (int *)a1;
  v85 = 0;
  v6 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v74, 0);
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v83 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  if ( SmartObjStackRef<tagMENU>::operator==(a2, v7) || (v8 = a4) == 0 )
  {
LABEL_113:
    v6 = 0;
    goto LABEL_114;
  }
  v9 = v86;
  if ( *(_DWORD *)*v86 )
  {
    v10 = *(_DWORD **)(*(_DWORD *)*v86 + 8);
    if ( v10 != a4 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v71 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v71;
      v72 = v10;
      if ( v10 )
        HMLockObject(v10);
      v8 = a4;
      v9 = v86;
    }
  }
  else
  {
    v10 = a4;
  }
  if ( a3 < 0 )
  {
    if ( *(_DWORD *)*v9 && (a3 == -3 || a3 == -4) )
      MNDrawArrow(0, v9, a3);
LABEL_107:
    v66 = GetpwndNotifypMenuState(a4);
    xxxSendMenuSelect(a2, a3, v66);
    goto LABEL_108;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(**a2 + 20) + 20) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(v8);
    SmartObjStackRefBase<tagMENU>::operator=(v74, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==(a2, (int)v74) )
    {
      v14 = v75;
      if ( !v75 )
        v14 = *(_DWORD *)v74[0];
      MNPositionSysMenu(a4, v14);
      v85 = 1;
    }
  }
  v15 = (int)a2[2];
  if ( !v15 )
    v15 = **a2;
  v6 = MNGetpItemFromIndex(v15, a3);
  v87 = v6;
  if ( v6 && ((*(_BYTE *)(*(_DWORD *)(**a2 + 20) + 20) & 1) != 0 || (*(_BYTE *)(a4[5] + 23) & 0x20) == 0) )
  {
    v17 = a5;
    if ( (**(_DWORD **)v6 & 0x800) != 0 )
      goto LABEL_106;
    if ( (*(_DWORD *)(*(_DWORD *)v6 + 4) & 0x80) != a5 )
    {
      if ( !a5 || !*(_DWORD *)*v86 || (*(_BYTE *)(**a2 + 80) & 3) == 0 )
        goto LABEL_43;
      if ( v16 >= *(_DWORD *)(**a2 + 72) )
      {
        v18 = (int)a2[2];
        if ( !v18 )
          v18 = **a2;
        v19 = MNGetpItemFromIndex(v18, *(_DWORD *)(v18 + 72));
        v20 = *(_DWORD **)v6;
        v82 = v19;
        v84 = (HDC)(v20[10] + v20[12] - *(_DWORD *)(**a2 + 40) - *(_DWORD *)(*(_DWORD *)v19 + 40));
        v21 = (int)v84;
        v16 = *(_DWORD *)(**a2 + 72);
        if ( (int)v84 > 0 )
        {
          v22 = (int *)v82;
          do
          {
            if ( v16 >= *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) )
              break;
            v23 = *v22;
            v22 += 20;
            v21 -= *(_DWORD *)(v23 + 48);
            ++v16;
          }
          while ( v21 > 0 );
        }
        v6 = v87;
        if ( v16 >= *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) )
          v16 = *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24);
      }
      if ( xxxMNSetTop((int)v86, v16) )
        xxxInternalUpdateWindow(v69, v70);
      v24 = (int)a2[2];
      if ( !v24 )
        v24 = **a2;
      if ( MNGetpItemIndex(v24, v6) != -1 )
      {
LABEL_43:
        v25 = *(_DWORD **)v6;
        v26 = *(_DWORD *)(*(_DWORD *)v6 + 36);
        v27 = *(_DWORD *)(*(_DWORD *)v6 + 40);
        v28 = v26 + v25[11];
        v29 = v27 + v25[12];
        v78 = v26;
        v80 = v29;
        v30 = *a2;
        v79 = v27;
        v81 = (int *)v28;
        if ( (*(_BYTE *)(*(_DWORD *)(*v30 + 20) + 20) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v10);
        }
        else
        {
          DCEx = _GetDCEx(v10, 0, 65537);
          v33 = v10[5];
          DC = (HDC)DCEx;
          v84 = (HDC)DCEx;
          v82 = v33;
          if ( (*(_BYTE *)(v33 + 22) & 4) != 0 && !v85 )
          {
            v34 = *(_DWORD *)(v33 + 184) & 0xF;
            if ( v34 == 3 )
            {
              WindowDpiLastNotify = (*(_DWORD *)(v33 + 184) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v33 + 144) & 0x8000000) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
              v33 = v82;
            }
            else if ( !v34
                   && (v36 = *(_DWORD *)(v10[2] + 248)) != 0
                   && (*(_BYTE *)(**(_DWORD **)(v36 + 4) + 32) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(v10[2] + 232) + 160);
            }
            v37 = *(_DWORD *)(v33 + 52);
            v86 = *(int **)(v33 + 60);
            DpiDependentMetric = GetDpiDependentMetric(14, WindowDpiLastNotify);
            v39 = v10[5];
            v86 = (int *)((char *)v86 - v37 - DpiDependentMetric);
            v40 = *(_DWORD *)(v39 + 184) & 0xF;
            if ( v40 == 3 )
            {
              v41 = (*(_DWORD *)(v39 + 184) >> 8) & 0x1FF;
            }
            else if ( (*(_DWORD *)(v39 + 144) & 0x8000000) != 0 )
            {
              v41 = GetWindowDpiLastNotify(v10);
            }
            else if ( !v40
                   && (v42 = *(_DWORD *)(v10[2] + 248)) != 0
                   && (*(_BYTE *)(**(_DWORD **)(v42 + 4) + 32) & 1) != 0 )
            {
              v41 = 96;
            }
            else
            {
              v41 = *(unsigned __int16 *)(*(_DWORD *)(v10[2] + 232) + 160);
            }
            v43 = GetDpiDependentMetric(15, v41);
            if ( (int)v81 <= (int)v86 && v80 <= *(_DWORD *)(v10[5] + 64) - *(_DWORD *)(v10[5] + 56) - v43 )
            {
              DC = v84;
            }
            else
            {
              GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
              v44 = (_DWORD *)v10[5];
              v83 = 1;
              v45 = v44[16] - v43;
              DC = v84;
              GreIntersectVisRect(v84, v44[13] + v78, v79 + v44[14], (char *)v86 + v44[13], v45);
              GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
            }
          }
        }
        TextAlign = GreGetTextAlign(DC);
        v84 = (HDC)TextAlign;
        if ( (**(_DWORD **)v87 & 0x2000) != 0 )
          GreSetTextAlign(DC, TextAlign | 0x100);
        DPIMETRICS = (int *)GetDPIMETRICS(v10);
        v82 = GreSelectFont(DC, *DPIMETRICS);
        GreGetDCPoint(DC, 4, &v76);
        v48 = v87;
        v49 = *(_DWORD *)(*(_DWORD *)v87 + 4);
        if ( a5 )
          v50 = v49 | 0x80;
        else
          v50 = v49 & 0xFFFFFF7F;
        v51 = v85 == 0;
        *(_DWORD *)(*(_DWORD *)v87 + 4) = v50;
        if ( !v51 || *(_DWORD *)(*(_DWORD *)v48 + 64) == 1 && (*(_BYTE *)(*(_DWORD *)(**a2 + 20) + 20) & 1) == 0 )
          goto LABEL_103;
        if ( (*(_BYTE *)(**a2 + 80) & 3) != 0 )
        {
          v52 = (int)a2[2];
          if ( !v52 )
            v52 = **a2;
          v53 = MNGetpItemFromIndex(v52, *(_DWORD *)(v52 + 72));
          GreSetViewportOrg(DC, v76, v77 - *(_DWORD *)(*(_DWORD *)v53 + 40), *(_DWORD *)(*(_DWORD *)v53 + 40));
          v48 = v87;
        }
        if ( *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 12) && !MNDrawHilite((int)a2, v48) )
        {
          v54 = a2[2];
          if ( !v54 )
            v54 = (int *)**a2;
          if ( !MNIsOwnerDrawItem(v54, (_DWORD **)v87) )
          {
            v81 = (int *)GreSetBkMode(DC, 1);
            v55 = *(_DWORD *)v87;
            v56 = *(_DWORD *)(*(_DWORD *)v87 + 48);
            v79 = *(_DWORD *)(*(_DWORD *)v87 + 44);
            v57 = *(_DWORD *)(v55 + 40);
            v58 = *(_DWORD *)(v55 + 36);
            v80 = v57;
            v59 = (int)a2[2];
            v78 = v56;
            if ( !v59 )
            {
              v59 = **a2;
              v56 = v78;
            }
            MNEraseBackground(DC, v59, v58, (struct XDCOBJ *)v80, v79, v56);
            GreSetBkMode(DC, (int)v81);
          }
        }
        if ( !v10 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
LABEL_101:
            v63 = *(unsigned __int16 *)(CurrentProcessWin32Process + 160);
            goto LABEL_102;
          }
LABEL_99:
          v63 = 96;
          goto LABEL_102;
        }
        v61 = v10[5];
        v62 = *(_DWORD *)(v61 + 184) & 0xF;
        if ( v62 == 3 )
        {
          v63 = (*(_DWORD *)(v61 + 184) >> 8) & 0x1FF;
        }
        else
        {
          if ( (*(_DWORD *)(v61 + 144) & 0x8000000) == 0 )
          {
            if ( v62 || (v64 = *(_DWORD *)(v10[2] + 248)) == 0 || (*(_BYTE *)(**(_DWORD **)(v64 + 4) + 32) & 1) == 0 )
            {
              CurrentProcessWin32Process = *(_DWORD *)(v10[2] + 232);
              goto LABEL_101;
            }
            goto LABEL_99;
          }
          v63 = GetWindowDpiLastNotify(v10);
        }
LABEL_102:
        xxxDrawMenuItem(DC, (void *)v63, a2, (unsigned int *)v87, 1, (int)v10);
LABEL_103:
        if ( v83 )
          RecalcDCVisRgn(DC);
        GreSelectFont(DC, v82);
        GreSetViewportOrg(DC, v76, v77, v65);
        GreSetTextAlign(DC, (int)v84);
        _ReleaseDC(DC);
        v6 = v87;
        v17 = a5;
LABEL_106:
        if ( !v17 )
          goto LABEL_108;
        goto LABEL_107;
      }
    }
  }
LABEL_108:
  if ( v10 != a4 )
    ThreadUnlock1();
  v67 = (int)a2[2];
  if ( !v67 )
    v67 = **a2;
  if ( MNGetpItemIndex(v67, v6) == -1 )
    goto LABEL_113;
LABEL_114:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v74);
  return v6;
}
