/*
 * XREFs of _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxEndMenuLoop@8 @ 0x195235 (_xxxEndMenuLoop@8.c)
 * Callees:
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ?xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagWND@@@Z @ 0xB6372 (-xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUta.c)
 *     _GreSetViewportOrg@16 @ 0xB675E (_GreSetViewportOrg@16.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 *     _ThreadLockMenuNoModify@8 @ 0xB75EA (_ThreadLockMenuNoModify@8.c)
 *     _CALL_LPK@4 @ 0xBC83A (_CALL_LPK@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MNIsFlatMenu@0 @ 0x1846E0 (_MNIsFlatMenu@0.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     _MNIsOwnerDrawItem@8 @ 0x1A99A0 (_MNIsOwnerDrawItem@8.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     _GetPrefixCount@16 @ 0x1B837E (_GetPrefixCount@16.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
 */

_DWORD *__fastcall xxxDrawMenuBarUnderlines(int a1, int a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *NonChildAncestor; // eax
  _DWORD *v9; // esi
  int v11; // ecx
  BOOL v12; // ecx
  int v13; // eax
  int v14; // ecx
  int *v15; // ebx
  HDC DCEx; // eax
  int v17; // ecx
  HDC v18; // esi
  int v19; // ecx
  int v20; // ecx
  int v21; // edi
  int *DPIMETRICS; // eax
  int v23; // ecx
  int *ProcessDpiMetrics; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // edx
  int v28; // ecx
  struct XDCOBJ *v29; // edi
  int v30; // eax
  unsigned int v31; // eax
  bool v32; // zf
  int v33; // edi
  int v34; // ecx
  int v35; // esi
  int DpiForSystem; // eax
  struct OEMBITMAPSET **OemBitmapInfoForDpi; // eax
  int v38; // edi
  int v39; // edx
  int v40; // edi
  int v41; // ecx
  int v42; // edx
  unsigned int v43; // eax
  _BYTE *v44; // esi
  unsigned __int16 PrefixCount; // ax
  int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // edx
  int *v49[2]; // [esp+Ch] [ebp-264h] BYREF
  int v50; // [esp+14h] [ebp-25Ch]
  HDC v51; // [esp+18h] [ebp-258h]
  int v52; // [esp+1Ch] [ebp-254h]
  int v53; // [esp+20h] [ebp-250h]
  int v54; // [esp+24h] [ebp-24Ch]
  struct XDCOBJ *v55; // [esp+28h] [ebp-248h]
  int v56; // [esp+2Ch] [ebp-244h]
  BOOL v57; // [esp+30h] [ebp-240h]
  int v58; // [esp+34h] [ebp-23Ch]
  int v59; // [esp+38h] [ebp-238h]
  int v60; // [esp+3Ch] [ebp-234h]
  _DWORD *v61; // [esp+40h] [ebp-230h]
  int v62; // [esp+44h] [ebp-22Ch]
  _DWORD v63[2]; // [esp+48h] [ebp-228h] BYREF
  _DWORD v64[3]; // [esp+50h] [ebp-220h] BYREF
  int v65; // [esp+5Ch] [ebp-214h] BYREF
  int v66; // [esp+60h] [ebp-210h]
  int v67; // [esp+64h] [ebp-20Ch]
  _BYTE v68[516]; // [esp+68h] [ebp-208h] BYREF

  v53 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v49, 0);
  v50 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v63[0] = 0;
  v63[1] = 0;
  v62 = ThreadWin32Thread;
  if ( ((unsigned int)&loc_20000 & _gdwPUDFlags) != 0
    || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
  {
    return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
  }
  v5 = KeGetCurrentThread();
  v6 = W32GetThreadWin32Thread(v5);
  if ( *(_DWORD *)(v6 + 340) <= 0x400u )
    v7 = *(_DWORD *)(v6 + 352);
  else
    LOBYTE(v7) = 0;
  if ( (v7 & 2) != 0 )
    return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
  NonChildAncestor = (_DWORD *)GetNonChildAncestor(a1);
  v9 = NonChildAncestor;
  v61 = NonChildAncestor;
  if ( !NonChildAncestor )
    return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
  if ( (*(_BYTE *)(NonChildAncestor[5] + 8) & 1) == 0 )
    return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
  SmartObjStackRefBase<tagMENU>::operator=(v49, NonChildAncestor[23]);
  if ( SmartObjStackRef<tagMENU>::operator==(v49, v11) )
    return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
  if ( MNIsFlatMenu() )
  {
    v12 = (*(_DWORD *)(*(_DWORD *)(*v49[0] + 20) + 20) & 1) == 0;
    v57 = v12;
  }
  else
  {
    v12 = 0;
    v57 = 0;
  }
  v13 = *(_DWORD *)(*v49[0] + 20);
  if ( v53 )
  {
    if ( (*(_BYTE *)(v13 + 20) & 4) != 0 )
      return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
    v52 = *(_DWORD *)(_gpsi + 4320);
    *(_DWORD *)(*(_DWORD *)(*v49[0] + 20) + 20) |= 4u;
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(v13 + 20) & 4) == 0 )
    return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
  if ( *(_DWORD *)(*(_DWORD *)(*v49[0] + 20) + 12) )
  {
    v14 = *(_DWORD *)(*(_DWORD *)(*v49[0] + 20) + 12);
  }
  else
  {
    if ( !v12 )
    {
      v52 = *(_DWORD *)(_gpsi + 4308);
      goto LABEL_24;
    }
    v14 = *(_DWORD *)(_gpsi + 4412);
  }
  v52 = v14;
LABEL_24:
  *(_DWORD *)(*(_DWORD *)(*v49[0] + 20) + 20) &= ~4u;
LABEL_25:
  v15 = *(int **)(*v49[0] + 56);
  DCEx = (HDC)_GetDCEx(v9, 0, 65539);
  v17 = v50;
  v18 = DCEx;
  v51 = DCEx;
  if ( !v50 )
    v17 = *v49[0];
  ThreadLockMenuNoModify(v17, &v65);
  v60 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(*v49[0] + 20) + 24) )
  {
    do
    {
      v19 = v50;
      if ( !v50 )
        v19 = *v49[0];
      if ( MNGetpItemIndex(v19, (int)v15) == -1 )
        break;
      v20 = v50;
      if ( !v50 )
        v20 = *v49[0];
      v21 = MNIsOwnerDrawItem(v20, v15);
      v58 = v15[18];
      v59 = v15[19];
      v54 = v15[3];
      if ( v54 || v21 )
      {
        if ( v21 )
        {
          DPIMETRICS = (int *)GetDPIMETRICS(v61);
          GreSelectFont(v18, *DPIMETRICS);
          GreSetViewportOrg(v18, 0, 0, v23);
        }
        else
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            ProcessDpiMetrics = (int *)GetProcessDpiMetrics();
          else
            ProcessDpiMetrics = (int *)Get96DpiMetrics();
          GreSelectFont(v18, *ProcessDpiMetrics);
          GreSetViewportOrg(v18, *(_DWORD *)(*v15 + 36), *(_DWORD *)(*v15 + 40), v25);
        }
        if ( v53 && (*(_DWORD *)(*v15 + 4) & 0x100) != 0 )
          GreSelectBrush(v18, *(_DWORD *)(_gpsi + 4396));
        else
          GreSelectBrush(v18, v52);
        if ( v21 )
        {
          xxxSendMenuDrawItemMessage(v18, v49, v15, 0, 0, 0);
        }
        else
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            v26 = GetProcessDpiMetrics();
          else
            v26 = Get96DpiMetrics();
          v27 = (_DWORD *)*v15;
          v28 = v26;
          v29 = *(struct XDCOBJ **)(v26 + 16);
          v30 = *(_DWORD *)(*v15 + 48) - *(_DWORD *)(v26 + 8) - (_DWORD)v29;
          v55 = v29;
          v31 = v30 - 1;
          if ( v31 )
            v55 = (struct XDCOBJ *)((char *)v29 + (v31 >> 1));
          v32 = (*v27 & 0x2000) == 0;
          v33 = *(_DWORD *)(v28 + 4);
          v56 = v33;
          if ( !v32 )
          {
            xxxPSMGetTextExtent(v27[7], v63);
            v34 = v50;
            if ( !v50 )
              v34 = *v49[0];
            if ( MNGetpItemIndex(v34, (int)v15) == -1 || v58 != v15[18] || v59 != v15[19] )
              break;
            v35 = *(_DWORD *)(*v15 + 44);
            DpiForSystem = GetDpiForSystem();
            OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63, DpiForSystem);
            v38 = v35 - *((__int16 *)OemBitmapInfoForDpi + 2) - v63[0] - 2 + v33;
            v18 = v51;
            v56 = v38;
          }
          if ( CALL_LPK(v62) )
          {
            if ( v53 )
            {
              v39 = *(_DWORD *)(_gpsi + 4196);
            }
            else if ( v57 )
            {
              v39 = *(_DWORD *)(_gpsi + 4288);
            }
            else
            {
              v39 = *(_DWORD *)(_gpsi + 4184);
            }
            v40 = GreSetTextColor(v18, v39);
            xxxPSMTextOut(v18, v56, v55, v54, *(_DWORD *)(*v15 + 28), (int)&loc_1FFFFC + 4);
            v41 = v50;
            if ( !v50 )
              v41 = *v49[0];
            if ( MNGetpItemIndex(v41, (int)v15) == -1 || v58 != v15[18] || v59 != v15[19] )
              break;
            GreSetTextColor(v18, v40);
          }
          else
          {
            v42 = *v15;
            memset(v64, 0, sizeof(v64));
            v43 = *(_DWORD *)(v42 + 28);
            if ( v43 < 0xFF )
            {
              v44 = v68;
            }
            else
            {
              v44 = (_BYTE *)Win32AllocPool(2 * v43 + 2, 1953657685);
              if ( !v44 )
                break;
              PushW32ThreadLock((int)v44, v64, (int)Win32FreePool);
              v42 = *v15;
            }
            PrefixCount = GetPrefixCount(v44, *(_DWORD *)(v42 + 28));
            xxxDrawItemUnderline(v51, v56, (int)v55, (int)v44, PrefixCount);
            if ( v44 != v68 )
              PopAndFreeAlwaysW32ThreadLock((int)v64);
            v18 = v51;
          }
        }
      }
      v46 = v50;
      v47 = ++v60;
      if ( !v50 )
        v46 = *v49[0];
      v15 = (int *)MNGetpItemFromIndex(v46, v47);
    }
    while ( v48 < *(_DWORD *)(*(_DWORD *)(*v49[0] + 20) + 24) );
    v18 = v51;
  }
  *(_DWORD *)(*(_DWORD *)(v66 + 20) + 20) &= ~0x200u;
  ThreadUnlock1();
  _ReleaseDC(v18);
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v49);
}
