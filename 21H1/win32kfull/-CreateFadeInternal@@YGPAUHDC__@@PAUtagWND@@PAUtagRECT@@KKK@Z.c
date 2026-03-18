/*
 * XREFs of ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _CreateFadeForWindow@12 @ 0x1536B9 (_CreateFadeForWindow@12.c)
 *     _zzzStartSonar@0 @ 0x15406B (_zzzStartSonar@0.c)
 *     ?zzzMNFadeSelection@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x197315 (-zzzMNFadeSelection@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _GreCreateSprite@44 @ 0x1F6C0 (_GreCreateSprite@44.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreDwmNotifySpriteDPIChange@16 @ 0x23C66 (_GreDwmNotifySpriteDPIChange@16.c)
 *     _InitializeDPIINFO@16 @ 0x24784 (_InitializeDPIINFO@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _DeleteFadeSprite@0 @ 0x153705 (_DeleteFadeSprite@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __userpurge CreateFadeInternal@<eax>(
        HDEV a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v7; // esi
  HDEV v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // edi
  PKTHREAD v13; // eax
  PKTHREAD v14; // eax
  PKTHREAD v15; // eax
  unsigned __int16 v16; // ax
  int v17; // edi
  int v18; // esi
  _DWORD *v19; // ebx
  int v20; // edx
  int v21; // ecx
  HDEV v22; // ecx
  int v23; // ebx
  int v24; // eax
  unsigned int v25; // edi
  int **v26; // eax
  int *v27; // eax
  int v28; // eax
  void *Sprite; // eax
  int v30; // edx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v33; // eax
  PKTHREAD v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  _BYTE v38[44]; // [esp+10h] [ebp-ECh] BYREF
  _DWORD v39[2]; // [esp+3Ch] [ebp-C0h] BYREF
  int v40; // [esp+44h] [ebp-B8h] BYREF
  int v41; // [esp+48h] [ebp-B4h]
  int v42; // [esp+4Ch] [ebp-B0h]
  int v43; // [esp+50h] [ebp-ACh]
  int v44; // [esp+54h] [ebp-A8h]
  int ScaledLogPixels; // [esp+58h] [ebp-A4h] BYREF
  int v46; // [esp+5Ch] [ebp-A0h] BYREF
  unsigned int v47; // [esp+60h] [ebp-9Ch]
  _DWORD *v48; // [esp+64h] [ebp-98h]
  struct HWND__ v49[35]; // [esp+68h] [ebp-94h] BYREF

  v47 = a5;
  v7 = a2;
  v8 = a1;
  v48 = a1;
  v44 = a2;
  if ( *(_DWORD *)&_gfade[8] )
    return 0;
  v9 = *(_DWORD *)&_gfade[4];
  if ( v9 )
  {
    GreCleanDC(v9);
    GreSetLayout(*(_DWORD *)&_gfade[4], -1, 0);
  }
  else
  {
    *(_DWORD *)&_gfade[4] = GreCreateCompatibleDC(*(_DWORD *)(_gpDispInfo + 28));
    v10 = *(_DWORD *)&_gfade[4];
    if ( !v10 )
      return 0;
    GreSetDCOwnerEx(v10, 0, 0, 0);
  }
  if ( v7 )
  {
    v8 = (HDEV)(*(_DWORD *)(v7 + 20) + 52);
    v48 = v8;
  }
  ScaledLogPixels = 96;
  if ( v7 )
  {
    *(_DWORD *)&_gfade[36] |= 8u;
    *(_DWORD *)_gfade = *(_DWORD *)v7;
    CurrentThread = KeGetCurrentThread();
    if ( W32GetThreadWin32Thread(CurrentThread) )
    {
      v33 = KeGetCurrentThread();
      if ( *(_DWORD *)(W32GetThreadWin32Thread(v33) + 248) )
      {
        v34 = KeGetCurrentThread();
        if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v34) + 248) + 4) + 32) & 1) != 0 )
        {
          v35 = *(_DWORD *)(v7 + 20);
          v36 = *(_DWORD *)(v35 + 184);
          if ( (v36 & 0xF) == 0 && (v36 & 0x40000000) != 0 )
          {
            v37 = *(unsigned __int16 *)(v35 + 180);
            if ( (_WORD)v37 != 96 )
              ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v37);
          }
        }
      }
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v39);
    xxxSetLayeredWindow((struct tagWND *)v7, 0, 0);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v39);
    v25 = a4;
  }
  else
  {
    v46 = 0;
    v40 = *(_DWORD *)v8;
    v41 = *((_DWORD *)v8 + 1);
    v42 = *((_DWORD *)v8 + 2);
    v43 = *((_DWORD *)v8 + 3);
    v11 = v47;
    v12 = v47 & 0xF;
    if ( v12 == 2 )
    {
      v46 = _MonitorFromRect((int *)v8, 2, v47);
    }
    else
    {
      v39[0] = 0;
      v39[1] = 0;
      LogicalToPhysicalDPIPoint(v39, v8, v47, &v46);
      if ( *(_WORD *)(*(_DWORD *)(v46 + 20) + 52) != 96 )
      {
        v13 = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(v13) )
        {
          v14 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v14) + 248) )
          {
            v15 = KeGetCurrentThread();
            if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v15) + 248) + 4) + 32) & 1) != 0
              && !v12
              && (v11 & 0x40000000) != 0 )
            {
              v16 = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_DWORD *)(v46 + 20) + 52));
              ScaledLogPixels = v16;
              ScaleDPIRect(&v40, &v40, v16, 0x60u, 0, 0, 0, 0);
              v17 = *((_DWORD *)v8 + 1);
              v18 = v40;
              v19 = v48;
              v42 += v40;
              v20 = v41 - v17;
              v21 = v40 - *v48;
              *v48 = v40;
              v19[2] += v21;
              v22 = (HDEV)v19;
              v19[3] += v20;
              v23 = v41;
              v43 += v41;
              *((_DWORD *)v22 + 1) = v17 + v20;
              v24 = 2 * v18;
              v11 = v47;
              v40 = v24;
              v41 = 2 * v23;
              v8 = v22;
            }
          }
        }
      }
    }
    memset(v38, 0, 0x28u);
    InitializeDPIINFO((int)v38, v11, v46, 0);
    v25 = a4;
    *(_DWORD *)&_gfade[36] &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v49, 0, 0x84u);
      v47 = a4 & 0xFFFFFEFF;
      v49[0].unused = v40;
      v26 = *(int ***)(_grpdeskRitInput + 4);
      v49[1].unused = v41;
      v27 = *v26;
      v49[2].unused = v42;
      v28 = *v27;
      v49[3].unused = v43;
      v49[4].unused = v40;
      v49[5].unused = v41;
      v49[6].unused = v42;
      v49[7].unused = v43;
      v49[12].unused = v28;
      Sprite = GreCreateSprite(
                 v8,
                 v49,
                 (struct tagRECT *)0x9900,
                 (struct tagMINIWINDOWINFO *)1,
                 1u,
                 0,
                 0,
                 0,
                 (int)&ScaledLogPixels);
      v25 = v47;
    }
    else
    {
      Sprite = GreCreateSprite(
                 v8,
                 0,
                 (struct tagRECT *)0x9900,
                 (struct tagMINIWINDOWINFO *)1,
                 1u,
                 0,
                 0,
                 0,
                 (int)&ScaledLogPixels);
    }
    *(_DWORD *)_gfade = Sprite;
    if ( *(_DWORD *)_gfade )
      GreDwmNotifySpriteDPIChange((int)v38, 0, *(void **)_gfade, (int)v38);
    v7 = v44;
  }
  if ( !*(_DWORD *)_gfade )
    return 0;
  v30 = *((_DWORD *)v8 + 2) - *(_DWORD *)v8;
  v47 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
  v44 = v30;
  *(_DWORD *)&_gfade[8] = GreCreateCompatibleBitmapInternal(
                            *(HDC *)(_gpDispInfo + 28),
                            v30,
                            v47,
                            0,
                            0,
                            (unsigned __int16 *)&ScaledLogPixels);
  if ( !*(_DWORD *)&_gfade[8] )
  {
    DeleteFadeSprite();
    return 0;
  }
  GreSelectBitmap(*(_DWORD *)&_gfade[4], *(_DWORD *)&_gfade[8]);
  if ( v7 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(v7 + 20) + 18) & 0x40) != 0 )
      GreSetLayout(*(_DWORD *)&_gfade[4], -1, 1);
  }
  GreSetDCOwnerEx(*(_DWORD *)&_gfade[4], -2147483646, 0, 1);
  *(_DWORD *)(struct HDEV__ *)&_gfade[12] = *(_DWORD *)v8;
  *(_DWORD *)(struct HDEV__ *)&_gfade[16] = v8[1];
  *(_DWORD *)&_gfade[20] = v44;
  *(_DWORD *)&_gfade[24] = v47;
  *(_DWORD *)&_gfade[28] = a3;
  *(_DWORD *)&_gfade[36] |= v25;
  *(_DWORD *)&_gfade[40] = (_gfade[36] & 0x40) != 0 ? 0xFF00FF : 0;
  return *(HDC *)&_gfade[4];
}
