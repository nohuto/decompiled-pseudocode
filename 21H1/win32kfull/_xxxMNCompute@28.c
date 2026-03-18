/*
 * XREFs of _xxxMNCompute@28 @ 0xB6B36
 * Callers:
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     _GetDPIMETRICSForDpiUnsafe@4 @ 0x91A30 (_GetDPIMETRICSForDpiUnsafe@4.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxSendUAHInitMenuMessage@12 @ 0xB7560 (_xxxSendUAHInitMenuMessage@12.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 */

int __fastcall xxxMNCompute(int **a1, int a2, _DWORD *a3, unsigned int a4, int a5, int a6, unsigned int *a7)
{
  unsigned int v7; // ebx
  unsigned int v10; // edx
  int v11; // ecx
  int WindowDpiLastNotify; // eax
  int v13; // eax
  int v14; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v17; // eax
  PKTHREAD v18; // eax
  int v19; // eax
  HDC DCEx; // esi
  int *DPIMETRICSForDpi; // eax
  int *v22; // eax
  int *v23; // esi
  int v24; // esi
  int *v25; // eax
  int *v26; // edx
  int v27; // ecx
  BOOL v28; // eax
  BOOL v29; // eax
  int *v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // et2
  int v34; // ecx
  int *v35; // eax
  int *v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // edx
  int *v46; // eax
  unsigned int v47; // edx
  _WORD *v48; // eax
  int *v49; // ecx
  int *v50; // eax
  char *DPIMETRICSForDpiUnsafe; // ecx
  char *SessionDpiMetrics; // eax
  int v53; // edx
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // ecx
  int v58; // eax
  int *v59; // ecx
  unsigned int v60; // edx
  int v61; // eax
  int v62; // esi
  int DpiForSystem; // eax
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  int v67; // edx
  HDC v68; // ebx
  int v69; // [esp-8h] [ebp-64h]
  int v70; // [esp+Ch] [ebp-50h] BYREF
  int v71; // [esp+10h] [ebp-4Ch]
  int v72; // [esp+14h] [ebp-48h]
  int v73; // [esp+18h] [ebp-44h]
  int v74; // [esp+1Ch] [ebp-40h]
  int v75; // [esp+20h] [ebp-3Ch]
  int v76; // [esp+24h] [ebp-38h]
  unsigned int v77; // [esp+28h] [ebp-34h]
  int v78; // [esp+2Ch] [ebp-30h]
  int v79; // [esp+30h] [ebp-2Ch]
  int v80; // [esp+34h] [ebp-28h]
  unsigned int v81; // [esp+38h] [ebp-24h]
  HDC v82; // [esp+3Ch] [ebp-20h]
  unsigned int v83; // [esp+40h] [ebp-1Ch]
  int v84; // [esp+44h] [ebp-18h]
  int v85; // [esp+48h] [ebp-14h]
  int v86; // [esp+4Ch] [ebp-10h]
  unsigned int v87; // [esp+50h] [ebp-Ch]
  int v88; // [esp+54h] [ebp-8h]
  INT v89; // [esp+64h] [ebp+8h]
  int v90; // [esp+70h] [ebp+14h]

  v7 = 0;
  v84 = a2;
  v83 = 0;
  v70 = 0;
  v71 = 0;
  v81 = 0;
  v73 = _gptiCurrent;
  if ( a3 )
  {
    v11 = a3[5];
    v10 = *(_DWORD *)(v11 + 184);
    if ( (v10 & 0xF) == 3 )
    {
      v10 = (v10 >> 8) & 0x1FF;
      v89 = v10;
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(v11 + 144) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
    }
    else
    {
      if ( (v10 & 0xF) == 0 )
      {
        v13 = *(_DWORD *)(a3[2] + 248);
        if ( v13 )
        {
          if ( (*(_BYTE *)(**(_DWORD **)(v13 + 4) + 32) & 1) != 0 )
            goto LABEL_11;
        }
      }
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(a3[2] + 232) + 160);
    }
    v89 = WindowDpiLastNotify;
    goto LABEL_14;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
LABEL_11:
    v89 = 96;
    goto LABEL_14;
  }
  v89 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
LABEL_14:
  v14 = v84;
  if ( v84 != *(_DWORD *)(**a1 + 52) )
  {
    v69 = **a1 + 52;
    HMAssignmentLock(v84, v10);
    v14 = v84;
  }
  if ( a7 )
    v81 = *a7;
  if ( !*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) )
    return 0;
  v85 = *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) & 1;
  if ( v85 )
  {
    v81 = 0;
  }
  else if ( v14 )
  {
    *(_DWORD *)(**a1 + 36) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    || a3
    && (CurrentThread = KeGetCurrentThread(), W32GetThreadWin32Thread(CurrentThread))
    && (v17 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v17) + 248))
    && (v18 = KeGetCurrentThread(),
        (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v18) + 248) + 4) + 32) & 1) != 0)
    && (v19 = *(_DWORD *)(a3[5] + 184), (v19 & 0xF) == 0)
    && (v19 & 0x40000000) != 0 )
  {
    DCEx = (HDC)_GetDCEx(a3, 0, 65539);
    v82 = DCEx;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(0, 0, 3);
    v82 = DCEx;
  }
  DPIMETRICSForDpi = (int *)GetDPIMETRICSForDpi((void *)v89);
  v72 = GreSelectFont(DCEx, *DPIMETRICSForDpi);
  v77 = 0;
  v86 = 0;
  v78 = 0;
  if ( gihmodUserApiHook >= 0 && v84 )
    xxxSendUAHInitMenuMessage(DCEx);
  v87 = a4;
  v88 = a5;
  v22 = *a1;
  v76 = 0;
  v74 = 0;
  v90 = 0;
  *(_DWORD *)(*v22 + 44) = 0;
  v23 = a1[2];
  if ( !v23 )
    v23 = (int *)**a1;
  if ( *(_DWORD *)(v23[5] + 24) )
    v24 = v23[14];
  else
    v24 = 0;
  if ( !*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) )
    goto LABEL_150;
  while ( v24 )
  {
    v25 = a1[2];
    if ( !v25 )
      v25 = (int *)**a1;
    v26 = *(int **)v24;
    v27 = **(_DWORD **)v24;
    v28 = (v27 & 0x100) != 0 || gihmodUserApiHook >= 0 && (*(_DWORD *)(v25[5] + 20) & 0x800) != 0;
    if ( (v27 & 0x800) != 0 && (!v28 || *(_WORD *)(v73 + 340) < 0x400u) )
    {
      v26[11] = 0;
      *(_DWORD *)(*(_DWORD *)v24 + 48) = GetDpiDependentMetric(26, v89) / 2;
LABEL_75:
      v34 = v85;
      goto LABEL_76;
    }
    v29 = v26[16] && *(_DWORD *)(v24 + 12);
    v76 |= v29;
    if ( xxxMNItemSize(v89, v82, v24, v85, &v70) )
      v74 = 1;
    v30 = a1[2];
    if ( !v30 )
      v30 = (int *)**a1;
    v31 = v24 - v30[14];
    if ( (v31 & 0x80000000) != 0 || v31 >= 80 * *(_DWORD *)(v30[5] + 24) || (v33 = v31 % 0x50, v32 = v31 / 0x50, v33) )
      v32 = -1;
    if ( v32 == -1 )
      break;
    *(_DWORD *)(*(_DWORD *)v24 + 44) = v70;
    *(_DWORD *)(*(_DWORD *)v24 + 48) = v71;
    v34 = v85;
    if ( !v85 && (!*(_DWORD *)(*(_DWORD *)v24 + 64) || *(_DWORD *)(v24 + 12)) )
    {
      v35 = a1[2];
      if ( !v35 )
        v35 = (int *)**a1;
      if ( gihmodUserApiHook < 0 || (*(_DWORD *)(v35[5] + 20) & 0x800) == 0 )
      {
        *(_DWORD *)(*(_DWORD *)v24 + 44) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi((void *)v89) + 4);
        goto LABEL_75;
      }
    }
LABEL_76:
    if ( v81 && *(_DWORD *)(*(_DWORD *)v24 + 48) < v81 )
      *(_DWORD *)(*(_DWORD *)v24 + 48) = v81;
    if ( !v90 )
      v83 = *(_DWORD *)(*(_DWORD *)v24 + 48);
    if ( !v34 )
    {
      v48 = *(_WORD **)(v24 + 12);
      if ( v48 && *v48 == 8 )
      {
        v49 = a1[2];
        if ( !v49 )
          v49 = (int *)**a1;
        if ( !MNIsUAHMenu(v49) )
          *(_DWORD *)(*(_DWORD *)v24 + 44) -= *(_DWORD *)(GetDPIMETRICSForDpi((void *)v89) + 4);
      }
      v50 = *(int **)v24;
      if ( (**(_BYTE **)v24 & 0x60) != 0 )
      {
LABEL_120:
        v54 = v83 + v87;
        v55 = v50[12];
        v53 = a5;
        v87 += v83;
        v83 = v55;
      }
      else
      {
        v75 = v50[11];
        DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe((void *)v89, v69);
        if ( !DPIMETRICSForDpiUnsafe )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
            SessionDpiMetrics = (char *)GetSessionDpiMetrics();
          else
            SessionDpiMetrics = (char *)Get96DpiMetrics();
          DPIMETRICSForDpiUnsafe = SessionDpiMetrics;
        }
        v53 = v88;
        if ( v88 + v75 + *((_DWORD *)DPIMETRICSForDpiUnsafe + 1) > (unsigned int)(a5 + *(_DWORD *)(**a1 + 36)) && v90 )
        {
          v50 = *(int **)v24;
          goto LABEL_120;
        }
        v54 = v87;
      }
      *(_DWORD *)(*(_DWORD *)v24 + 40) = v54;
      *(_DWORD *)(*(_DWORD *)v24 + 36) = v53;
      v46 = *(int **)v24;
      v88 = *(_DWORD *)(*(_DWORD *)v24 + 44) + v53;
      v47 = v87;
      goto LABEL_123;
    }
    v75 = **(_DWORD **)v24 & 0x60;
    if ( v75 || *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) == v90 + 1 )
    {
      v36 = *a1;
      v37 = v86;
      v79 = v90 + 1;
      if ( *(_DWORD *)(*(_DWORD *)(*v36 + 20) + 24) == v90 + 1 && *(_DWORD *)(*(_DWORD *)v24 + 44) > v86 )
        v37 = *(_DWORD *)(*(_DWORD *)v24 + 44);
      v38 = xxxMNRecalcTabStrings(v78, v90 + (v75 == 0), v37, v88);
      v39 = (int)a1[2];
      v80 = v38;
      if ( !v39 )
        v39 = **a1;
      if ( MNGetpItemIndex(v39, v24) == -1 )
        break;
      if ( v75 )
      {
        if ( v74 && v84 && (*(_BYTE *)(*(_DWORD *)(v84 + 20) + 13) & 2) == 0 )
          v40 = 1;
        else
          v40 = 4;
        v41 = v80;
        v88 = v80 + v40;
        v42 = v79;
        v86 = *(_DWORD *)(*(_DWORD *)v24 + 44);
        v87 = a4;
        v78 = v90;
        if ( *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) == v79 )
        {
          v43 = xxxMNRecalcTabStrings(v90, v79, v86, v88);
          v44 = (int)a1[2];
          v80 = v43;
          if ( !v44 )
            v44 = **a1;
          if ( MNGetpItemIndex(v44, v24) == -1 )
            break;
          goto LABEL_100;
        }
      }
      else
      {
LABEL_100:
        v42 = v79;
        v41 = v80;
      }
      if ( *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) == v42 )
        *(_DWORD *)(**a1 + 36) = v41;
    }
    v45 = v87;
    *(_DWORD *)(*(_DWORD *)v24 + 36) = v88;
    *(_DWORD *)(*(_DWORD *)v24 + 40) = v45;
    v46 = *(int **)v24;
    v47 = *(_DWORD *)(*(_DWORD *)v24 + 48) + v45;
    v87 = v47;
    if ( v77 < v47 )
      v77 = v47;
LABEL_123:
    if ( v86 < v46[11] )
      v86 = v46[11];
    v56 = v46[12];
    v57 = v83;
    if ( v83 == v56 )
    {
      v58 = v85;
    }
    else
    {
      if ( v83 < v56 )
      {
        v57 = v56;
        v83 = v56;
      }
      v58 = v85;
      if ( v85 )
        goto LABEL_133;
      v81 = v57;
    }
    if ( !v58 )
      v77 = v57 + v47;
LABEL_133:
    v59 = a1[2];
    v60 = ++v90;
    if ( !v59 )
      v59 = (int *)**a1;
    if ( v60 == -1 || v60 >= *(_DWORD *)(v59[5] + 24) )
      v24 = 0;
    else
      v24 = v59[14] + 80 * v60;
    if ( v60 >= *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) )
      break;
  }
  if ( !v76 || v78 )
  {
LABEL_150:
    *(_DWORD *)(**a1 + 44) = 0;
    goto LABEL_151;
  }
  v61 = **a1;
  if ( *(int *)(*(_DWORD *)(v61 + 20) + 20) < 0 )
    goto LABEL_148;
  v62 = **a1;
  if ( (*(_DWORD *)(*(_DWORD *)(v61 + 20) + 20) & 0x4000000) != 0 )
  {
    DpiForSystem = GetDpiForSystem();
    if ( *(_DWORD *)(v62 + 44) <= (unsigned int)*((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2) )
    {
      v65 = GetDpiForSystem();
      v64 = *((__int16 *)GetOemBitmapInfoForDpi(63, v65) + 2);
    }
    else
    {
      v64 = *(_DWORD *)(**a1 + 44);
    }
    *(_DWORD *)(**a1 + 44) = v64;
    v61 = **a1;
LABEL_148:
    *(_DWORD *)(v61 + 44) += 2;
  }
  else
  {
    v66 = GetDpiForSystem();
    *(_DWORD *)(v62 + 44) += *((__int16 *)GetOemBitmapInfoForDpi(63, v66) + 2) + 2;
  }
LABEL_151:
  if ( *(_DWORD *)(**a1 + 44) )
    *(_DWORD *)(**a1 + 44) += 2;
  if ( v78 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) )
    {
      if ( (***(_DWORD ***)(**a1 + 56) & 0x4000) != 0 )
      {
        v67 = *(_DWORD *)(**a1 + 56);
        if ( *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) )
        {
          do
          {
            ++v7;
            *(_DWORD *)(*(_DWORD *)v67 + 36) = *(_DWORD *)(**a1 + 36)
                                             - *(_DWORD *)(*(_DWORD *)v67 + 44)
                                             - *(_DWORD *)(*(_DWORD *)v67 + 36);
            v67 += 80;
          }
          while ( v7 < *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24) );
        }
      }
    }
  }
  v68 = v82;
  GreSelectFont(v82, v72);
  _ReleaseDC(v68);
  *(_DWORD *)(**a1 + 40) = v77 - a4;
  if ( a7 )
    *a7 = v81;
  return *(_DWORD *)(**a1 + 40);
}
