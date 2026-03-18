/*
 * XREFs of _xxxDrawMenuItem@24 @ 0xB61DA
 * Callers:
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ?MNDrawInsertionBar@@YGXPAUHDC__@@PAUtagITEM@@@Z @ 0xB632E (-MNDrawInsertionBar@@YGXPAUHDC__@@PAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagWND@@@Z @ 0xB6372 (-xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUta.c)
 *     ?MNDrawHilite@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0xB66E6 (-MNDrawHilite@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 *     ?DrawOutline@@YGXPAUHDC__@@HHHHHPAUHBRUSH__@@@Z @ 0x1A8E86 (-DrawOutline@@YGXPAUHDC__@@HHHHHPAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YGXPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1A8F1E (-MNDrawMenu3DHotTracking@@YGXPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YGHPAUtagITEM@@@Z @ 0x1A90AB (-MNIsCachedBmpOnly@@YGHPAUtagITEM@@@Z.c)
 *     _BltColor@40 @ 0x1ACFB1 (_BltColor@40.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 *     _GreGetTextCharacterExtra@4 @ 0x22267D (_GreGetTextCharacterExtra@4.c)
 *     _GreSetTextCharacterExtra@8 @ 0x2226B7 (_GreSetTextCharacterExtra@8.c)
 */

unsigned int __fastcall xxxDrawMenuItem(HDC a1, void *a2, int **a3, unsigned int *a4, char a5, int a6)
{
  int *v8; // ecx
  unsigned int *v9; // edi
  BOOL v10; // eax
  int v11; // edx
  int v12; // eax
  BOOL v13; // edx
  int v14; // edx
  int v15; // ecx
  unsigned int result; // eax
  int v17; // eax
  int *v18; // ecx
  int v19; // esi
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // ebx
  _DWORD *v22; // esi
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  HDC v28; // ecx
  void *v29; // ecx
  int v30; // eax
  int v31; // ecx
  int *v32; // eax
  HDC v33; // eax
  int v34; // eax
  int *v35; // ecx
  _DWORD *v36; // eax
  int v37; // ecx
  _DWORD *v38; // [esp-4h] [ebp-4Ch]
  struct tagITEM *v39; // [esp+0h] [ebp-48h]
  struct tagITEM *v40; // [esp+4h] [ebp-44h]
  _DWORD v41[5]; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v42[2]; // [esp+20h] [ebp-28h] BYREF
  int v43; // [esp+28h] [ebp-20h]
  int v44; // [esp+2Ch] [ebp-1Ch]
  int v45; // [esp+30h] [ebp-18h]
  unsigned int v46; // [esp+34h] [ebp-14h]
  BOOL v47; // [esp+38h] [ebp-10h]
  HDC v48; // [esp+3Ch] [ebp-Ch]
  void *v49; // [esp+40h] [ebp-8h]
  int v50; // [esp+44h] [ebp-4h]
  int v51; // [esp+50h] [ebp+8h]
  __int16 v52; // [esp+50h] [ebp+8h]
  int v53; // [esp+54h] [ebp+Ch]
  int v54; // [esp+58h] [ebp+10h]
  int v55; // [esp+5Ch] [ebp+14h]
  int v56; // [esp+5Ch] [ebp+14h]

  v49 = a2;
  v8 = a3[2];
  v48 = a1;
  v45 = 0;
  v43 = 0;
  v50 = 0;
  v46 = (unsigned int)_gpdwCPUserPreferencesMask & 0x80020000;
  if ( !v8 )
    v8 = (int *)**a3;
  v9 = a4;
  if ( (*(_DWORD *)*a4 & 0x100) != 0 || (v10 = MNIsUAHMenu(v8), v44 = v11, v10) )
    v44 = 1;
  v12 = MNDrawHilite(a3, a4);
  if ( v46 == -2147352576 )
  {
    v13 = v12 || (*(_DWORD *)(*a4 + 4) & 0x10000100) != 0;
    v47 = (*(_DWORD *)(*(_DWORD *)(**a3 + 20) + 20) & 1) == 0;
  }
  else
  {
    v47 = 0;
    v13 = v12;
  }
  v51 = v13;
  if ( (*(_DWORD *)(*a4 + 4) & 0x1000) != 0 )
  {
    v17 = *(_DWORD *)(GetDPIMETRICSForDpi(v49) + 40);
    if ( v17 )
    {
      v43 = GreSelectFont(a1, v17);
    }
    else
    {
      v50 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(v49);
      GetDPIMETRICSForDpi(v49);
      a1 = v48;
      GreSetTextCharacterExtra(v48);
      v9 = a4;
    }
    v13 = v51;
  }
  if ( v44 )
  {
    GreSetTextColor(a1, *(_DWORD *)(_gpsi + 4196));
    if ( v47 )
      v14 = *(_DWORD *)(_gpsi + 4288);
    else
      v14 = *(_DWORD *)(_gpsi + 4184);
    GreSetBkColor(a1, v14);
    xxxSendMenuDrawItemMessage(a3, v9, 0, 0, a6);
    v15 = (int)a3[2];
    if ( !v15 )
      v15 = **a3;
    result = MNGetpItemIndex(v15, (int)v9);
    if ( result != -1 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(**a3 + 20) + 20) & 1) != 0 && v9[2] )
      {
        v18 = a3[2];
        if ( !v18 )
          v18 = (int *)**a3;
        if ( !MNIsUAHMenu(v18) )
        {
          v19 = (*(_DWORD *)*v9 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem();
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v19 + 62, DpiForSystem);
          if ( *(_DWORD *)(*v9 + 48) >= OemBitmapInfoForDpi[3] && (v55 = PrepareHDCBITSBitmap(0)) != 0 )
          {
            v22 = (_DWORD *)*v9;
            v54 = OemBitmapInfoForDpi[3];
            v23 = *(_DWORD *)(*v9 + 48) - v54 - 2;
            v24 = ((int)v23 - HIDWORD(v23)) >> 1;
            if ( v24 <= 0 )
              v24 = 0;
            v52 = OemBitmapInfoForDpi[2];
            if ( (*v22 & 0x2000) != 0 )
              v25 = v52 + v22[9];
            else
              v25 = v22[9] + v22[11] - v52;
            v26 = v22[10];
            a1 = v48;
            BltColor(v48, v55, v25, v24 + v26, v52, v54, *OemBitmapInfoForDpi, OemBitmapInfoForDpi[1], 1);
          }
          else
          {
            a1 = v48;
          }
        }
      }
LABEL_19:
      MNDrawInsertionBar((HDC)v39, v40);
      if ( v45 )
        GreSetBkMode(a1, v45);
      result = *v9;
      if ( (*(_DWORD *)(*v9 + 4) & 0x1000) != 0 )
      {
        if ( v43 )
        {
          return GreSelectFont(a1, v43);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( v13 )
  {
    if ( v46 == -2147352576 )
    {
      v27 = _gpsi;
      v53 = *(_DWORD *)(_gpsi + 4284);
      v28 = *(HDC *)(_gpsi + 4408);
LABEL_46:
      v48 = v28;
      v29 = *(void **)(v27 + 4224);
      v30 = *(_DWORD *)(v27 + 4348);
LABEL_49:
      v49 = v29;
      v56 = v30;
      goto LABEL_50;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(**a3 + 20) + 20) & 1) != 0 )
    {
      v27 = _gpsi;
      v53 = *(_DWORD *)(_gpsi + 4220);
      v28 = *(HDC *)(_gpsi + 4344);
      goto LABEL_46;
    }
LABEL_48:
    v53 = *(_DWORD *)(_gpsi + 4184);
    v48 = *(HDC *)(_gpsi + 4308);
    v29 = *(void **)(_gpsi + 4196);
    v30 = *(_DWORD *)(_gpsi + 4320);
    goto LABEL_49;
  }
  if ( !v47 )
    goto LABEL_48;
  v56 = *(_DWORD *)(_gpsi + 4320);
  v32 = *a3;
  v49 = *(void **)(_gpsi + 4196);
  if ( *(_DWORD *)(*(_DWORD *)(*v32 + 20) + 12) )
  {
    v53 = *(_DWORD *)(_gpsi + 4288);
    v33 = *(HDC *)(*(_DWORD *)(**a3 + 20) + 12);
  }
  else
  {
    v33 = *(HDC *)(_gpsi + 4412);
    v53 = *(_DWORD *)(_gpsi + 4288);
  }
  v48 = v33;
LABEL_50:
  if ( !MNIsCachedBmpOnly(v39)
    && ((*(_BYTE *)(*v9 + 4) & 1) != 0 || (*(_BYTE *)(*(_DWORD *)(**a3 + 20) + 20) & 0x10) != 0) )
  {
    v31 = v53;
    if ( v51 || v53 != *(_DWORD *)(_gpsi + 4228) || *(_DWORD *)(_gpsi + 1788) )
    {
      if ( *(_DWORD *)(_gpsi + 4236) != v53 )
      {
        v34 = *(_DWORD *)(_gpsi + 4360);
        v49 = *(void **)(_gpsi + 4236);
        v56 = v34;
        goto LABEL_68;
      }
    }
    else if ( *(_DWORD *)(_gpsi + 4232) != v53 || *(_DWORD *)(_gpsi + 4248) != v53 )
    {
      v50 |= (*(_DWORD *)(*(_DWORD *)(**a3 + 20) + 20) & 0x10) != 0 ? 256 : 32;
      goto LABEL_68;
    }
    v50 |= 0x10u;
  }
  else
  {
    v31 = v53;
  }
LABEL_68:
  GreSetBkColor(a1, v31);
  GreSetTextColor(a1, (int)v49);
  if ( (a5 & 1) != 0 && !*(_DWORD *)(*(_DWORD *)(**a3 + 20) + 12) || v51 || v47 )
  {
    v38 = (_DWORD *)*v9;
    v41[0] = *(_DWORD *)(*v9 + 36);
    v41[1] = v38[10];
    v41[2] = v38[11];
    v41[3] = v38[12];
    v41[4] = v48;
    GrePolyPatBlt(a1, 0xF00021u, (struct XDCOBJ *)v41, 1u, (int)v38);
    if ( v51 )
    {
      if ( v46 == -2147352576 )
        DrawOutline(
          *(HDC *)(*v9 + 40),
          *(_DWORD *)(*v9 + 44),
          *(_DWORD *)(*v9 + 48),
          1,
          *(_DWORD *)(_gpsi + 4344),
          (int)v39,
          (HBRUSH)v40);
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)(**a3 + 20) + 12) )
    v45 = GreSetBkMode(a1, 1);
  GreSelectBrush(a1, v56);
  v35 = a3[2];
  v42[1] = v9;
  if ( !v35 )
    v35 = (int *)**a3;
  v36 = (_DWORD *)*v9;
  v42[0] = v35;
  xxxDrawState(v42, v36[9], v36[10], v36[11], v36[12], v50);
  v37 = (int)a3[2];
  if ( !v37 )
    v37 = **a3;
  if ( MNGetpItemIndex(v37, (int)v9) != -1 )
  {
    if ( v46 != -2147352576 )
      MNDrawMenu3DHotTracking(v9);
    goto LABEL_19;
  }
  result = v45;
  if ( v45 )
    return GreSetBkMode(a1, v45);
  return result;
}
