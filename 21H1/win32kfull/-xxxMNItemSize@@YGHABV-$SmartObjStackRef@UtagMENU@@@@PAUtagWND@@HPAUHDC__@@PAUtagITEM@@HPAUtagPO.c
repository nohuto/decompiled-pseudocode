/*
 * XREFs of ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256
 * Callers:
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     _MNInitUAHMenuItem@12 @ 0xB657C (_MNInitUAHMenuItem@12.c)
 *     _MNInitUAHMenu@12 @ 0xB75C2 (_MNInitUAHMenu@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     __EnsureDpiDepSysMetCacheForPlateau@4 @ 0x15534E (__EnsureDpiDepSysMetCacheForPlateau@4.c)
 *     ?xxxMNGetBitmapSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z @ 0x1AB44F (-xxxMNGetBitmapSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z.c)
 *     _MNUpdateUAHMaxPopupWidths@8 @ 0x1AB879 (_MNUpdateUAHMaxPopupWidths@8.c)
 *     _FindCharPosition@8 @ 0x1B7A59 (_FindCharPosition@8.c)
 *     _xxxPSMGetTextExtent@16 @ 0x1B98EB (_xxxPSMGetTextExtent@16.c)
 *     _GreGetTextCharacterExtra@4 @ 0x22267D (_GreGetTextCharacterExtra@4.c)
 *     _GreSetTextCharacterExtra@8 @ 0x2226B7 (_GreSetTextCharacterExtra@8.c)
 */

BOOL __fastcall xxxMNItemSize(int **a1, void *a2, void *a3, HDC a4, _DWORD *a5, int a6, unsigned int *a7)
{
  _DWORD *v7; // esi
  int v9; // edi
  void *v10; // edx
  int *v11; // eax
  BOOL v12; // edx
  int *v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // et2
  int *v17; // eax
  int v18; // edi
  int *v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // et2
  unsigned int *v23; // eax
  int DPIServerInfoForDpi; // eax
  _DWORD *v26; // ecx
  int *v27; // ecx
  int *v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  int *v32; // ecx
  unsigned int v33; // eax
  int v34; // eax
  int v35; // ecx
  int *v36; // ecx
  int v37; // eax
  int *v38; // ecx
  int DpiDependentMetric; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // eax
  int CharPosition; // eax
  int v44; // ecx
  int DpiForSystem; // eax
  unsigned int v46; // [esp+10h] [ebp-B0h]
  int v47; // [esp+14h] [ebp-ACh]
  _DWORD *v49; // [esp+20h] [ebp-A0h]
  int v50; // [esp+24h] [ebp-9Ch]
  int v51; // [esp+24h] [ebp-9Ch]
  BOOL v52; // [esp+30h] [ebp-90h]
  _DWORD v53[2]; // [esp+34h] [ebp-8Ch] BYREF
  unsigned int *v54; // [esp+3Ch] [ebp-84h]
  _DWORD v55[6]; // [esp+40h] [ebp-80h] BYREF
  _DWORD v56[25]; // [esp+58h] [ebp-68h] BYREF

  v7 = a5;
  v54 = a7;
  v46 = 0;
  memset(v55, 0, sizeof(v55));
  v9 = 0;
  v10 = a3;
  v47 = 0;
  if ( !a6 )
  {
    v50 = 120 * GetDpiCacheSlot((int)a3);
    v9 = *(_DWORD *)(v50 + _gpsi + 1988);
    v47 = v9;
    if ( v9 == -1 )
    {
      _EnsureDpiDepSysMetCacheForPlateau((INT)a3);
      v9 = *(_DWORD *)(v50 + _gpsi + 1988) != -1 ? *(_DWORD *)(v50 + _gpsi + 1988) : 0;
      v47 = v9;
    }
    v10 = a3;
  }
  v51 = 0;
  if ( (*(_DWORD *)(*a5 + 4) & 0x1000) != 0 )
  {
    v31 = *(_DWORD *)(GetDPIMETRICSForDpi(v10) + 40);
    if ( v31 )
    {
      v51 = GreSelectFont(a4, v31);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3);
      GetDPIMETRICSForDpi(a3);
      GreSetTextCharacterExtra(a4);
      v7 = a5;
    }
  }
  v11 = a1[2];
  if ( !v11 )
    v11 = (int *)**a1;
  v49 = (_DWORD *)*v7;
  v12 = (*(_DWORD *)*v7 & 0x100) != 0 || gihmodUserApiHook >= 0 && (*(_DWORD *)(v11[5] + 20) & 0x800) != 0;
  v52 = v12;
  if ( !*(_DWORD *)(*v7 + 64) )
    goto LABEL_13;
  v32 = a1[2];
  if ( !v32 )
    v32 = (int *)**a1;
  if ( MNIsUAHMenu(v32) )
  {
    v49 = (_DWORD *)*v7;
    v33 = *(_DWORD *)(*v7 + 64);
    if ( v33 )
    {
      if ( v33 <= 3 || v33 - 5 <= 6 )
      {
LABEL_13:
        if ( !v12 )
        {
          v18 = v47;
          goto LABEL_96;
        }
        memset(v56, 0, 0x5Cu);
        if ( v49[17] == -1 )
        {
          v56[0] = 1;
          v56[1] = 0;
          v56[2] = v49[2];
          v56[3] = 0;
          DPIServerInfoForDpi = GetDPIServerInfoForDpi(a3);
          v26 = (_DWORD *)*v7;
          v56[4] = *(_DWORD *)(DPIServerInfoForDpi + 28);
          v56[5] = v26[8];
          if ( (*v26 & 0x100) == 0 && (v26[16] != -1 || !a2) )
            goto LABEL_38;
          xxxSendMessage(a2, 0, (int)v56);
          v35 = (int)a1[2];
          if ( !v35 )
            v35 = **a1;
          if ( MNGetpItemIndex(v35, (int)v7) != -1 )
          {
LABEL_38:
            v27 = a1[2];
            if ( !v27 )
              v27 = (int *)**a1;
            if ( !MNIsUAHMenu(v27) || !a2 )
              goto LABEL_49;
            MNInitUAHMenu(&v56[6]);
            v28 = a1[2];
            if ( !v28 )
              v28 = (int *)**a1;
            MNInitUAHMenuItem(v28, (int)v7, &v56[9]);
            xxxSendMessage(a2, 0, (int)v56);
            v29 = (int)a1[2];
            if ( !v29 )
              v29 = **a1;
            if ( MNGetpItemIndex(v29, (int)v7) != -1 )
            {
              qmemcpy(v7 + 9, &v56[10], 0x20u);
              if ( (*(_BYTE *)(*(_DWORD *)(**a1 + 20) + 20) & 1) != 0 )
              {
                v36 = a1[2];
                if ( !v36 )
                  v36 = (int *)**a1;
                v7 = a5;
                v37 = MNUpdateUAHMaxPopupWidths(v36, a5);
                v30 = v37 + v56[3];
                goto LABEL_50;
              }
              v7 = a5;
LABEL_49:
              v30 = v56[3];
LABEL_50:
              *(_DWORD *)(*v7 + 68) = v30;
              *(_DWORD *)(*v7 + 72) = v56[4];
            }
          }
        }
        v13 = a1[2];
        if ( !v13 )
          v13 = (int *)**a1;
        v14 = (unsigned int)v7 - v13[14];
        if ( (v14 & 0x80000000) != 0
          || v14 >= 80 * *(_DWORD *)(v13[5] + 24)
          || (v16 = v14 % 0x50, v15 = v14 / 0x50, v16) )
        {
          v15 = -1;
        }
        if ( v15 != -1 )
        {
          v46 = *(_DWORD *)(*v7 + 68);
          if ( a6 )
          {
            v18 = *(_DWORD *)(*v7 + 72);
            v46 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 4);
            goto LABEL_27;
          }
          v17 = a1[2];
          if ( !v17 )
            v17 = (int *)**a1;
          if ( gihmodUserApiHook >= 0 && (*(_DWORD *)(v17[5] + 20) & 0x800) != 0 )
          {
            v18 = *(_DWORD *)(*v7 + 72);
            goto LABEL_27;
          }
          goto LABEL_93;
        }
        goto LABEL_84;
      }
    }
  }
  v34 = *v7;
  if ( *(_DWORD *)(*v7 + 64) != -1 )
  {
    if ( *(_DWORD *)(v34 + 68) != -1 )
      goto LABEL_87;
    if ( (*(_DWORD *)(v34 + 4) & 0x20000000) != 0 )
    {
      *(_DWORD *)(*v7 + 68) = GetDpiDependentMetric(25, (INT)a3);
      *(_DWORD *)(*v7 + 72) = GetDpiDependentMetric(26, (INT)a3);
      if ( *(_DWORD *)(*v7 + 64) == 1 )
        *(_DWORD *)(*v7 + 68) += 2;
      goto LABEL_87;
    }
    v38 = a1[2];
    if ( !v38 )
      v38 = (int *)**a1;
    if ( !MNIsUAHMenu(v38) )
    {
      if ( GreExtGetObjectW(*(struct HLFONT__ **)(*v7 + 64), 24, v55) )
      {
        *(_DWORD *)(*v7 + 68) = v55[1];
        DpiDependentMetric = v55[2];
      }
      else
      {
        *(_DWORD *)(*v7 + 68) = GetDpiDependentMetric(25, (INT)a3);
        DpiDependentMetric = GetDpiDependentMetric(26, (INT)a3);
      }
      *(_DWORD *)(*v7 + 72) = DpiDependentMetric;
      goto LABEL_87;
    }
  }
  xxxMNGetBitmapSize(a2, a3, a4);
  v40 = (int)a1[2];
  if ( !v40 )
    v40 = **a1;
  if ( MNGetpItemIndex(v40, (int)v7) == -1 )
  {
LABEL_84:
    v18 = v47;
    goto LABEL_35;
  }
LABEL_87:
  v46 = *(_DWORD *)(*v7 + 68);
  if ( *(_DWORD *)(**a1 + 44) <= v46 )
    v41 = *(_DWORD *)(*v7 + 68);
  else
    v41 = *(_DWORD *)(**a1 + 44);
  *(_DWORD *)(**a1 + 44) = v41;
  if ( !a6 && *(_DWORD *)(*v7 + 72) <= v9 )
  {
    v47 = v9;
LABEL_93:
    v18 = v47;
    goto LABEL_27;
  }
  v18 = *(_DWORD *)(*v7 + 72);
LABEL_27:
  if ( !v52 )
  {
LABEL_96:
    v42 = v7[3];
    if ( v42 )
    {
      v53[0] = 0;
      v53[1] = 0;
      if ( a6 )
      {
        if ( v18 <= *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 24) )
          v18 = *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 24);
        v42 = v7[3];
      }
      CharPosition = FindCharPosition(v42, 9);
      xxxPSMGetTextExtent(CharPosition, v53);
      if ( v46 )
        v44 = v53[0] + v46 + 2;
      else
        v44 = v53[0];
      v46 = v44;
    }
    else
    {
      v44 = v46;
    }
    if ( a6 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) & 0x4000000) != 0 || *(int *)(*(_DWORD *)(**a1 + 20) + 20) >= 0 )
      {
        DpiForSystem = GetDpiForSystem();
        v44 = *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2) + v46;
      }
      v18 += 2;
      v46 = v44 + 6;
    }
  }
  v19 = a1[2];
  if ( !v19 )
    v19 = (int *)**a1;
  v20 = (unsigned int)v7 - v19[14];
  if ( (v20 & 0x80000000) != 0 || v20 >= 80 * *(_DWORD *)(v19[5] + 24) || (v22 = v20 % 0x50, v21 = v20 / 0x50, v22) )
    v21 = -1;
  if ( v21 != -1 && (*(_DWORD *)(*v7 + 4) & 0x1000) != 0 )
  {
    if ( v51 )
      GreSelectFont(a4, v51);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_35:
  v23 = v54;
  v54[1] = v18;
  *v23 = v46;
  return v52;
}
