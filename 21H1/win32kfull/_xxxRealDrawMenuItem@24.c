/*
 * XREFs of _xxxRealDrawMenuItem@24 @ 0x1AA53B
 * Callers:
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _xxxGetWindowSmIcon@8 @ 0x1D0E0 (_xxxGetWindowSmIcon@8.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ?xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagWND@@@Z @ 0xB6372 (-xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUta.c)
 *     ?MNDrawHilite@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0xB66E6 (-MNDrawHilite@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _MNIsFlatMenu@0 @ 0x1846E0 (_MNIsFlatMenu@0.c)
 *     ?SetupFakeMDIAppStuff@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x19E522 (-SetupFakeMDIAppStuff@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 *     _BltColor@40 @ 0x1ACFB1 (_BltColor@40.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     _FindCharPosition@8 @ 0x1B7A59 (_FindCharPosition@8.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
 */

int __fastcall xxxRealDrawMenuItem(HDC a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  HDC v8; // ecx
  int v9; // ebx
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  bool v13; // zf
  int DpiForSystem; // eax
  int *v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // esi
  int v23; // eax
  __int16 *OemBitmapInfoForDpi; // eax
  int v25; // edx
  int v26; // eax
  ULONG_PTR v27; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int WindowSmIcon; // edi
  unsigned int v31; // edx
  int *v32; // eax
  int DpiDependentMetric; // edi
  int v34; // eax
  INT v35; // eax
  INT v36; // eax
  int ProcessDpiMetrics; // eax
  int ObjectW; // eax
  XLATEOBJ *v39; // edx
  HDC CompatibleDC; // edi
  int v41; // eax
  unsigned __int8 *v42; // edx
  int v43; // ebx
  unsigned int v44; // ecx
  int v45; // eax
  volatile signed __int32 *v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // edi
  int v50; // edx
  int *v51; // ecx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  struct OEMBITMAPSET **v55; // eax
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // edx
  int v61; // esi
  int v62; // ecx
  int v63; // eax
  int v64; // esi
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // edi
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // esi
  int v73; // eax
  __int16 *v74; // esi
  int *v75; // ebx
  __int64 v76; // rax
  int v77; // ecx
  int v78; // edi
  int v79; // edx
  int v81; // [esp-4h] [ebp-104h]
  int v82; // [esp-4h] [ebp-104h]
  struct tagITEM *v83; // [esp+0h] [ebp-100h]
  int v84; // [esp+4h] [ebp-FCh]
  int v85; // [esp+Ch] [ebp-F4h] BYREF
  ULONG_PTR v86; // [esp+10h] [ebp-F0h]
  int v87; // [esp+14h] [ebp-ECh]
  _DWORD v88[2]; // [esp+18h] [ebp-E8h] BYREF
  _DWORD v89[2]; // [esp+20h] [ebp-E0h] BYREF
  _DWORD v90[2]; // [esp+28h] [ebp-D8h] BYREF
  _DWORD v91[2]; // [esp+30h] [ebp-D0h] BYREF
  unsigned __int8 *v92; // [esp+38h] [ebp-C8h] BYREF
  int v93; // [esp+3Ch] [ebp-C4h]
  int v94; // [esp+40h] [ebp-C0h]
  int v95; // [esp+44h] [ebp-BCh]
  int v96; // [esp+48h] [ebp-B8h]
  int v97; // [esp+4Ch] [ebp-B4h]
  int v98; // [esp+50h] [ebp-B0h]
  int *v99[2]; // [esp+54h] [ebp-ACh] BYREF
  int v100; // [esp+5Ch] [ebp-A4h]
  int v101; // [esp+60h] [ebp-A0h]
  struct XDCOBJ *v102; // [esp+64h] [ebp-9Ch]
  int v103; // [esp+68h] [ebp-98h]
  HDC v104; // [esp+6Ch] [ebp-94h]
  int CharPosition; // [esp+70h] [ebp-90h]
  int v106; // [esp+74h] [ebp-8Ch]
  _DWORD v107[22]; // [esp+78h] [ebp-88h] BYREF
  _DWORD v108[11]; // [esp+D0h] [ebp-30h] BYREF

  v104 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v99, 0);
  v81 = *a2;
  v94 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v7 = 0;
  v95 = _gptiCurrent;
  v100 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v99, v81);
  v9 = a2[1];
  v97 = v9;
  v98 = *(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 20) & 1;
  if ( v98 )
  {
    v10 = 2;
    CharPosition = 2;
    if ( *(int *)(*(_DWORD *)(*v99[0] + 20) + 20) >= 0 )
    {
      if ( a5 )
      {
        v11 = *(_DWORD *)v9;
        v12 = 0;
        if ( (*(_BYTE *)(*(_DWORD *)v9 + 4) & 8) != 0 )
          v13 = *(_DWORD *)(v11 + 16) == 0;
        else
          v13 = *(_DWORD *)(v11 + 20) == 0;
        LOBYTE(v12) = !v13;
      }
      else
      {
        v12 = DrawMenuItemCheckMark((int **)v9, v104, v8, v83, v84);
      }
      v103 = v12;
      if ( (*(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 20) & 0x4000000) == 0 || !*(_DWORD *)(*(_DWORD *)v9 + 64) || v12 )
      {
        if ( (**(_DWORD **)v9 & 0x2000) != 0 )
        {
          v10 = 2;
        }
        else
        {
          DpiForSystem = GetDpiForSystem();
          v10 = *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2) + 4;
        }
        CharPosition = v10;
      }
      v7 = v103;
    }
    else
    {
      v10 = 4;
      CharPosition = 4;
    }
  }
  else
  {
    v10 = 0;
    CharPosition = 0;
    if ( !MNIsFlatMenu() && *(char *)(*(_DWORD *)v9 + 4) < 0 )
      v94 = v25;
  }
  if ( !*(_DWORD *)(*(_DWORD *)v9 + 64) || v7 && (*(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 20) & 0x4000000) != 0 )
    goto LABEL_110;
  if ( a5 )
    goto LABEL_64;
  v15 = *(int **)v9;
  v16 = *(_DWORD *)(*(_DWORD *)v9 + 64);
  v101 = *(_DWORD *)(*(_DWORD *)v9 + 4);
  if ( (v101 & 0x20000000) != 0 )
  {
    if ( v16 == 1 )
      goto LABEL_52;
    v17 = v10;
    v18 = v16 - 2;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 2;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
            {
              v101 = PrepareHDCBITSBitmap(0);
              if ( v101 )
              {
                v22 = *(_DWORD *)(*(_DWORD *)v9 + 64);
                v23 = GetDpiForSystem();
                OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v22 + 79, v23);
                v10 = CharPosition;
                BltColor(
                  v104,
                  v101,
                  CharPosition,
                  (unsigned int)(*(_DWORD *)(*(_DWORD *)v9 + 48) - OemBitmapInfoForDpi[3]) >> 1,
                  OemBitmapInfoForDpi[2],
                  OemBitmapInfoForDpi[3],
                  *OemBitmapInfoForDpi,
                  OemBitmapInfoForDpi[1],
                  1);
              }
              goto LABEL_110;
            }
            v26 = 25;
            v17 = v10 + 2;
          }
          else
          {
            v26 = 21;
          }
LABEL_41:
          BitBltSysBmp(v104, v17, 2, v26, 1);
          goto LABEL_110;
        }
        v82 = 18;
      }
      else
      {
        v82 = 22;
        v17 = v10 + 2;
      }
    }
    else
    {
      v82 = 26;
    }
    v26 = v82;
    if ( (v101 & 0x80u) != 0 )
      v26 = v82 + 1;
    goto LABEL_41;
  }
  if ( v16 == -1 )
  {
    xxxSendMenuDrawItemMessage(v104, v99, (int *)v9, 1, v10, 0);
    goto LABEL_110;
  }
  if ( *(_WORD *)(v95 + 340) > 0x400u
    || (!v15[8] || *(_DWORD *)(v9 + 12))
    && (v98
     || v9 != *(_DWORD *)(*v99[0] + 56)
     || *(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 24) <= 1u
     || *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v99[0] + 56) + 80) + 64)
     || !*(_DWORD *)(v9 + 8)) )
  {
LABEL_64:
    v32 = *(int **)v9;
    DpiDependentMetric = *(_DWORD *)(*(_DWORD *)v9 + 72);
    CharPosition = *(_DWORD *)(*(_DWORD *)v9 + 68);
    v106 = DpiDependentMetric;
    if ( v98 )
    {
      v34 = v32[12] - DpiDependentMetric;
      if ( v34 <= 0 )
        v103 = 0;
      else
        v103 = v34 / 2;
    }
    else
    {
      v35 = GetDpiForSystem();
      if ( DpiDependentMetric <= GetDpiDependentMetric(26, v35) )
      {
        v36 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(26, v36);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_DWORD *)v9 + 72);
      }
      v106 = DpiDependentMetric;
      v103 = 0;
      if ( *(_DWORD *)(v9 + 12) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
          ProcessDpiMetrics = GetProcessDpiMetrics();
        else
          ProcessDpiMetrics = Get96DpiMetrics();
        v10 += *(_DWORD *)(ProcessDpiMetrics + 4);
      }
    }
    v93 = GreSelectBitmap(_ghdcMem2, *(_DWORD *)(*(_DWORD *)v9 + 64));
    if ( !v93 )
      goto LABEL_110;
    memset(v107, 0, 0x54u);
    ObjectW = GreExtGetObjectW(*(struct HLFONT__ **)(*(_DWORD *)v9 + 64), 84, v107);
    if ( !a5 || **(_DWORD **)v9 == 4 )
    {
      if ( ObjectW != 84 || HIWORD(v107[9]) != 32 || v107[10] || **(_DWORD **)v9 == 4 )
      {
        if ( LOWORD(v107[4]) * HIWORD(v107[4]) == 1 )
          v47 = 12060490;
        else
          v47 = MNDrawHilite((int)v99, v9) ? 3342344 : 13369376;
        NtGdiBitBltInternal(
          v104,
          v94 + v10,
          (struct XDCOBJ *)(v94 + v103),
          CharPosition,
          DpiDependentMetric,
          _ghdcMem2,
          0,
          0,
          v47,
          0xFFFFFF,
          0);
      }
      goto LABEL_109;
    }
    v102 = (struct XDCOBJ *)33488896;
    v95 = 0;
    v101 = 0;
    if ( a6 )
    {
      memset(v108, 0, sizeof(v108));
      v92 = 0;
      CompatibleDC = (HDC)GreCreateCompatibleDC(v104);
      if ( !CompatibleDC )
      {
LABEL_92:
        if ( a6 )
        {
          if ( v95 != -1 )
            GreSelectBitmap(CompatibleDC, v95);
          if ( v101 )
          {
            LOBYTE(v39) = 5;
            v45 = HmgLock(v101, v39);
            if ( v45 )
            {
              v46 = (volatile signed __int32 *)(v45 + 8);
              _InterlockedDecrement(v46);
              _InterlockedDecrement(v46);
            }
            GreDeleteObject(v101);
          }
          if ( CompatibleDC )
            GreDeleteDC(CompatibleDC);
        }
LABEL_109:
        GreSelectBitmap(_ghdcMem2, v93);
        goto LABEL_110;
      }
      v108[2] = v106;
      v108[3] = 2097153;
      v108[1] = CharPosition;
      v108[0] = 40;
      memset(&v108[4], 0, 28);
      v41 = GreCreateDIBitmapReal(CompatibleDC, 0, (int)v108, 0, 0x2Cu, 0, 0, 0, 0, 0, 0, &v92);
      v101 = v41;
      if ( v41 )
      {
        v95 = GreSelectBitmap(CompatibleDC, v41);
        if ( v95 != -1 )
        {
          NtGdiAlphaBlend(
            CompatibleDC,
            0,
            0,
            CharPosition,
            (XLATEOBJ *)v106,
            _ghdcMem2,
            0,
            0,
            CharPosition,
            v106,
            (unsigned int)v102,
            0);
          v39 = (XLATEOBJ *)v106;
          v96 = CharPosition * v106;
          if ( CharPosition * v106 > 0 )
          {
            v42 = v92;
            v43 = CharPosition * v106;
            do
            {
              v44 = (77 * *v42 + 129 + 29 * v42[2] + 150 * (unsigned int)v42[1]) >> 8;
              *(_DWORD *)v42 = v44 | ((v44 | ((v44 | (v42[3] << 8)) << 8)) << 8);
              v42 = v92 + 4;
              v92 += 4;
              --v43;
            }
            while ( v43 );
            v9 = v97;
            v39 = (XLATEOBJ *)v106;
          }
          BYTE2(v102) = 102;
          goto LABEL_90;
        }
      }
    }
    else
    {
      CompatibleDC = (HDC)_ghdcMem2;
    }
    v39 = (XLATEOBJ *)v106;
LABEL_90:
    if ( CompatibleDC )
      NtGdiAlphaBlend(
        v104,
        v94 + v10,
        (struct XDCOBJ *)(v94 + v103),
        CharPosition,
        v39,
        CompatibleDC,
        0,
        0,
        CharPosition,
        (int)v39,
        (unsigned int)v102,
        0);
    goto LABEL_92;
  }
  while ( 1 )
  {
LABEL_52:
    if ( !*(_DWORD *)(*(_DWORD *)v9 + 32) && *(_DWORD *)(*v99[0] + 52) )
      SetupFakeMDIAppStuff((int)v99, (_DWORD *)v9);
    v27 = HMValidateHandleNoRip(*(_DWORD *)(*(_DWORD *)v9 + 32), 1);
    if ( v27 )
      break;
    if ( !*(_DWORD *)(*(_DWORD *)v9 + 32) )
      goto LABEL_59;
    *(_DWORD *)(*(_DWORD *)v9 + 32) = 0;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v85 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v85;
  v86 = v27;
  HMLockObject(v27);
  WindowSmIcon = xxxGetWindowSmIcon(v27, 0);
  ThreadUnlock1();
  if ( WindowSmIcon )
    goto LABEL_60;
LABEL_59:
  WindowSmIcon = dword_26B8CC;
LABEL_60:
  v31 = a3 - 4;
  if ( v98 && a4 - 2 < v31 )
    v31 = a4 - 2;
  _DrawIconEx(v104, v10 + 4, (struct XDCOBJ *)1, WindowSmIcon, v31, a4 - 2, 0, *(_DWORD *)(_gpsi + 4308), 19);
LABEL_110:
  v48 = v100;
  if ( !v100 )
    v48 = *v99[0];
  if ( MNGetpItemIndex(v48, v9) == -1 )
    goto LABEL_191;
  if ( a5 )
    goto LABEL_191;
  v106 = *(_DWORD *)(v9 + 12);
  if ( !v106 )
    goto LABEL_191;
  v49 = *(_DWORD *)(*(_DWORD *)v9 + 28);
  if ( !v49 )
    goto LABEL_191;
  v97 = *(_DWORD *)(v9 + 72);
  v96 = *(_DWORD *)(v9 + 76);
  if ( v98 && *(_DWORD *)(*v99[0] + 44) )
  {
    v10 = *(_DWORD *)(*v99[0] + 44);
  }
  else if ( *(_DWORD *)(*(_DWORD *)v9 + 64) )
  {
    v10 += *(_DWORD *)(*(_DWORD *)v9 + 68) + 2;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v50 = GetProcessDpiMetrics();
  else
    v50 = Get96DpiMetrics();
  v101 = v50;
  v51 = *(int **)v9;
  v102 = *(struct XDCOBJ **)(v50 + 16);
  v93 = (int)v51;
  v52 = v51[12] - *(_DWORD *)(v50 + 8) - (_DWORD)v102 - 1;
  if ( v52 > 0 )
  {
    v50 = v101;
    v102 = (struct XDCOBJ *)((char *)v102 + v52 / 2);
  }
  if ( !v98 && !v51[16] )
    v10 += *(_DWORD *)(v50 + 4);
  v53 = v106;
  if ( *(_WORD *)v106 == 8 && !v98 )
  {
    v53 = v106 + 2;
    v106 += 2;
    if ( !--v49 )
      goto LABEL_191;
  }
  CharPosition = FindCharPosition(v53, 9);
  v95 = FindCharPosition(v106, 8);
  v103 = *(_DWORD *)(v93 + 44);
  v54 = GetDpiForSystem();
  v55 = GetOemBitmapInfoForDpi(63, v54);
  v56 = v95;
  v103 = v103 - *((__int16 *)v55 + 2) - 2;
  if ( !v95 || v95 == v49 )
  {
    if ( CharPosition && v95 == v49 )
    {
      if ( (**(_DWORD **)v9 & 0x2000) != 0 )
      {
        v89[0] = 0;
        v89[1] = 0;
        xxxPSMGetTextExtent(CharPosition, v89);
        v66 = v100;
        if ( !v100 )
          v66 = *v99[0];
        if ( MNGetpItemIndex(v66, v9) == -1 || v97 != *(_DWORD *)(v9 + 72) || v96 != *(_DWORD *)(v9 + 76) )
          goto LABEL_191;
        v10 = v103 - v89[0];
        if ( !v98 && !*(_DWORD *)(*(_DWORD *)v9 + 64) )
          v10 += *(_DWORD *)(v101 + 4);
      }
      xxxDrawMenuItemText(
        (int)v99,
        v9,
        v104,
        (ERECTL *)(v94 + v10),
        (struct XDCOBJ *)((char *)v102 + v94),
        v106,
        CharPosition,
        *(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 20) & 4);
      v67 = v100;
      if ( !v100 )
        v67 = *v99[0];
      if ( MNGetpItemIndex(v67, v9) == -1 || v97 != *(_DWORD *)(v9 + 72) || v96 != *(_DWORD *)(v9 + 76) )
        goto LABEL_191;
    }
  }
  else
  {
    if ( (**(_DWORD **)v9 & 0x2000) != 0 && v98 )
    {
      v91[0] = 0;
      v91[1] = 0;
      xxxPSMGetTextExtent(v95, v91);
      v57 = v100;
      if ( !v100 )
        v57 = *v99[0];
      if ( MNGetpItemIndex(v57, v9) == -1 || v97 != *(_DWORD *)(v9 + 72) || v96 != *(_DWORD *)(v9 + 76) )
        goto LABEL_191;
      v10 = v103 - v91[0];
      v56 = v95;
    }
    xxxDrawMenuItemText(
      (int)v99,
      v9,
      v104,
      (ERECTL *)(v94 + v10),
      (struct XDCOBJ *)((char *)v102 + v94),
      v106,
      v56,
      *(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 20) & 4);
    v58 = v100;
    if ( !v100 )
      v58 = *v99[0];
    if ( MNGetpItemIndex(v58, v9) == -1 || v97 != *(_DWORD *)(v9 + 72) || v96 != *(_DWORD *)(v9 + 76) )
      goto LABEL_191;
    v59 = v95;
    if ( CharPosition > (unsigned int)(v95 + 1) )
    {
      if ( (**(_DWORD **)v9 & 0x2000) != 0 && v98 )
      {
        v60 = v103 - *(_DWORD *)(*(_DWORD *)v9 + 52);
        v61 = CharPosition - v95;
      }
      else
      {
        v90[0] = 0;
        v90[1] = 0;
        v61 = CharPosition - v95;
        xxxPSMGetTextExtent(CharPosition - v95 - 1, v90);
        v62 = v100;
        if ( !v100 )
          v62 = *v99[0];
        if ( MNGetpItemIndex(v62, v9) == -1 || v97 != *(_DWORD *)(v9 + 72) || v96 != *(_DWORD *)(v9 + 76) )
          goto LABEL_191;
        v59 = v95;
        v60 = *(_DWORD *)(*(_DWORD *)v9 + 52) - v90[0];
      }
      v63 = v61 - 1;
      v64 = v106;
      xxxPSMTextOut(
        v104,
        v60,
        v102,
        v106 + 2 * (v59 + 1),
        v63,
        ~(*(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 20) << 18) & 0x100000);
      v65 = v100;
      if ( !v100 )
        v65 = *v99[0];
      if ( MNGetpItemIndex(v65, v9) == -1 || v97 != *(_DWORD *)(v9 + 72) || v96 != *(_DWORD *)(v9 + 76) )
        goto LABEL_191;
      goto LABEL_180;
    }
  }
  v64 = v106;
LABEL_180:
  if ( CharPosition >= (unsigned int)(v49 - 1) )
    goto LABEL_191;
  if ( (**(_DWORD **)v9 & 0x2000) == 0 || !v98 )
  {
    v70 = *(_DWORD *)(*(_DWORD *)v9 + 52) + *(_DWORD *)(v101 + 4);
    v68 = v49 - CharPosition;
    goto LABEL_190;
  }
  v88[0] = 0;
  v88[1] = 0;
  v68 = v49 - CharPosition;
  xxxPSMGetTextExtent(v68 - 1, v88);
  v69 = v100;
  if ( !v100 )
    v69 = *v99[0];
  if ( MNGetpItemIndex(v69, v9) != -1 && v97 == *(_DWORD *)(v9 + 72) && v96 == *(_DWORD *)(v9 + 76) )
  {
    v70 = *(_DWORD *)(*(_DWORD *)v9 + 44) - *(_DWORD *)(*(_DWORD *)v9 + 52) - v88[0];
LABEL_190:
    xxxPSMTextOut(
      v104,
      v70,
      v102,
      v64 + 2 * (CharPosition + 1),
      v68 - 1,
      ~(*(_DWORD *)(*(_DWORD *)(*v99[0] + 20) + 20) << 18) & 0x100000);
  }
LABEL_191:
  v71 = v100;
  if ( !v100 )
    v71 = *v99[0];
  if ( MNGetpItemIndex(v71, v9) != -1 && !a5 )
  {
    if ( v98 )
    {
      if ( *(_DWORD *)(v9 + 8) )
      {
        v72 = (**(_DWORD **)v9 & 0x2000) != 0 ? 0x1E : 0;
        v73 = GetDpiForSystem();
        v74 = (__int16 *)GetOemBitmapInfoForDpi(v72 + 62, v73);
        if ( *(_DWORD *)(*(_DWORD *)v9 + 48) >= v74[3] )
        {
          v101 = PrepareHDCBITSBitmap(0);
          if ( v101 )
          {
            v75 = *(int **)v9;
            v93 = v74[3];
            v76 = v75[12] - v93 - 2;
            v77 = ((int)v76 - HIDWORD(v76)) >> 1;
            if ( v77 <= 0 )
              v77 = 0;
            v78 = v74[2];
            if ( (*v75 & 0x2000) != 0 )
              v79 = v74[2];
            else
              v79 = v75[11] - v78;
            BltColor(v104, v101, v79, v77, v78, v93, *v74, v74[1], 1);
          }
        }
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v99);
  return 1;
}
