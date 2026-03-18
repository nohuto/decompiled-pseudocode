/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00421B8
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00421A0 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00422DC (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 *     GreIsInLowBox @ 0x1C0149710 (GreIsInLowBox.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C014E24C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
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
  __int64 v14; // rax
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  UINT v20; // eax
  __int64 (__fastcall *v21)(_DWORD *); // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  size_t v28; // r8
  char *v29; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v31; // [rsp+50h] [rbp-28h] BYREF
  char v32; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v33; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v33 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_7;
  v3 = (_DWORD *)PALLOCMEM2(PrivateDriverDataSize);
  v33 = v3;
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
        v21 = (__int64 (__fastcall *)(_DWORD *))qword_1C0252AE0;
LABEL_60:
        CurrentDpiInfoFromHDC = v21(v3);
        goto LABEL_14;
      }
      if ( !gbOSTestSigningEnabled )
      {
        v23 = (int)qword_1C0257078;
        if ( qword_1C0257078 )
          v23 = qword_1C0257078();
        if ( !v23 )
        {
          if ( !(unsigned int)GreIsInLowBox()
            || ((v32 = 0,
                 DestinationString = 0LL,
                 v31 = 0LL,
                 RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
                 RtlInitUnicodeString(&v31, L"shellDisplayManagement"),
                 (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v32) < 0)
             || !v32)
            && ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &v31, &v32) < 0 || !v32) )
          {
            v2 = -1073741790;
            v24 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v24 + 24) = -1073741790LL;
LABEL_72:
            WdLogEvent5_WdError(v24);
            goto LABEL_15;
          }
        }
      }
      if ( a1->PrivateDriverDataSize != 24 )
      {
        v2 = -1073741811;
        v24 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v24 + 24) = a1->PrivateDriverDataSize;
        *(_QWORD *)(v24 + 32) = -1073741811LL;
        goto LABEL_72;
      }
      if ( v3[5] >= 4u )
      {
        v2 = -1073741811;
        v24 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v24 + 24) = -1073741811LL;
        goto LABEL_72;
      }
      EnterCrit(0LL, 1LL);
      v25 = v3[5];
      v26 = v25 >> 1;
      LOBYTE(v26) = (v25 & 2) != 0;
      LOBYTE(v25) = v25 & 1;
      xxxDisplayDiagBlackScreenDetected(4, v25, v26, (_DWORD)v3 + 4, (__int64)v3);
      v2 = 0;
      UserSessionSwitchLeaveCrit(v27);
LABEL_15:
      if ( v2 >= 0 )
      {
        if ( !v3 )
          return (unsigned int)v2;
        v28 = a1->PrivateDriverDataSize;
        v29 = (char *)a1->pPrivateDriverData;
        if ( (unsigned __int64)&v29[v28] > MmUserProbeAddress || &v29[v28] <= v29 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v29, v3, v28);
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
        v19 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v19 + 24) = a1->Type;
        WdLogEvent5_WdError(v19);
        goto LABEL_29;
      }
      g_OutputDuplicationTestControl = *v3;
      goto LABEL_15;
    }
    v15 = Type - 1024;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_40;
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = (unsigned int)(v17 - 1);
        if ( (_DWORD)v18 )
        {
          if ( (_DWORD)v18 != 1 )
          {
LABEL_54:
            v22 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v22 + 24) = a1->Type;
            WdLogEvent5_WdError(v22);
LABEL_55:
            v2 = -1073741811;
            goto LABEL_15;
          }
          if ( a1->PrivateDriverDataSize != 6 )
            goto LABEL_29;
          *(_WORD *)v3 = gdmLogPixels;
          *((_WORD *)v3 + 1) = *(_WORD *)(PsGetCurrentProcessWin32Process(v18) + 284);
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
      if ( qword_1C0252A60 )
      {
        v3[1] = (unsigned __int8)qword_1C0252A60() != 0;
        goto LABEL_15;
      }
    }
    else
    {
      v20 = a1->PrivateDriverDataSize;
      if ( v20 < 4 || v20 != *v3 )
        goto LABEL_29;
      if ( qword_1C02572F0 )
        v2 = qword_1C02572F0();
      else
        v2 = -1073741637;
      if ( v2 < 0 )
        goto LABEL_16;
      v21 = (__int64 (__fastcall *)(_DWORD *))qword_1C02572F8;
      if ( qword_1C02572F8 )
        goto LABEL_60;
    }
    v2 = -1073741637;
    goto LABEL_15;
  }
  v14 = WdLogNewEntry5_WdLowResource();
  *(_QWORD *)(v14 + 24) = a1->PrivateDriverDataSize;
  WdLogEvent5_WdLowResource(v14);
  return 3221225495LL;
}
