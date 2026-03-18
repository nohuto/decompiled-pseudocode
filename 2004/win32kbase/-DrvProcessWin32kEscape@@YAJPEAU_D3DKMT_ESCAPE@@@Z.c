/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C004EE78
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C004EE60 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C004EF9C (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0124D30 (xxxDisplayDiagBlackScreenDetected.c)
 *     GreIsInLowBox @ 0x1C01433C0 (GreIsInLowBox.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0147EFC (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  size_t PrivateDriverDataSize; // rcx
  size_t v5; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  UINT v11; // edx
  int CurrentDpiInfoFromHDC; // eax
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  UINT v19; // eax
  __int64 (__fastcall *v20)(_DWORD *); // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  size_t v27; // r8
  char *v28; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v30; // [rsp+50h] [rbp-28h] BYREF
  char v31; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v32; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v32 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_7;
  v3 = (_DWORD *)PALLOCMEM2(PrivateDriverDataSize);
  v32 = v3;
  if ( v3 )
  {
    v5 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v5] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v3, pPrivateDriverData, v5);
LABEL_7:
    Type = a1->Type;
    if ( Type > D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
    {
      v8 = Type - 1031;
      if ( v8 )
      {
        v9 = v8 - 3;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              v11 = a1->PrivateDriverDataSize;
              if ( v11 >= 0x64 )
              {
                CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser(v3, v11);
LABEL_14:
                v2 = CurrentDpiInfoFromHDC;
                goto LABEL_15;
              }
LABEL_29:
              v2 = -1073741811;
              goto LABEL_16;
            }
            goto LABEL_54;
          }
          if ( a1->PrivateDriverDataSize != 8 )
            goto LABEL_29;
          wil_details_FeatureReporting_ReportUsageToService(
            (unsigned int)&Feature_BrokeredDisplays_TestMode__private_reporting,
            17473580,
            0,
            0,
            (__int64)&Feature_BrokeredDisplays_TestMode_logged_traits,
            0,
            3);
LABEL_40:
          v2 = -1073741637;
          goto LABEL_16;
        }
        if ( a1->PrivateDriverDataSize != 40 )
          goto LABEL_29;
        v20 = (__int64 (__fastcall *)(_DWORD *))qword_1C024CAC0;
LABEL_60:
        CurrentDpiInfoFromHDC = v20(v3);
        goto LABEL_14;
      }
      if ( !gbOSTestSigningEnabled )
      {
        v22 = (int)qword_1C02510B8;
        if ( qword_1C02510B8 )
          v22 = qword_1C02510B8();
        if ( !v22 )
        {
          if ( !(unsigned int)GreIsInLowBox()
            || ((v31 = 0,
                 DestinationString = 0LL,
                 v30 = 0LL,
                 RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
                 RtlInitUnicodeString(&v30, L"shellDisplayManagement"),
                 (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v31) < 0)
             || !v31)
            && ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &v30, &v31) < 0 || !v31) )
          {
            v2 = -1073741790;
            v23 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v23 + 24) = -1073741790LL;
LABEL_72:
            WdLogEvent5_WdError(v23);
            goto LABEL_15;
          }
        }
      }
      if ( a1->PrivateDriverDataSize != 24 )
      {
        v2 = -1073741811;
        v23 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v23 + 24) = a1->PrivateDriverDataSize;
        *(_QWORD *)(v23 + 32) = -1073741811LL;
        goto LABEL_72;
      }
      if ( v3[5] >= 4u )
      {
        v2 = -1073741811;
        v23 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v23 + 24) = -1073741811LL;
        goto LABEL_72;
      }
      EnterCrit(0LL, 1LL);
      v24 = v3[5];
      v25 = v24 >> 1;
      LOBYTE(v25) = (v24 & 2) != 0;
      LOBYTE(v24) = v24 & 1;
      xxxDisplayDiagBlackScreenDetected(4, v24, v25, (_DWORD)v3 + 4, (__int64)v3);
      v2 = 0;
      UserSessionSwitchLeaveCrit(v26);
LABEL_15:
      if ( v2 >= 0 )
      {
        if ( !v3 )
          return (unsigned int)v2;
        v27 = a1->PrivateDriverDataSize;
        v28 = (char *)a1->pPrivateDriverData;
        if ( (unsigned __int64)&v28[v27] > MmUserProbeAddress || &v28[v27] <= v28 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v28, v3, v27);
      }
LABEL_16:
      if ( v3 )
        Win32FreePool(v3);
      return (unsigned int)v2;
    }
    if ( Type == D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
    {
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_29;
      if ( !gbOSTestSigningEnabled )
      {
        v2 = -1073741790;
        goto LABEL_16;
      }
      if ( (*v3 & 3) == 2 )
      {
        v18 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v18 + 24) = a1->Type;
        WdLogEvent5_WdError(v18);
        goto LABEL_29;
      }
      g_OutputDuplicationTestControl = *v3;
      goto LABEL_15;
    }
    v14 = Type - 1024;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_40;
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = (unsigned int)(v16 - 1);
        if ( (_DWORD)v17 )
        {
          if ( (_DWORD)v17 != 1 )
          {
LABEL_54:
            v21 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v21 + 24) = a1->Type;
            WdLogEvent5_WdError(v21);
LABEL_55:
            v2 = -1073741811;
            goto LABEL_15;
          }
          if ( a1->PrivateDriverDataSize != 6 )
            goto LABEL_29;
          *(_WORD *)v3 = gdmLogPixels;
          *((_WORD *)v3 + 1) = *(_WORD *)(PsGetCurrentProcessWin32Process(v17) + 284);
          *((_WORD *)v3 + 2) = *((_WORD *)gpsi + 3499);
          goto LABEL_15;
        }
      }
      else
      {
        if ( a1->PrivateDriverDataSize == 104 )
        {
          CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v3, (struct _DPI_INFORMATION *const)(v3 + 2));
          goto LABEL_14;
        }
        v2 = -1073741811;
      }
      if ( a1->PrivateDriverDataSize < 8 )
        goto LABEL_29;
      if ( *v3 != 1 )
      {
        if ( *v3 == 2 && gbOSTestSigningEnabled )
        {
          gbBypassPresenterViewProcessCheck = v3[1];
          goto LABEL_15;
        }
        goto LABEL_55;
      }
      if ( qword_1C024CA40 )
      {
        v3[1] = (unsigned __int8)qword_1C024CA40() != 0;
        goto LABEL_15;
      }
    }
    else
    {
      v19 = a1->PrivateDriverDataSize;
      if ( v19 < 4 || v19 != *v3 )
        goto LABEL_29;
      if ( qword_1C0251330 )
        v2 = qword_1C0251330();
      else
        v2 = -1073741637;
      if ( v2 < 0 )
        goto LABEL_16;
      v20 = (__int64 (__fastcall *)(_DWORD *))qword_1C0251338;
      if ( qword_1C0251338 )
        goto LABEL_60;
    }
    v2 = -1073741637;
    goto LABEL_15;
  }
  *(_QWORD *)(WdLogNewEntry5_WdLowResource() + 24) = a1->PrivateDriverDataSize;
  WdLogEvent5_WdLowResource();
  return 3221225495LL;
}
