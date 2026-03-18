/*
 * XREFs of _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE
 * Callers:
 *     _NtUserUpdatePerUserSystemParameters@4 @ 0xD7846 (_NtUserUpdatePerUserSystemParameters@4.c)
 * Callees:
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     __SetCaretBlinkTime@4 @ 0x7DA40 (__SetCaretBlinkTime@4.c)
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _WakeRIT@4 @ 0x9C542 (_WakeRIT@4.c)
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _xxxUserResetDisplayDevice@0 @ 0xD38BE (_xxxUserResetDisplayDevice@0.c)
 *     ?PerformLegacyDpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z @ 0xD6204 (-PerformLegacyDpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z.c)
 *     _InitializeTouchStatus@0 @ 0xD6296 (_InitializeTouchStatus@0.c)
 *     _UnlockDesktopMenu@4 @ 0xD65B8 (_UnlockDesktopMenu@4.c)
 *     _GreSetFontEnumeration@4 @ 0xD885A (_GreSetFontEnumeration@4.c)
 *     _UpdatePerUserKeyboardIndicators@4 @ 0xD889C (_UpdatePerUserKeyboardIndicators@4.c)
 *     _SetMouseTrails@4 @ 0xD8942 (_SetMouseTrails@4.c)
 *     ?CalcScreenSaverTimeout@@YGXPAU_UNICODE_STRING@@K@Z @ 0xD899E (-CalcScreenSaverTimeout@@YGXPAU_UNICODE_STRING@@K@Z.c)
 *     _xxxUpdateSystemIconsFromRegistry@4 @ 0xD8AEE (_xxxUpdateSystemIconsFromRegistry@4.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YGXPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DC8 (-xxxUpdateSystemCursorsFromRegistry@@YGXPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason.c)
 *     ?xxxLoadSomeStrings@@YGXXZ @ 0xD9A20 (-xxxLoadSomeStrings@@YGXXZ.c)
 *     _GetKbdLangSwitch@4 @ 0xD9D1E (_GetKbdLangSwitch@4.c)
 *     _SetIconMetrics@8 @ 0xD9F16 (_SetIconMetrics@8.c)
 *     _SetMinMetrics@8 @ 0xDA05C (_SetMinMetrics@8.c)
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 *     ?LW_LoadResources@@YGXPAU_UNICODE_STRING@@@Z @ 0xDB618 (-LW_LoadResources@@YGXPAU_UNICODE_STRING@@@Z.c)
 *     ?LoadCPUserPreferences@@YGHPAU_UNICODE_STRING@@K@Z @ 0xDB6FE (-LoadCPUserPreferences@@YGHPAU_UNICODE_STRING@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?UserReinitializeStockFonts@@YGXKH@Z @ 0xF013A (-UserReinitializeStockFonts@@YGXKH@Z.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 *     _QueryAutoRotationState@0 @ 0x141575 (_QueryAutoRotationState@0.c)
 *     _CheckEasPolicyChange@0 @ 0x143551 (_CheckEasPolicyChange@0.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x14BA4D (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxUpdatePerUserSystemParameters(int a1, int a2)
{
  int v2; // ebx
  const UNICODE_STRING *ProfileUserName; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // edx
  _DWORD *i; // esi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // esi
  int ProfileIntsW; // eax
  _DWORD *v21; // esi
  unsigned int v22; // esi
  int v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  unsigned int v26; // eax
  bool v27; // zf
  void *v28; // eax
  int v29; // ebx
  int v30; // ecx
  struct _UNICODE_STRING *v31; // [esp+0h] [ebp-3C0h]
  struct _UNICODE_STRING *v32; // [esp+0h] [ebp-3C0h]
  unsigned int v33; // [esp+4h] [ebp-3BCh]
  unsigned int v34; // [esp+4h] [ebp-3BCh]
  _BYTE v35[12]; // [esp+Ch] [ebp-3B4h] BYREF
  _DWORD v36[3]; // [esp+18h] [ebp-3A8h] BYREF
  int v37; // [esp+24h] [ebp-39Ch] BYREF
  int v38; // [esp+28h] [ebp-398h] BYREF
  int AutoRotationState; // [esp+2Ch] [ebp-394h] BYREF
  int v40; // [esp+30h] [ebp-390h] BYREF
  int v41; // [esp+34h] [ebp-38Ch]
  int v42; // [esp+38h] [ebp-388h] BYREF
  int v43; // [esp+3Ch] [ebp-384h] BYREF
  int v44; // [esp+40h] [ebp-380h] BYREF
  int v45; // [esp+44h] [ebp-37Ch]
  int v46; // [esp+48h] [ebp-378h] BYREF
  int v47; // [esp+4Ch] [ebp-374h] BYREF
  _DWORD v48[2]; // [esp+50h] [ebp-370h] BYREF
  unsigned int v49; // [esp+58h] [ebp-368h]
  int v50; // [esp+5Ch] [ebp-364h] BYREF
  int v51; // [esp+60h] [ebp-360h] BYREF
  int v52; // [esp+64h] [ebp-35Ch] BYREF
  int v53; // [esp+68h] [ebp-358h] BYREF
  int v54; // [esp+6Ch] [ebp-354h]
  int v55; // [esp+70h] [ebp-350h]
  int v56; // [esp+74h] [ebp-34Ch]
  int v57; // [esp+78h] [ebp-348h]
  int v58; // [esp+7Ch] [ebp-344h]
  char v59; // [esp+83h] [ebp-33Dh] BYREF
  int v60[3]; // [esp+84h] [ebp-33Ch] BYREF
  _DWORD v61[58]; // [esp+90h] [ebp-330h] BYREF
  _DWORD v62[46]; // [esp+178h] [ebp-248h] BYREF
  _DWORD v63[42]; // [esp+230h] [ebp-190h] BYREF
  _DWORD v64[16]; // [esp+2D8h] [ebp-E8h] BYREF
  _BYTE v65[80]; // [esp+318h] [ebp-A8h] BYREF
  unsigned __int16 v66[42]; // [esp+368h] [ebp-58h] BYREF

  v53 = a2;
  v50 = _gulFontInformation;
  v52 = 96;
  v41 = a1;
  v51 = _gdwPUDFlags & 0x100000;
  v44 = 0;
  memset(v35, 0, sizeof(v35));
  v2 = 0;
  v58 = 0;
  v45 = 0;
  v62[45] = 4135;
  v63[0] = 112;
  v63[1] = 0;
  v42 = 0;
  v43 = _gdwPUDFlags & 0x10000;
  v62[44] = 4;
  v63[2] = 4;
  v63[6] = 4;
  v63[9] = 4;
  v63[10] = 4;
  v63[13] = 4;
  v63[14] = 4;
  v63[18] = 4;
  v46 = 1;
  v63[3] = 17;
  v63[4] = 100;
  v63[5] = 0;
  v63[7] = 77;
  v63[8] = 199;
  v63[11] = 76;
  v63[12] = 198;
  v63[15] = 105;
  v63[16] = 14;
  v63[17] = 3;
  v63[19] = 109;
  v56 = 15;
  v63[20] = 15;
  v63[21] = 3;
  v63[22] = 4;
  v63[23] = 131;
  v63[24] = 18;
  v63[25] = 1;
  v63[26] = 4;
  v63[27] = 141;
  v63[28] = 624;
  v63[29] = 1;
  v63[30] = 4;
  v63[31] = 145;
  v63[32] = 625;
  v63[33] = 1;
  v63[34] = 4;
  v63[35] = 143;
  v63[36] = 626;
  v63[37] = 1;
  v63[38] = 4;
  v63[39] = 159;
  v63[40] = 628;
  v63[41] = 0;
  v60[1] = 13;
  v61[2] = 13;
  v61[4] = 13;
  v61[5] = 15;
  v61[1] = 0;
  v61[21] = 0;
  v61[25] = 0;
  v61[13] = 4;
  v61[17] = 4;
  v61[19] = 96;
  v61[24] = 96;
  v61[36] = 17;
  v61[29] = 1;
  v61[33] = 1;
  v61[41] = 20;
  v61[44] = 20;
  v61[6] = 12;
  v61[10] = 12;
  v61[14] = 12;
  v61[18] = 12;
  v61[30] = 12;
  v61[34] = 12;
  v61[38] = 12;
  v61[42] = 12;
  v61[46] = 12;
  v61[50] = 12;
  v60[2] = 23;
  v61[0] = 106;
  v61[3] = 11;
  v61[7] = 32;
  v61[8] = 6;
  v61[9] = 500;
  v61[11] = 29;
  v61[12] = 97;
  v61[15] = 30;
  v61[16] = 98;
  v61[20] = 7;
  v61[22] = 3;
  v61[23] = 28;
  v61[26] = 35;
  v61[27] = 111;
  v61[28] = 236;
  v61[31] = 127;
  v61[32] = 16;
  v61[35] = 129;
  v61[37] = 30;
  v61[39] = 133;
  v61[40] = 19;
  v61[43] = 135;
  v61[45] = 30;
  v61[47] = 137;
  v61[48] = 21;
  v61[49] = 50;
  v61[51] = 139;
  v61[52] = 22;
  v61[53] = 50;
  v61[54] = 4;
  v61[55] = 169;
  v61[56] = 205;
  v62[9] = 133;
  v62[7] = &v51;
  v62[10] = 3;
  v62[18] = 3;
  v62[0] = 4;
  v62[4] = 4;
  v62[8] = 4;
  v62[12] = 4;
  v62[16] = 4;
  v62[20] = 4;
  v62[19] = _gpsi + 4464;
  v62[23] = _gpsi + 4468;
  v62[24] = 4;
  v62[27] = &v50;
  v62[31] = &v44;
  v62[35] = _gdwHungAppTimeout;
  v62[43] = &v43;
  v62[28] = 4;
  v62[32] = 4;
  v62[36] = 4;
  v64[0] = 12;
  v64[4] = 12;
  v64[8] = 12;
  v64[9] = 12;
  v62[34] = 5000;
  v62[38] = 5000;
  v64[11] = &v46;
  v61[57] = 0;
  v62[1] = 94;
  v62[2] = 400;
  v62[3] = &gdtMNDropDown;
  v62[5] = 107;
  v62[6] = 2;
  v62[11] = &WPP_MAIN_CB.Dpc.DpcListEntry;
  v62[13] = 134;
  v62[14] = 7;
  v62[15] = &WPP_MAIN_CB.Dpc;
  v62[17] = 159;
  v62[21] = 160;
  v62[22] = 3;
  v62[25] = 200;
  v62[26] = 0;
  v62[29] = 618;
  v62[30] = 0;
  v62[33] = 621;
  v62[37] = 622;
  v62[39] = &gdwWaitToKillTimeout;
  v62[40] = 23;
  v62[41] = 149;
  v62[42] = 1;
  v64[1] = 10;
  v64[2] = 6;
  v64[3] = &gMouseThresh1;
  v64[5] = 11;
  v64[6] = 10;
  v64[7] = &gMouseThresh2;
  v64[10] = 1;
  v64[12] = 35;
  v64[13] = 237;
  v64[14] = 0;
  v64[15] = _gfEnableHexNumpad;
  v54 = a1 & 2;
  v57 = a1 & 1;
  v55 = a1 & 4;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)_gpidLogon )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  ProfileUserName = (const UNICODE_STRING *)CreateProfileUserName(v35);
  if ( !ProfileUserName )
    return 0;
  if ( _grpWinStaList )
  {
    if ( *(_DWORD *)(_grpWinStaList + 116) )
      Win32FreePool(*(_DWORD *)(_grpWinStaList + 116));
    v5 = Win32AllocPool(ProfileUserName->Length, 1852863317);
    *(_DWORD *)(_grpWinStaList + 116) = v5;
    if ( v5 )
    {
      *(_WORD *)(_grpWinStaList + 114) = ProfileUserName->Length;
      *(_WORD *)(_grpWinStaList + 112) = 0;
      RtlCopyUnicodeString((PUNICODE_STRING)(_grpWinStaList + 112), ProfileUserName);
    }
    v6 = v57;
    if ( v57 )
      WakeRIT(0x40u);
  }
  else
  {
    v6 = v57;
  }
  v7 = v55;
  if ( v54 && !v55 )
  {
    v8 = CheckEasPolicyChange();
    v45 = v8;
    if ( !CheckDesktopPolicyChange(ProfileUserName) && !v8 )
    {
      UserSetLastError(0);
      FreeProfileUserName(ProfileUserName, v35);
      return 0;
    }
    v7 = v55;
    v2 = 16;
    v58 = 16;
  }
  if ( v6 )
    _gdwPolicyFlags |= 2u;
  if ( v7 )
  {
    v2 |= 8u;
    v58 = v2;
  }
  v60[0] = 300;
  FastGetProfileValue(ProfileUserName, 4, 607, v60, &WPP_MAIN_CB.DeviceQueue.Busy, 4, v2);
  if ( *(int *)&WPP_MAIN_CB.DeviceQueue.Busy <= 0 || *(int *)&WPP_MAIN_CB.DeviceQueue.Busy >= 1000 )
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 1000;
  if ( v6 )
  {
    if ( !gDpiAdjustedForLoggedOnUser && !UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(ProfileUserName, 4, L"LogPixels", 0, v2, &v52, 0);
      v47 = 0;
      v9 = DrvInitializeDxgkrnlDpiCache(&v47);
      v10 = PerformLegacyDpiUpgrade((int)ProfileUserName, v52);
      if ( v9 < 0 || v47 || gdmLogPixelsOfPrimary != gdmLogPixels || v10 || v52 )
      {
        GreReinitializeDpiSetting();
        v59 = 0;
        if ( (int)xxxUserSetDisplayConfig(0, 0, 2191, 516, 0, 0, 0, 0, &v59, v53) >= 0 )
        {
          if ( v59 )
            xxxUserResetDisplayDevice();
          UserReinitializeStockFonts((unsigned int)v31, v33);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(v31, v33);
  if ( !v54 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(v32);
    if ( GreTextInitialized() )
      xxxSetWindowNCMetrics(ProfileUserName, 0, -1);
    SetMinMetrics(ProfileUserName, 0);
    SetIconMetrics(ProfileUserName, 0);
    GetKbdLangSwitch(ProfileUserName, v11);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(_gpsi + 6256));
    xxxLoadSomeStrings();
    if ( _grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v48, 0);
      v49 = 0;
      for ( i = *(_DWORD **)(_grpWinStaList + 8); i; i = (_DWORD *)i[4] )
      {
        v13 = i[7];
        if ( v13 )
        {
          v49 = 0;
          SmartObjStackRefBase<tagMENU>::operator=(v48, v13);
          *(_DWORD *)(*(_DWORD *)(i[7] + 20) + 20) &= ~0x80u;
          UnlockDesktopMenu(i + 7, (int)v32);
          if ( v14 )
          {
            v15 = v49;
            if ( !v49 )
              v15 = *(_DWORD *)v48[0];
            _DestroyMenu(v15);
          }
        }
        v16 = i[8];
        if ( v16 )
        {
          v49 = 0;
          SmartObjStackRefBase<tagMENU>::operator=(v48, v16);
          *(_DWORD *)(*(_DWORD *)(i[8] + 20) + 20) &= ~0x80u;
          UnlockDesktopMenu(i + 8, v34);
          if ( v17 )
          {
            v18 = v49;
            if ( !v49 )
              v18 = *(_DWORD *)v48[0];
            _DestroyMenu(v18);
          }
        }
      }
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v48);
    }
    CCursorSizes::RefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry(ProfileUserName, 1);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v19 = v61;
    do
    {
      if ( FastGetProfileIntFromID(ProfileUserName, *(v19 - 2), *v19, v19[1], v60, 0) )
        xxxSystemParametersInfo(*(v19 - 1), v60[0], 0, 0x8000);
      v19 += 4;
      --v56;
    }
    while ( v56 );
    ProfileIntsW = FastGetProfileIntsW(ProfileUserName, v64, 4, 0);
    LOBYTE(ProfileIntsW) = v46 != 0;
    EnableMouseAcceleration(ProfileIntsW);
  }
  xxxSystemParametersInfo(21, -1, 0, 0);
  if ( v57 )
    FastGetProfileIntFromID(ProfileUserName, 35, 236, 1, &gfIMEShowStatus, 0);
  v21 = v63;
  v56 = 11;
  do
  {
    if ( FastGetProfileIntFromID(ProfileUserName, *(v21 - 2), *v21, v21[1], v60, v58) )
      xxxSystemParametersInfo(*(v21 - 1), v60[0], 0, 0x8000);
    v21 += 4;
    --v56;
  }
  while ( v56 );
  CalcScreenSaverTimeout(v32, v34);
  FastGetProfileIntsW(ProfileUserName, v62, 11, v58);
  if ( (int)WPP_MAIN_CB.Dpc.TargetInfoAsUlong < 2 )
    WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 7;
  if ( (int)WPP_MAIN_CB.Dpc.DpcListEntry.Next < 1 )
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)3;
  if ( v44 )
    _InterlockedOr(_gpsi, 0x200u);
  else
    _InterlockedAnd(_gpsi, 0xFFFFFDFF);
  if ( v43 )
    _gdwPUDFlags |= 0x10000u;
  else
    _gdwPUDFlags &= ~0x10000u;
  if ( v51 == 2 )
  {
    if ( GreGetDeviceCaps(*(_DWORD *)(_gpDispInfo + 28), 119) )
      _gdwPUDFlags &= ~0x100000u;
    else
      _gdwPUDFlags |= 0x100000u;
    if ( v57 )
    {
      RtlStringCchPrintfW(v66, 0x28u, L"%d", (_gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107, v65, 40, 0);
      FastWriteProfileStringW(ProfileUserName, 4, v65, v66);
    }
  }
  else if ( v51 )
  {
    _gdwPUDFlags |= 0x100000u;
  }
  else
  {
    _gdwPUDFlags &= ~0x100000u;
  }
  v22 = v54;
  v60[0] = *(_DWORD *)(_gpsi + 4452);
  v23 = v58;
  if ( !v55 )
    v23 = v54;
  if ( FastGetProfileIntFromID(ProfileUserName, 4, 4, 500, v60, v23) )
    _SetCaretBlinkTime(v60[0]);
  if ( !v22 )
  {
    v53 = 0;
    FastGetProfileIntFromID(ProfileUserName, 12, 608, 10, &v53, 0);
    UpdateMouseSensitivity(v53);
    do
    {
      ReadDefaultAccelerationCurves(v22, ProfileUserName);
      ResetAccelerationCurves(v22++);
    }
    while ( v22 < 2 );
    FastGetProfileIntFromID(ProfileUserName, 12, 613, 0, v60, 0);
    SetMouseTrails(v60[0]);
    FastGetProfileIntW(ProfileUserName, 7, L"TTOnly", 0, v60, 0);
    GreSetFontEnumeration(v60[0]);
    FastGetProfileIntFromID(ProfileUserName, 12, 91, *(_DWORD *)(_gpsi + 1640), &gcxMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12, 92, *(_DWORD *)(_gpsi + 1644), &gcyMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12, 93, gdtMNDropDown, &gdtMouseHover, 0);
    v24 = gdtMouseHover;
    if ( (unsigned int)gdtMouseHover < 0xA )
    {
      v24 = 10;
      gdtMouseHover = 10;
    }
    if ( v24 > 0x7FFFFFFF )
      gdtMouseHover = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap();
    FastGetProfileDword(ProfileUserName, 24, L"Attributes", 0, _gdwKeyboardAttributes);
    _gdwKeyboardAttributes = (_gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v25 = (void *)OpenCacheKeyEx(0, 22, 131097, 0);
  if ( v25 )
  {
    *(_DWORD *)(_gpsi + 1748) = 1;
    ZwClose(v25);
  }
  *(_DWORD *)(_gpsi + 1748) |= 2u;
  GreSetFontEnumeration(4);
  GreSetFontEnumeration(32);
  if ( (v50 & 2) != 0 )
    GreSetFontEnumeration(v50 | 4);
  if ( (*(_BYTE *)UPDWORDPointer(8202) & 2) != 0 )
    GreSetFontEnumeration(v50 | 0x30);
  v26 = *(_DWORD *)UPDWORDPointer(8204);
  if ( !v26 )
    v26 = 1200;
  gulGamma = v26;
  v27 = (*(_BYTE *)UPDWORDPointer(8210) & 1) == 0;
  v28 = &unk_250C60;
  if ( v27 )
    v28 = &unk_250A90;
  off_266024 = v28;
  FreeProfileUserName(ProfileUserName, v35);
  if ( v41 == 2 )
    xxxUserResetDisplayDevice();
  FastGetProfileDword(0, 49, L"RestrictDebuggerForeground", 0, &v42);
  if ( v42 )
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = (struct _LIST_ENTRY *)1;
  v29 = v57;
  if ( v57 )
    InitializeTouchStatus();
  if ( _gbUsingDefaultSectionSize == 1 )
  {
    v40 = 0;
    MEMORY[1] = 0;
    UserLogError(-1073740778);
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    UserSessionSwitchLeaveCrit();
    ExRaiseHardError(-1073740778, 0, 0, 0, 7, &v40);
    EnterCrit(0, 1);
  }
  xxxDwmControl(1037, 0);
  if ( v29 )
  {
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
    {
      AutoRotationState = QueryAutoRotationState();
      v38 = dword_2738D4;
      v37 = (int)v36;
      v36[0] = 0x1000000;
      v36[1] = 0;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_266280,
        (int)&unk_25603C,
        v30,
        v30,
        (int)&v37,
        (int)&v38,
        (int)&AutoRotationState);
    }
    _InterlockedOr(_gpsi, 0x400u);
  }
  return 1;
}
