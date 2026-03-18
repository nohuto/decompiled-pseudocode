/*
 * XREFs of xxxMNInvertItem @ 0x1C024C7E0
 * Callers:
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C0248B34 (xxxHiliteMenuItem.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C001AED0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0033C8C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C003583C (MNIsOwnerDrawItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C0037FB4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     xxxGetSysMenuPtr @ 0x1C005C1EC (xxxGetSysMenuPtr.c)
 *     GetpwndNotifypMenuState @ 0x1C0079474 (GetpwndNotifypMenuState.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GreSetViewportOrg @ 0x1C0104B50 (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C011B8B8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 *     MNPositionSysMenu @ 0x1C014AD98 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C023B0B8 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C024B9D8 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C024C0AC (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C024C35C (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 */

struct tagITEM *__fastcall xxxMNInvertItem(__int64 **a1, __int64 **a2, int a3, _QWORD *a4, unsigned int a5)
{
  struct tagITEM *v7; // r15
  int v9; // r12d
  __int64 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 SysMenuPtr; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  signed int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r11
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  int v26; // edx
  int v27; // r8d
  __int64 *v28; // rax
  HDC DC; // r12
  __int64 DCEx; // rax
  __int64 v31; // rdx
  int v32; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v34; // rax
  int v35; // ebx
  int DpiDependentMetric; // eax
  __int64 v37; // rdx
  int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // rax
  int v41; // ebx
  int TextAlign; // eax
  int v43; // ebx
  int v44; // ecx
  unsigned int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // eax
  __int64 v57; // rdx
  int v58; // ecx
  __int64 v59; // rax
  _QWORD *v60; // rax
  int v61; // ecx
  __int64 v62; // rcx
  int v64; // [rsp+38h] [rbp-31h]
  int v65; // [rsp+38h] [rbp-31h]
  int v66; // [rsp+3Ch] [rbp-2Dh]
  int v67; // [rsp+40h] [rbp-29h]
  int v68; // [rsp+40h] [rbp-29h]
  int v69; // [rsp+44h] [rbp-25h]
  __int64 v70; // [rsp+48h] [rbp-21h] BYREF
  int v71; // [rsp+50h] [rbp-19h]
  int v72; // [rsp+54h] [rbp-15h]
  __int64 v73; // [rsp+58h] [rbp-11h]
  _QWORD v74[2]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v75; // [rsp+70h] [rbp+7h]
  __int128 v76; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v77; // [rsp+88h] [rbp+1Fh]

  v7 = 0LL;
  v66 = 0;
  v9 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v74, 0LL);
  v75 = 0LL;
  v69 = 0;
  v70 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) || !a4 )
  {
LABEL_110:
    v7 = 0LL;
    goto LABEL_111;
  }
  if ( **a1 )
  {
    v10 = *(_QWORD *)(**a1 + 16);
    if ( (_QWORD *)v10 != a4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v76 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v76;
      *((_QWORD *)&v76 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
    }
  }
  else
  {
    v10 = (__int64)a4;
  }
  if ( v9 < 0 )
  {
    if ( **a1 && (unsigned int)(v9 + 4) <= 1 )
      MNDrawArrow(0LL, a1, v9);
LABEL_104:
    v60 = GetpwndNotifypMenuState((__int64)a4);
    xxxSendMenuSelect(v61, v10, (_DWORD)a2, v9, (__int64)v60);
    goto LABEL_105;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    SysMenuPtr = xxxGetSysMenuPtr(a4);
    SmartObjStackRefBase<tagMENU>::operator=(v74, SysMenuPtr);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2, (__int64)v74) )
    {
      v14 = v75;
      if ( !v75 )
        v14 = *(_QWORD **)v74[0];
      MNPositionSysMenu((__int64)a4, v14, v13);
      v66 = 1;
    }
  }
  v15 = (__int64)a2[2];
  if ( !v15 )
    v15 = **a2;
  v7 = (struct tagITEM *)MNGetpItemFromIndex(v15, v9);
  if ( v7 )
  {
    v17 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( ((unsigned __int8)v17 & 1) != 0 || (*(_BYTE *)(a4[5] + 31LL) & 0x20) == 0 )
    {
      v17 = *(_DWORD **)v7;
      v16 = a5;
      if ( (**(_DWORD **)v7 & 0x800) != 0 )
        goto LABEL_103;
      if ( (v17[1] & 0x80) != a5 )
      {
        if ( !a5 || !**a1 || (*(_DWORD *)(**a2 + 124) & 3) == 0 )
          goto LABEL_42;
        if ( v9 >= *(_DWORD *)(**a2 + 116) )
        {
          v20 = (__int64)a2[2];
          if ( !v20 )
            v20 = **a2;
          v21 = MNGetpItemFromIndex(v20, *(_DWORD *)(v20 + 116));
          v19 = *(_DWORD *)(**a2 + 116);
          v22 = *(_DWORD *)(*(_QWORD *)v7 + 68LL)
              + *(_DWORD *)(*(_QWORD *)v7 + 76LL)
              - *(_DWORD *)(**a2 + 68)
              - *(_DWORD *)(*(_QWORD *)v21 + 68LL);
          while ( v22 > 0 && v19 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
          {
            v23 = *(_QWORD *)v21;
            v21 += 96LL;
            v22 -= *(_DWORD *)(v23 + 76);
            ++v19;
          }
          if ( v19 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
            v19 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL);
        }
        else
        {
          v19 = v9;
        }
        if ( (unsigned int)xxxMNSetTop(a1, v19) )
          xxxInternalUpdateWindow((struct tagWND *)v10, 1u);
        v24 = (__int64)a2[2];
        if ( !v24 )
          v24 = **a2;
        if ( (unsigned int)MNGetpItemIndex(v24, (__int64)v7) != -1 )
        {
LABEL_42:
          v25 = *(_DWORD **)v7;
          v26 = *(_DWORD *)(*(_QWORD *)v7 + 64LL);
          v27 = *(_DWORD *)(*(_QWORD *)v7 + 68LL);
          v71 = v26 + *(_DWORD *)(*(_QWORD *)v7 + 72LL);
          v67 = v26;
          v72 = v27 + v25[19];
          v28 = *a2;
          LODWORD(v73) = v27;
          if ( (*(_DWORD *)(*(_QWORD *)(*v28 + 40) + 40LL) & 1) != 0 )
          {
            DC = (HDC)_GetDC(v10);
          }
          else
          {
            DCEx = _GetDCEx(v10, 0LL, 65537LL);
            v31 = *(_QWORD *)(v10 + 40);
            DC = (HDC)DCEx;
            if ( (*(_BYTE *)(v31 + 30) & 4) != 0 && !v66 )
            {
              v32 = *(_DWORD *)(v31 + 288) & 0xF;
              if ( v32 == 3 )
              {
                WindowDpiLastNotify = (*(_DWORD *)(v31 + 288) >> 8) & 0x1FF;
              }
              else if ( (*(_DWORD *)(v31 + 232) & 0x8000000) != 0 )
              {
                WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
              }
              else if ( !v32
                     && (v34 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v34 + 8) + 64LL) & 1) != 0 )
              {
                WindowDpiLastNotify = 96;
              }
              else
              {
                WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
              }
              v35 = *(_DWORD *)(v31 + 88);
              v64 = *(_DWORD *)(v31 + 96);
              DpiDependentMetric = GetDpiDependentMetric(14LL, WindowDpiLastNotify);
              v37 = *(_QWORD *)(v10 + 40);
              v65 = v64 - v35 - DpiDependentMetric;
              v38 = *(_DWORD *)(v37 + 288) & 0xF;
              if ( v38 == 3 )
              {
                v39 = (*(_DWORD *)(v37 + 288) >> 8) & 0x1FF;
              }
              else if ( (*(_DWORD *)(v37 + 232) & 0x8000000) != 0 )
              {
                v39 = GetWindowDpiLastNotify(v10);
              }
              else if ( !v38
                     && (v40 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) != 0
                     && (*(_DWORD *)(**(_QWORD **)(v40 + 8) + 64LL) & 1) != 0 )
              {
                v39 = 96;
              }
              else
              {
                v39 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
              }
              v41 = GetDpiDependentMetric(15LL, v39);
              if ( v71 > v65
                || v72 > *(_DWORD *)(*(_QWORD *)(v10 + 40) + 100LL) - *(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) - v41 )
              {
                GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                v69 = 1;
                GreIntersectVisRect(
                  DC,
                  (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) + v67),
                  (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) + v73),
                  (unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) + v65),
                  *(_DWORD *)(*(_QWORD *)(v10 + 40) + 100LL) - v41);
                GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              }
            }
          }
          TextAlign = GreGetTextAlign(DC);
          v43 = TextAlign;
          v68 = TextAlign;
          if ( (**(_DWORD **)v7 & 0x2000) != 0 )
            GreSetTextAlign(DC, TextAlign | 0x100);
          GetDPIMETRICS((struct tagWND *)v10);
          v73 = GreSelectFont(DC);
          GreGetDCPoint(DC, 4LL, &v70);
          v44 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
          if ( a5 )
            v45 = v44 | 0x80;
          else
            v45 = v44 & 0xFFFFFF7F;
          *(_DWORD *)(*(_QWORD *)v7 + 4LL) = v45;
          if ( v66 || *(_QWORD *)(*(_QWORD *)v7 + 96LL) == 1LL && (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
            goto LABEL_100;
          if ( (*(_DWORD *)(**a2 + 124) & 3) != 0 )
          {
            v46 = (__int64)a2[2];
            if ( !v46 )
              v46 = **a2;
            v47 = MNGetpItemFromIndex(v46, *(_DWORD *)(v46 + 116));
            GreSetViewportOrg(DC, v70, HIDWORD(v70) - *(_DWORD *)(*(_QWORD *)v47 + 68LL));
          }
          v48 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v48 + 40) + 24LL) && !(unsigned int)MNDrawHilite(a2, (__int64)v7) )
          {
            v50 = (__int64)a2[2];
            if ( !v50 )
              v50 = **a2;
            if ( !(unsigned int)MNIsOwnerDrawItem(v50, (_DWORD **)v7, v49) )
            {
              v51 = GreSetBkMode(DC, 1);
              v52 = (__int64)a2[2];
              if ( !v52 )
                v52 = **a2;
              MNEraseBackground(
                DC,
                v52,
                *(_DWORD *)(*(_QWORD *)v7 + 64LL),
                *(_DWORD *)(*(_QWORD *)v7 + 68LL),
                *(_DWORD *)(*(_QWORD *)v7 + 72LL),
                *(_DWORD *)(*(_QWORD *)v7 + 76LL));
              GreSetBkMode(DC, v51);
              v43 = v68;
            }
          }
          if ( v10 )
          {
            v57 = *(_QWORD *)(v10 + 40);
            v58 = *(_DWORD *)(v57 + 288) & 0xF;
            if ( v58 == 3 )
            {
              v56 = (*(_DWORD *)(v57 + 288) >> 8) & 0x1FF;
              goto LABEL_99;
            }
            if ( (*(_DWORD *)(v57 + 232) & 0x8000000) != 0 )
            {
              v56 = GetWindowDpiLastNotify(v10);
              goto LABEL_99;
            }
            if ( v58
              || (v59 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL)) == 0
              || (*(_DWORD *)(**(_QWORD **)(v59 + 8) + 64LL) & 1) == 0 )
            {
              v56 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) + 284LL);
              goto LABEL_99;
            }
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v48) & 0xF) != 0 )
          {
            v56 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v54, v53, v55) + 284);
LABEL_99:
            xxxDrawMenuItem(DC, v56, a2, v7, 1, v10);
LABEL_100:
            if ( v69 )
              RecalcDCVisRgn(DC);
            GreSelectFont(DC);
            GreSetViewportOrg(DC, v70, SHIDWORD(v70));
            GreSetTextAlign(DC, v43);
            _ReleaseDC(DC);
            v16 = a5;
            v9 = a3;
LABEL_103:
            if ( !(_DWORD)v16 )
              goto LABEL_105;
            goto LABEL_104;
          }
          v56 = 96;
          goto LABEL_99;
        }
      }
    }
  }
LABEL_105:
  if ( (_QWORD *)v10 != a4 )
    ThreadUnlock1(v17, v16, v18);
  v62 = (__int64)a2[2];
  if ( !v62 )
    v62 = **a2;
  if ( (unsigned int)MNGetpItemIndex(v62, (__int64)v7) == -1 )
    goto LABEL_110;
LABEL_111:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v74);
  return v7;
}
