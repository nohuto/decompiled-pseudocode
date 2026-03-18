/*
 * XREFs of xxxDrawMenuItem @ 0x1C00338A8
 * Callers:
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242468 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 * Callees:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0033824 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0033A54 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0033C8C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GetDPIMETRICSForDpi @ 0x1C003510C (GetDPIMETRICSForDpi.c)
 *     MNIsOwnerDrawItem @ 0x1C003583C (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1C0037B68 (GrePolyPatBlt.c)
 *     GetDPIServerInfoForDpi @ 0x1C0037DEC (GetDPIServerInfoForDpi.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C024B710 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C024B7C8 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x1C024B9B4 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 *     BltColor @ 0x1C025065C (BltColor.c)
 *     xxxDrawState @ 0x1C02507A4 (xxxDrawState.c)
 *     GreGetTextCharacterExtra @ 0x1C02BB148 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BB194 (GreSetTextCharacterExtra.c)
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
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // ebx
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rbx
  int v25; // r15d
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // r8d
  unsigned int v30; // ebx
  int v31; // r15d
  _QWORD *v32; // rcx
  int v33; // [rsp+50h] [rbp-78h]
  int v34; // [rsp+54h] [rbp-74h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  int v36; // [rsp+E0h] [rbp+18h]

  v33 = 0;
  v35 = 0LL;
  v7 = a3[2];
  v36 = 0;
  if ( !v7 )
    v7 = (_QWORD *)**a3;
  v34 = MNIsOwnerDrawItem(v7, a4);
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
    v19 = *(_QWORD *)(GetDPIMETRICSForDpi(a2) + 48);
    if ( v19 )
    {
      v35 = GreSelectFont(a1, v19);
    }
    else
    {
      v36 = 64;
      GreGetTextCharacterExtra(a1);
      GetDPIServerInfoForDpi(a2);
      GetDPIMETRICSForDpi(a2);
      GreSetTextCharacterExtra(a1);
    }
    v12 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( v34 )
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
        v20 = a3[2];
        if ( !v20 )
          v20 = (_QWORD *)**a3;
        if ( !(unsigned int)MNIsUAHMenu(v20, v17, v18) )
        {
          v22 = (**(_DWORD **)a4 & 0x2000) != 0 ? 0x1E : 0;
          DpiForSystem = GetDpiForSystem(-(**(_DWORD **)a4 & 0x2000), v21);
          OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v22 + 62), DpiForSystem);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfoForDpi[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v25 = OemBitmapInfoForDpi[3];
              v26 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v25 - 2) / 2;
              if ( v26 <= 0 )
                v26 = 0;
              BltColor(
                a1,
                v26 + *(_DWORD *)(*(_QWORD *)a4 + 68LL),
                OemBitmapInfoForDpi[2],
                v25,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                1);
            }
          }
        }
      }
LABEL_13:
      MNDrawInsertionBar(a1, a4);
      if ( v33 )
        GreSetBkMode(a1);
      result = *(_QWORD *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v35 )
        {
          return GreSelectFont(a1, v35);
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
      v28 = *(_QWORD *)(gpsi + 4752LL);
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  if ( v12 != -2147352576 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 1) != 0 )
    {
      v27 = gpsi;
      goto LABEL_37;
    }
LABEL_40:
    v28 = *(_QWORD *)(gpsi + 4752LL);
    goto LABEL_41;
  }
  v27 = gpsi;
LABEL_37:
  v28 = *(_QWORD *)(v27 + 4808);
LABEL_41:
  if ( !(unsigned int)MNIsCachedBmpOnly(a4)
    && ((*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) != 0) )
  {
    if ( v13 || v29 != *(_DWORD *)(gpsi + 4628LL) || *(_DWORD *)(gpsi + 2188LL) )
    {
      if ( *(_DWORD *)(gpsi + 4636LL) != v29 )
      {
        v28 = *(_QWORD *)(gpsi + 4832LL);
        goto LABEL_53;
      }
    }
    else if ( *(_DWORD *)(gpsi + 4632LL) != v29 || *(_DWORD *)(gpsi + 4648LL) != v29 )
    {
      v36 |= (*(_DWORD *)(*(_QWORD *)(**a3 + 40LL) + 40LL) & 0x10) != 0 ? 256 : 32;
      goto LABEL_53;
    }
    v36 |= 0x10u;
  }
LABEL_53:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) || v13 || v14 )
  {
    GrePolyPatBlt(a1);
    v30 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
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
    v30 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a3 + 40LL) + 24LL) )
  {
    v31 = GreSetBkMode(a1);
    v33 = v31;
  }
  else
  {
    v31 = 0;
  }
  GreSelectBrush(a1, v28);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v36);
  v32 = a3[2];
  if ( !v32 )
    v32 = (_QWORD *)**a3;
  result = MNGetpItemIndex(v32, a4);
  if ( (_DWORD)result != -1 )
  {
    if ( v30 != -2147352576 )
      MNDrawMenu3DHotTracking(a1, a3, a4);
    goto LABEL_13;
  }
  if ( v31 )
    return GreSetBkMode(a1);
  return result;
}
