/*
 * XREFs of _xxxMenuDraw@12 @ 0xB5D6E
 * Callers:
 *     _xxxPaintMenuBar@24 @ 0xB5BC0 (_xxxPaintMenuBar@24.c)
 *     ?xxxHandleMenuPainting@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x196AEB (-xxxHandleMenuPainting@@YGXPAUtagWND@@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?MNDrawInsertionBar@@YGXPAUHDC__@@PAUtagITEM@@@Z @ 0xB632E (-MNDrawInsertionBar@@YGXPAUHDC__@@PAUtagITEM@@@Z.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreSetViewportOrg@16 @ 0xB675E (_GreSetViewportOrg@16.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 *     _xxxSendUAHMenuMessage@16 @ 0xB6938 (_xxxSendUAHMenuMessage@16.c)
 *     _xxxSendUAHInitMenuMessage@12 @ 0xB7560 (_xxxSendUAHInitMenuMessage@12.c)
 */

int __fastcall xxxMenuDraw(HDC a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // edi
  int *DPIMETRICS; // eax
  _DWORD **v7; // ecx
  int v8; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char v11; // al
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  int **v15; // ecx
  int v16; // eax
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // eax
  int v25; // ecx
  struct tagWND *v27; // [esp+0h] [ebp-88h]
  HDC v28; // [esp+0h] [ebp-88h]
  struct tagITEM *v29; // [esp+4h] [ebp-84h]
  char v30; // [esp+13h] [ebp-75h]
  int **v31; // [esp+14h] [ebp-74h]
  int *v32; // [esp+1Ch] [ebp-6Ch]
  unsigned int v33; // [esp+20h] [ebp-68h]
  char v34; // [esp+24h] [ebp-64h]
  int v35; // [esp+28h] [ebp-60h]
  int v36; // [esp+2Ch] [ebp-5Ch]
  int v37; // [esp+30h] [ebp-58h]
  int v38; // [esp+34h] [ebp-54h]
  unsigned int v39; // [esp+38h] [ebp-50h]
  int v40; // [esp+44h] [ebp-44h]
  int v41; // [esp+48h] [ebp-40h] BYREF
  int v42; // [esp+4Ch] [ebp-3Ch]
  _DWORD v43[3]; // [esp+50h] [ebp-38h] BYREF
  int v44[2]; // [esp+5Ch] [ebp-2Ch] BYREF
  int v45; // [esp+64h] [ebp-24h]
  int v46; // [esp+68h] [ebp-20h] BYREF
  int v47; // [esp+6Ch] [ebp-1Ch]
  int v48; // [esp+70h] [ebp-18h]
  int v49; // [esp+74h] [ebp-14h]
  int v50; // [esp+78h] [ebp-10h] BYREF
  int v51; // [esp+7Ch] [ebp-Ch]
  int v52; // [esp+80h] [ebp-8h]
  int v53; // [esp+84h] [ebp-4h]

  v46 = 0;
  v41 = 0;
  v42 = 0;
  v47 = 0;
  v34 = 0;
  v35 = 0;
  v48 = 0;
  v49 = 0;
  v36 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 20) & 1;
  if ( gihmodUserApiHook < 0 || (v5 = a3) == 0 )
    v5 = *(_DWORD **)(a2 + 52);
  v43[2] = 0;
  GreGetDCPoint(a1, 4, &v41);
  DPIMETRICS = (int *)GetDPIMETRICS(v27);
  v40 = GreSelectFont(a1, *DPIMETRICS);
  GreGetTextAlign(a1);
  v7 = *(_DWORD ***)(a2 + 56);
  if ( v7 && (**v7 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  v8 = *(_DWORD *)(_gpsi + 4184);
  if ( *(_DWORD *)(_gpsi + 4248) == v8 && *(_DWORD *)(_gpsi + 4232) == v8 )
  {
    v38 = 49162;
    v37 = 49157;
  }
  else
  {
    v38 = 10;
    v37 = 5;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v43[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v43;
  v43[1] = v5;
  if ( v5 )
    HMLockObject(v5);
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 20) + 12) )
    goto LABEL_24;
  if ( gihmodUserApiHook >= 0 && v36 )
  {
    if ( v5 && (SmartObjStackRefBase<tagMENU>::Init(v44, a2), v45 = 0, v34 = 1, xxxSendUAHInitMenuMessage(a1)) )
    {
      v30 = 1;
      v11 = 1;
    }
    else
    {
      v11 = v34;
      v30 = 0;
    }
    if ( (v11 & 1) != 0 )
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v44);
    if ( v30 )
    {
      xxxSendUAHMenuMessage(a2, a1);
LABEL_24:
      v35 = GreSetBkMode(a1, 1);
      goto LABEL_26;
    }
    v5 = *(_DWORD **)(a2 + 52);
    ThreadLockExchange((int)v5, (int)v43);
  }
LABEL_26:
  if ( (*(_BYTE *)(a2 + 80) & 3) != 0 )
  {
    v12 = MNGetpItemFromIndex(a2, *(_DWORD *)(a2 + 72));
    v31 = (int **)v12;
    if ( v12 )
      v13 = *(_DWORD *)(*(_DWORD *)v12 + 40);
    else
      v13 = 0;
    GreSetViewportOrg(a1, v42 - v13, v13);
    v14 = *(_DWORD *)(a2 + 72);
    v15 = v31;
  }
  else
  {
    v15 = *(int ***)(a2 + 56);
    v14 = 0;
    v31 = v15;
  }
  v39 = 0;
  v33 = v14;
  if ( v14 < *(_DWORD *)(*(_DWORD *)(a2 + 20) + 24) )
  {
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_60;
      v32 = *v15;
      v16 = **v15;
      if ( (v16 & 0x20) != 0 )
      {
        v32 = *v15;
        if ( v36 )
        {
          if ( (v16 & 0x2000) != 0 && v33 )
            v17 = *(v15 - 20);
          else
            v17 = *v15;
          v18 = v17[9];
          v47 = 0;
          v46 = v18 - 3;
          v48 = v18 - 1;
          v49 = *(_DWORD *)(a2 + 40);
          DrawEdge(a1, &v46, 2u, v37);
          v32 = *v31;
          v16 = **v31;
        }
      }
      if ( (v16 & 0x800) != 0
        && ((v16 & 0x100) == 0 || *(_WORD *)(_gptiCurrent + 340) < 0x400u)
        && !MNIsUAHMenu((_DWORD *)a2) )
      {
        break;
      }
      SmartObjStackRefBase<tagMENU>::Init(v44, a2);
      v45 = 0;
      if ( v5 )
      {
        v21 = v5[5];
        v22 = *(_DWORD *)(v21 + 184) & 0xF;
        if ( v22 != 3 && (*(_DWORD *)(v21 + 144) & 0x8000000) != 0 )
          GetWindowDpiLastNotify(v5);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      {
        PsGetCurrentProcessWin32Process();
      }
      xxxDrawMenuItem(a1, (int)v44, (int)v31, 0, (int)v5);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v44);
      if ( MNGetpItemIndex(a2, (int)v31) != -1 )
        goto LABEL_53;
LABEL_55:
      v23 = v33 + 1;
      v33 = v23;
      v24 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 24);
      if ( v23 == -1 || v23 >= v24 )
        v15 = 0;
      else
        v15 = (int **)(*(_DWORD *)(a2 + 56) + 80 * v23);
      v31 = v15;
      if ( v23 >= v24 )
        goto LABEL_60;
    }
    v20 = v32[9];
    v51 = (*(_DWORD *)(v19 + 48) >> 1) - 1 + *(_DWORD *)(v19 + 40);
    v50 = v20 + 1;
    v52 = v20 - 1 + v32[11];
    v53 = v51 + 2;
    DrawEdge(a1, &v50, 2u, v38);
    MNDrawInsertionBar(v28, v29);
LABEL_53:
    if ( (*(_BYTE *)(a2 + 80) & 3) != 0 )
    {
      v39 += (*v31)[12];
      if ( v39 > *(_DWORD *)(a2 + 40) )
        goto LABEL_60;
    }
    goto LABEL_55;
  }
LABEL_60:
  ThreadUnlock1();
  if ( v35 )
    GreSetBkMode(a1, v35);
  GreSetViewportOrg(a1, v42, v25);
  GreSetTextAlign(a1);
  return GreSelectFont(a1, v40);
}
