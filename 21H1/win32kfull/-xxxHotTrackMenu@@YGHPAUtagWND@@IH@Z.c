/*
 * XREFs of ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 */

int __userpurge xxxHotTrackMenu@<eax>(
        unsigned int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        int a5)
{
  int v7; // edi
  int v8; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  HDC DCEx; // ebx
  int v16; // edx
  int v17; // ecx
  int WindowDpiLastNotify; // eax
  int v19; // eax
  int *DPIMETRICSForDpi; // eax
  int TextAlign; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v27; // [esp+10h] [ebp-1Ch] BYREF
  int v28; // [esp+14h] [ebp-18h]
  int v29; // [esp+18h] [ebp-14h]
  int v30[2]; // [esp+1Ch] [ebp-10h] BYREF
  int v31; // [esp+24h] [ebp-8h]
  int v32; // [esp+28h] [ebp-4h]
  struct tagWND *v33; // [esp+34h] [ebp+8h]

  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( (*(_BYTE *)(a2[5] + 8) & 1) != 0 && a2[23] )
  {
    SmartObjStackRefBase<tagMENU>::Init(v30, a2[23]);
    v7 = 0;
    v31 = 0;
    v32 = MNGetpItemFromIndex(*(_DWORD *)v30[0], a1);
    if ( !v32 )
    {
LABEL_36:
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v30);
      return v7;
    }
    v8 = *(_DWORD *)v30[0];
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v27 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v27;
    v28 = v8;
    if ( v8 )
      HMLockObject(v8);
    xxxMNRecomputeBarIfNeeded(a2, v30);
    v11 = v31;
    if ( !v31 )
      v11 = *(_DWORD *)v30[0];
    v12 = v32;
    if ( MNGetpItemIndex(v11, v32) == -1 )
    {
LABEL_9:
      ThreadUnlock1();
      goto LABEL_36;
    }
    v13 = *(_DWORD *)(*(_DWORD *)v12 + 4);
    if ( a3 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_9;
      v14 = v13 | 0x100;
    }
    else
    {
      v14 = v13 & 0xFFFFFEFF;
    }
    *(_DWORD *)(*(_DWORD *)v12 + 4) = v14;
    DCEx = (HDC)_GetDCEx(a2, 0, 65539);
    GreSelectBrush(DCEx, *(_DWORD *)(_gpsi + 4320));
    v16 = a2[5];
    v17 = *(_DWORD *)(v16 + 184) & 0xF;
    if ( v17 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v16 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v16 + 144) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
    }
    else if ( !v17 && (v19 = *(_DWORD *)(a2[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v19 + 4) + 32) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(a2[2] + 232) + 160);
    }
    DPIMETRICSForDpi = (int *)GetDPIMETRICSForDpi((void *)WindowDpiLastNotify);
    GreSelectFont(DCEx, *DPIMETRICSForDpi);
    TextAlign = GreGetTextAlign(DCEx);
    v33 = (struct tagWND *)TextAlign;
    if ( *(_DWORD *)(*(_DWORD *)v30[0] + 56) && (***(_DWORD ***)(*(_DWORD *)v30[0] + 56) & 0x2000) != 0 )
      GreSetTextAlign(DCEx, TextAlign | 0x100);
    v22 = a2[5];
    v23 = *(_DWORD *)(v22 + 184) & 0xF;
    if ( v23 == 3 )
    {
      v24 = (*(_DWORD *)(v22 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v22 + 144) & 0x8000000) != 0 )
    {
      v24 = GetWindowDpiLastNotify(a2);
    }
    else if ( !v23 && (v25 = *(_DWORD *)(a2[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v25 + 4) + 32) & 1) != 0 )
    {
      v24 = 96;
    }
    else
    {
      v24 = *(unsigned __int16 *)(*(_DWORD *)(a2[2] + 232) + 160);
    }
    xxxDrawMenuItem(DCEx, (void *)v24, (int **)v30, (unsigned int *)v32, 0, 0);
    GreSetTextAlign(DCEx, (int)v33);
    ThreadUnlock1();
    _ReleaseDC(DCEx);
    v7 = 1;
    goto LABEL_36;
  }
  return 0;
}
