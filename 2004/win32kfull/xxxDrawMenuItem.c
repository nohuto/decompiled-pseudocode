/*
 * XREFs of xxxDrawMenuItem @ 0x1C0060D14
 * Callers:
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 * Callees:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0060C90 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0061048 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0061074 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GetDPIServerInfoForDpi @ 0x1C0061810 (GetDPIServerInfoForDpi.c)
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00626AC (GreSetBkMode.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0063FA4 (GreSetBkColor.c)
 *     GetDPIMETRICSForDpi @ 0x1C0064724 (GetDPIMETRICSForDpi.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     MNIsOwnerDrawItem @ 0x1C00AECA0 (MNIsOwnerDrawItem.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C024CD18 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C024CDD0 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C024CFBC (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C0251C6C (BltColor.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 *     GreGetTextCharacterExtra @ 0x1C02BC6A8 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BC6F4 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, unsigned int a2, _QWORD **a3, struct tagITEM *a4, char a5, __int64 a6)
{
  _QWORD *v7; // rcx
  int v11; // eax
  unsigned int v12; // r11d
  int v13; // r12d
  BOOL v14; // r15d
  _QWORD *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // ebx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rbx
  int v26; // r15d
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // r8d
  unsigned int v31; // ebx
  int v32; // r15d
  _QWORD *v33; // rcx
  int v34; // [rsp+50h] [rbp-78h]
  int v35; // [rsp+54h] [rbp-74h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  int v37; // [rsp+E0h] [rbp+18h]

  v34 = 0;
  v36 = 0LL;
  v7 = a3[2];
  v37 = 0;
  if ( !v7 )
    v7 = (_QWORD *)**a3;
  v35 = MNIsOwnerDrawItem(v7, a4);
  v11 = MNDrawHilite(a3, a4);
  if ( v12 == -2147352576 )
  {
    if ( v11 || (v13 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v13 = 1;
    v14 = (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) == 0;
  }
  else
  {
    v13 = v11;
    v14 = 0;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v20 = *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48);
    if ( v20 )
    {
      v36 = GreSelectFont(a1, v20);
    }
    else
    {
      v37 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
    }
    v12 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( v35 )
  {
    GreSetTextColor(a1);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage((_DWORD)a1, (a5 & 1) + 1, (_DWORD)a3, (_DWORD)a4, 0, 0, a6);
    v15 = a3[2];
    if ( !v15 )
      v15 = (_QWORD *)**a3;
    result = MNGetpItemIndex(v15, a4);
    if ( (_DWORD)result != -1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) != 0 && *((_QWORD *)a4 + 2) )
      {
        v21 = a3[2];
        if ( !v21 )
          v21 = (_QWORD *)**a3;
        if ( !(unsigned int)MNIsUAHMenu(v21, v17, v18, v19) )
        {
          v23 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem(-(**(_DWORD **)a4 & 0x2000), v22);
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v23 + 62), DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v26 = OemBitmapInfoForDpi[3];
              v27 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v26 - 2) / 2;
              if ( v27 <= 0 )
                v27 = 0;
              BltColor(
                a1,
                v27 + *(_DWORD *)(*(_QWORD *)a4 + 68LL),
                OemBitmapInfoForDpi[2],
                v26,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_13:
      MNDrawInsertionBar(a1, a4);
      if ( v34 )
        GreSetBkMode(a1);
      result = *(_QWORD *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v36 )
        {
          return GreSelectFont(a1, v36);
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
  if ( !v13 )
  {
    if ( v14 )
    {
      v29 = *(_QWORD *)(gpsi + 4752LL);
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  if ( v12 != -2147352576 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) != 0 )
    {
      v28 = gpsi;
      goto LABEL_37;
    }
LABEL_40:
    v29 = *(_QWORD *)(gpsi + 4752LL);
    goto LABEL_41;
  }
  v28 = gpsi;
LABEL_37:
  v29 = *(_QWORD *)(v28 + 4808);
LABEL_41:
  if ( !(unsigned int)MNIsCachedBmpOnly(a4)
    && ((*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) != 0) )
  {
    if ( v13 || v30 != *(_DWORD *)(gpsi + 4628LL) || *(_DWORD *)(gpsi + 2188LL) )
    {
      if ( *(_DWORD *)(gpsi + 4636LL) != v30 )
      {
        v29 = *(_QWORD *)(gpsi + 4832LL);
        goto LABEL_53;
      }
    }
    else if ( *(_DWORD *)(gpsi + 4632LL) != v30 || *(_DWORD *)(gpsi + 4648LL) != v30 )
    {
      v37 |= (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) != 0 ? 256 : 32;
      goto LABEL_53;
    }
    v37 |= 0x10u;
  }
LABEL_53:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) || v13 || v14 )
  {
    GrePolyPatBlt(a1);
    v31 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( v13 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      DrawOutline(
        a1,
        *(_DWORD *)(*(_QWORD *)a4 + 64LL),
        *(_DWORD *)(*(_QWORD *)a4 + 68LL),
        *(_DWORD *)(*(_QWORD *)a4 + 72LL),
        *(_DWORD *)(*(_QWORD *)a4 + 76LL),
        1,
        *(HBRUSH *)(gpsi + 4800LL));
  }
  else
  {
    v31 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) )
  {
    v32 = GreSetBkMode(a1);
    v34 = v32;
  }
  else
  {
    v32 = 0;
  }
  GreSelectBrush(a1, v29);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v37);
  v33 = a3[2];
  if ( !v33 )
    v33 = (_QWORD *)**a3;
  result = MNGetpItemIndex(v33, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v31 != -2147352576 )
      MNDrawMenu3DHotTracking(a1);
    goto LABEL_13;
  }
  if ( v32 )
    return GreSetBkMode(a1);
  return result;
}
