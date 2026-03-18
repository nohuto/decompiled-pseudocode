/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00AFE08
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00AFDF0 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00AFF2C (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C01229E0 (xxxDisplayDiagBlackScreenDetected.c)
 *     GreIsInLowBox @ 0x1C0140F20 (GreIsInLowBox.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0145A2C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  _DWORD *v5; // rdi
  size_t PrivateDriverDataSize; // rcx
  size_t v7; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx
  UINT v13; // edx
  int CurrentDpiInfoFromHDC; // eax
  __int64 v16; // rax
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  UINT v22; // eax
  __int64 (__fastcall *v23)(_DWORD *); // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // edx
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  size_t v35; // r8
  char *v36; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v38; // [rsp+50h] [rbp-28h] BYREF
  char v39; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v40; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v5 = 0LL;
  v40 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_7;
  v5 = PALLOCMEM2(PrivateDriverDataSize, 1886221383LL, 1);
  v40 = v5;
  if ( v5 )
  {
    v7 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v7] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v7] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v5, pPrivateDriverData, v7);
LABEL_7:
    Type = a1->Type;
    if ( Type > D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
    {
      v10 = (unsigned int)(Type - 1031);
      if ( (_DWORD)v10 )
      {
        v11 = v10 - 3;
        if ( v11 )
        {
          v12 = (unsigned int)(v11 - 1);
          if ( (_DWORD)v12 )
          {
            if ( (_DWORD)v12 == 1 )
            {
              v13 = a1->PrivateDriverDataSize;
              if ( v13 >= 0x64 )
              {
                CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser(v5, v13);
LABEL_14:
                v4 = CurrentDpiInfoFromHDC;
                goto LABEL_15;
              }
LABEL_29:
              v4 = -1073741811;
              goto LABEL_16;
            }
            goto LABEL_54;
          }
          if ( a1->PrivateDriverDataSize != 8 )
            goto LABEL_29;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_BrokeredDisplays_TestMode__private_reporting,
            0x10AA02Cu,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
            0,
            3);
LABEL_40:
          v4 = -1073741637;
          goto LABEL_16;
        }
        if ( a1->PrivateDriverDataSize != 40 )
          goto LABEL_29;
        v23 = (__int64 (__fastcall *)(_DWORD *))qword_1C024AAC0;
LABEL_60:
        CurrentDpiInfoFromHDC = v23(v5);
        goto LABEL_14;
      }
      if ( !gbOSTestSigningEnabled )
      {
        v26 = (int)qword_1C024F0B8;
        if ( qword_1C024F0B8 )
          v26 = qword_1C024F0B8();
        if ( !v26 )
        {
          if ( !(unsigned int)GreIsInLowBox()
            || ((v39 = 0,
                 DestinationString = 0LL,
                 v38 = 0LL,
                 RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
                 RtlInitUnicodeString(&v38, L"shellDisplayManagement"),
                 (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v39) < 0)
             || !v39)
            && ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &v38, &v39) < 0 || !v39) )
          {
            v4 = -1073741790;
            v27 = WdLogNewEntry5_WdError(v10, a2, a3);
            *(_QWORD *)(v27 + 24) = -1073741790LL;
LABEL_72:
            WdLogEvent5_WdError(v27, v28);
            goto LABEL_15;
          }
        }
      }
      if ( a1->PrivateDriverDataSize != 24 )
      {
        v4 = -1073741811;
        v27 = WdLogNewEntry5_WdError(v10, a2, a3);
        *(_QWORD *)(v27 + 24) = a1->PrivateDriverDataSize;
        *(_QWORD *)(v27 + 32) = -1073741811LL;
        goto LABEL_72;
      }
      if ( v5[5] >= 4u )
      {
        v4 = -1073741811;
        v27 = WdLogNewEntry5_WdError(v10, a2, a3);
        *(_QWORD *)(v27 + 24) = -1073741811LL;
        goto LABEL_72;
      }
      EnterCrit(0, 1);
      v29 = v5[5];
      v30 = v29 >> 1;
      LOBYTE(v30) = (v29 & 2) != 0;
      LOBYTE(v29) = v29 & 1;
      xxxDisplayDiagBlackScreenDetected(4, v29, v30, (_DWORD)v5 + 4, (__int64)v5);
      v4 = 0;
      UserSessionSwitchLeaveCrit(v32, v31, v33, v34);
LABEL_15:
      if ( v4 >= 0 )
      {
        if ( !v5 )
          return (unsigned int)v4;
        v35 = a1->PrivateDriverDataSize;
        v36 = (char *)a1->pPrivateDriverData;
        if ( (unsigned __int64)&v36[v35] > MmUserProbeAddress || &v36[v35] <= v36 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v36, v5, v35);
      }
LABEL_16:
      if ( v5 )
        Win32FreePool((__int64)v5);
      return (unsigned int)v4;
    }
    if ( Type == D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
    {
      if ( a1->PrivateDriverDataSize != 4 )
        goto LABEL_29;
      if ( !gbOSTestSigningEnabled )
      {
        v4 = -1073741790;
        goto LABEL_16;
      }
      if ( (*v5 & 3) == 2 )
      {
        v20 = WdLogNewEntry5_WdError((unsigned int)*v5, a2, a3);
        *(_QWORD *)(v20 + 24) = a1->Type;
        WdLogEvent5_WdError(v20, v21);
        goto LABEL_29;
      }
      g_OutputDuplicationTestControl = *v5;
      goto LABEL_15;
    }
    v17 = Type - 1024;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_40;
      v19 = v18 - 1;
      if ( v19 )
      {
        v12 = (unsigned int)(v19 - 1);
        if ( (_DWORD)v12 )
        {
          if ( (_DWORD)v12 != 1 )
          {
LABEL_54:
            v24 = WdLogNewEntry5_WdError(v12, a2, a3);
            *(_QWORD *)(v24 + 24) = a1->Type;
            WdLogEvent5_WdError(v24, v25);
LABEL_55:
            v4 = -1073741811;
            goto LABEL_15;
          }
          if ( a1->PrivateDriverDataSize != 6 )
            goto LABEL_29;
          *(_WORD *)v5 = gdmLogPixels;
          *((_WORD *)v5 + 1) = *(_WORD *)(PsGetCurrentProcessWin32Process(v12) + 284);
          *((_WORD *)v5 + 2) = *((_WORD *)gpsi + 3499);
          goto LABEL_15;
        }
      }
      else
      {
        if ( a1->PrivateDriverDataSize == 104 )
        {
          CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v5, (struct _DPI_INFORMATION *const)(v5 + 2));
          goto LABEL_14;
        }
        v4 = -1073741811;
      }
      if ( a1->PrivateDriverDataSize < 8 )
        goto LABEL_29;
      if ( *v5 != 1 )
      {
        if ( *v5 == 2 && gbOSTestSigningEnabled )
        {
          gbBypassPresenterViewProcessCheck = v5[1];
          goto LABEL_15;
        }
        goto LABEL_55;
      }
      if ( qword_1C024AA40 )
      {
        v5[1] = (unsigned __int8)qword_1C024AA40() != 0;
        goto LABEL_15;
      }
    }
    else
    {
      v22 = a1->PrivateDriverDataSize;
      if ( v22 < 4 || v22 != *v5 )
        goto LABEL_29;
      if ( qword_1C024F330 )
        v4 = qword_1C024F330();
      else
        v4 = -1073741637;
      if ( v4 < 0 )
        goto LABEL_16;
      v23 = (__int64 (__fastcall *)(_DWORD *))qword_1C024F338;
      if ( qword_1C024F338 )
        goto LABEL_60;
    }
    v4 = -1073741637;
    goto LABEL_15;
  }
  v16 = WdLogNewEntry5_WdLowResource();
  *(_QWORD *)(v16 + 24) = a1->PrivateDriverDataSize;
  WdLogEvent5_WdLowResource(v16);
  return 3221225495LL;
}
