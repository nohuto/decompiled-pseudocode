/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C0164C98
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     RIMGetDeviceParent @ 0x1C00222C4 (RIMGetDeviceParent.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMIsRunningOnDesktop @ 0x1C00657BC (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C0163E10 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C0164430 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C0164834 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0164C68 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C01662FC (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C01665BC (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01668BC (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0166A1C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C01671AC (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C01673FC (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01676B8 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C0167884 (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C01679D4 (RIMIsEssentialUsage.c)
 *     RIMIsInputUsagePresent @ 0x1C016A580 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C016D120 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016D22C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C0174178 (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01867BC (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01879F8 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0187AF4 (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C0188278 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A8130 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C01D296C (ApiSetRetrieveCalibrationData.c)
 *     ApiSetValidateDeviceSignature @ 0x1C01D380C (ApiSetValidateDeviceSignature.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        unsigned __int16 *a4,
        __int64 a5,
        const WCHAR *a6,
        __int64 a7)
{
  const WCHAR *v7; // r15
  _DWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v14; // r14
  int v15; // eax
  void *v16; // rdx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  int v26; // r14d
  int v27; // edx
  __int64 v28; // rdx
  int SpecificValueCaps; // eax
  int v30; // esi
  int v31; // edx
  const wchar_t *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ecx
  int v37; // edx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rcx
  int v43; // edx
  const wchar_t *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  _DWORD *v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  unsigned int v52; // eax
  unsigned int i; // r9d
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // xmm0_8
  __int64 v57; // r9
  __m128i *v58; // r14
  __int16 v59; // r15
  unsigned __int16 v60; // r15
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rdx
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __int16 v67; // ax
  __m128i v68; // xmm5
  __int64 v69; // xmm0_8
  __m128i v70; // xmm2
  __m128i v71; // xmm3
  __m128i v72; // xmm4
  __m128i v73; // xmm5
  __int64 v74; // xmm0_8
  __m128i v75; // xmm2
  __m128i v76; // xmm3
  __m128i v77; // xmm4
  bool v78; // cf
  unsigned int *v79; // rax
  int v80; // ecx
  unsigned int *v81; // rsi
  __int64 v82; // xmm0_8
  int v83; // edx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // xmm0_8
  int v90; // edx
  int v91; // edx
  int v92; // edx
  struct _DEVICE_OBJECT *v93; // rcx
  int v94; // edx
  int v95; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v96; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v97; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v98; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v99; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v100[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v101; // [rsp+70h] [rbp-90h] BYREF
  int v102; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v103; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *v104; // [rsp+90h] [rbp-70h] BYREF
  int v105; // [rsp+98h] [rbp-68h]
  unsigned int v106; // [rsp+9Ch] [rbp-64h]
  __m128i *v107; // [rsp+A0h] [rbp-60h]
  struct _DEVICE_OBJECT *v108; // [rsp+A8h] [rbp-58h]
  __int128 v109; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v110; // [rsp+C0h] [rbp-40h]
  __int128 v111; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v112[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v113; // [rsp+120h] [rbp+20h]
  _OWORD v114[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v115; // [rsp+170h] [rbp+70h]
  _OWORD v116[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v117; // [rsp+1C0h] [rbp+C0h]
  _DWORD v118[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v119[144]; // [rsp+220h] [rbp+120h] BYREF

  v7 = a3;
  v105 = -1;
  v102 = -1;
  v108 = (struct _DEVICE_OBJECT *)a5;
  v99 = a3;
  v97 = a1;
  *(_QWORD *)&v101 = a7;
  v100[0] = a6;
  v107 = 0LL;
  v96 = 0;
  memset(v119, 0, sizeof(v119));
  v98 = 0;
  v106 = 0;
  v110 = 0LL;
  v111 = 0LL;
  memset(v118, 0, 0x48uLL);
  v11 = Win32AllocPoolZInit(0x4C8uLL, 0x63707352u);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225628LL;
  v14 = (__int64)v108;
  v11[180] = 1;
  *((_QWORD *)v11 + 109) = v11 + 216;
  *((_QWORD *)v11 + 108) = v11 + 216;
  v15 = RIMGetProductString(v11, v14, a6);
  v16 = &WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v16, 1, 14, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
    if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
    {
      v17 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v109 = L"Failed to retrieve productString";
      v104 = *(const WCHAR **)(a2 + 216);
      v103 = RimDeviceTypeToRimInputTypeString(a2, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_1C021C039,
        v19,
        v20,
        &v103,
        &v104,
        (const WCHAR **)&v109);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(v14, a2 + 2104) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  v22 = *a4;
  v109 = *(_OWORD *)(v12 + 320);
  v23 = RIMIsDeviceExcluded(v22, &v109);
  v24 = 4LL;
  if ( v23 )
    goto LABEL_20;
  v25 = *(_DWORD *)(a1 + 84);
  v26 = 1;
  if ( (v25 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(v12 + 24) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v27, 1, 15, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_20;
    }
    v28 = 1LL;
    if ( *a4 == 1 )
    {
      *(_DWORD *)(v12 + 24) = 6;
      if ( RIMIsRunningOnDesktop() )
        goto LABEL_20;
      goto LABEL_69;
    }
  }
  else
  {
    v28 = 1LL;
  }
  if ( (v25 & 0x18) == 0 || (unsigned __int16)(*a4 - 4) > 1u )
  {
    if ( (v25 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
      goto LABEL_69;
    v26 = 0;
    goto LABEL_68;
  }
  *(_DWORD *)(v12 + 24) = 1;
  v30 = RIMAssignTouchType(v12, (__int64)v7);
  if ( v30 != -1073741668 )
  {
    if ( *a4 == 5 )
    {
      v106 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = 7;
    }
    v24 = 1LL;
    v36 = *(_DWORD *)(v97 + 84);
    if ( (v36 & 4) != 0 )
    {
      v28 = 0LL;
      if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
        v26 = 0;
    }
    else
    {
      v28 = 0LL;
    }
    if ( (v36 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
      v26 = 0;
    if ( (v36 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
      v26 = 0;
    if ( !v26 )
    {
      v30 = RIMGetMaxCountFeatureDetails(a2, v97, v12, (_DWORD)v7, (__int64)a4, (__int64)v108, (__int64)v100[0]);
      if ( v30 == -1073741668 )
      {
        if ( (unsigned int)dword_1C024B170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
          goto LABEL_53;
        v37 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v101 = L"Failed to get max count feature details";
        v100[0] = *(const WCHAR **)(a2 + 216);
        v32 = RimDeviceTypeToRimInputTypeString(a2, v37);
        goto LABEL_52;
      }
LABEL_20:
      v96 = 1;
      if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v118, (__int64)&v96, (__int64)v7) >= 0 )
      {
        if ( v118[10] >= v118[11] || v118[10] < 0 || v118[11] < 0xFFFF )
        {
          if ( (unsigned int)dword_1C024B170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
            goto LABEL_76;
          v43 = *(unsigned __int8 *)(a2 + 48);
          *(_QWORD *)&v101 = L"Bad ScanTime minimum";
          v100[0] = *(const WCHAR **)(a2 + 216);
          v44 = RimDeviceTypeToRimInputTypeString(a2, v43);
          goto LABEL_75;
        }
        *(_DWORD *)(v12 + 312) |= 0x80u;
        *(_DWORD *)(v12 + 840) = v118[11];
      }
      v96 = 0;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                            0,
                            0,
                            *(unsigned __int16 *)(v12 + 728),
                            0,
                            0LL,
                            (__int64)&v96,
                            (__int64)v7);
      v30 = SpecificValueCaps;
      if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      {
        if ( (unsigned int)dword_1C024B170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
          goto LABEL_53;
        v31 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v101 = L"Coordinate usage missing";
        v100[0] = *(const WCHAR **)(a2 + 216);
        v32 = RimDeviceTypeToRimInputTypeString(a2, v31);
        goto LABEL_52;
      }
      v48 = 6LL;
      v49 = (_DWORD *)(v12 + 32);
      do
      {
        *v49 = -1;
        v49 += 4;
        --v48;
      }
      while ( v48 );
      if ( (int)RIMCmAllocPointerDeviceContacts(v12, 2020635474LL) < 0 )
        goto LABEL_53;
      if ( (*(_DWORD *)(v12 + 312) & 2) != 0 )
      {
        if ( *(_WORD *)(*(_QWORD *)(v12 + 712) + 8LL) )
        {
          v98 = 2;
          v30 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 712) + 8LL),
                  0,
                  (__int64)v119,
                  (__int64)&v98,
                  (__int64)v7);
          if ( v30 < 0 )
            goto LABEL_76;
        }
      }
      v50 = v96 + (unsigned int)v98;
      LODWORD(v109) = v96 + v98;
      v51 = Win32AllocPool(72 * v50, 0x78707352u);
      v107 = (__m128i *)v51;
      if ( !v51 )
        goto LABEL_53;
      v30 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 728), 0, v51, (__int64)&v96, (__int64)v7);
      if ( v30 < 0 )
        goto LABEL_53;
      if ( (*(_DWORD *)(v12 + 312) & 2) == 0
        && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 728), v96, v7)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v28, 1, 16, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
      }
      v52 = 0;
      if ( v98 )
      {
        v24 = v96;
        v28 = (__int64)v119;
        for ( i = 0; i < 2; ++i )
        {
          if ( (unsigned int)v24 >= (unsigned int)v50 )
            break;
          v54 = (__int64)v107;
          v55 = 9 * v24;
          *(__m128i *)((char *)v107 + 8 * v55) = *(__m128i *)v28;
          *(_OWORD *)(v54 + 8 * v55 + 16) = *(_OWORD *)(v28 + 16);
          *(_OWORD *)(v54 + 8 * v55 + 32) = *(_OWORD *)(v28 + 32);
          *(_OWORD *)(v54 + 8 * v55 + 48) = *(_OWORD *)(v28 + 48);
          v56 = *(_QWORD *)(v28 + 64);
          v28 += 72LL;
          *(_QWORD *)(v54 + 8 * v55 + 64) = v56;
          v24 = (unsigned int)(v24 + 1);
        }
        v52 = 0;
      }
      LODWORD(v104) = 0;
      LODWORD(v103) = 0;
      if ( (_DWORD)v50 )
      {
        v57 = 1LL;
        v58 = v107 + 1;
        while ( v52 < 6 )
        {
          if ( *(_DWORD *)(v12 + 24) == 4 && !v58->m128i_i8[0] )
          {
            v30 = -1073741668;
            break;
          }
          v59 = *a4;
          if ( *a4 == 2 )
            v59 = v57;
          v60 = v58[2].m128i_i16[4] | ((v58[-1].m128i_i16[0] | (unsigned __int16)(16 * v59)) << 8);
          if ( (unsigned int)RIMIsEssentialUsage(v60, v28, v24, v57) )
          {
            v61 = (unsigned int)v103;
            v62 = 60LL * (unsigned int)v103;
            v63 = 16LL * (unsigned int)v103;
            *(_WORD *)(v62 + v12 + 352) = v58[-1].m128i_i16[0];
            *(_WORD *)(v62 + v12 + 364) = v58[2].m128i_i16[4];
            *(_DWORD *)(v62 + v12 + 356) = v58[-1].m128i_u8[2];
            *(_WORD *)(v62 + v12 + 362) = v58[-1].m128i_i16[5];
            *(_DWORD *)(v62 + v12 + 368) = v58->m128i_u8[0];
            *(_DWORD *)(v62 + v12 + 384) = v58[1].m128i_i32[2];
            *(_DWORD *)(v62 + v12 + 388) = v58[1].m128i_i32[3];
            *(_DWORD *)(v62 + v12 + 392) = v58[2].m128i_i32[0];
            *(_DWORD *)(v62 + v12 + 396) = v58[2].m128i_i32[1];
            *(_WORD *)(v62 + v12 + 408) = v58->m128i_i16[1];
            *(_DWORD *)(v12 + 16 * (v61 + 2)) = v61;
            *(_WORD *)(v63 + v12 + 28) = v58[-1].m128i_i16[0];
            *(_WORD *)(v63 + v12 + 30) = v58[2].m128i_i16[4];
            v64 = *v58;
            v112[0] = v58[-1];
            v65 = v58[1];
            v112[1] = v64;
            v66 = v58[2];
            v112[2] = v65;
            v113 = v58[3].m128i_i64[0];
            v112[3] = v66;
            RIMRetrieveNormalizationRange(v60, v112, v12 + v63 + 36);
            v67 = v58[2].m128i_i16[4];
            LODWORD(v103) = (_DWORD)v103 + 1;
            if ( v67 == 48 && v58[-1].m128i_i16[0] == 1 )
            {
              v68 = v58[2];
              v69 = v58[3].m128i_i64[0];
              v70 = v58[-1];
              v105 = (int)v104;
              v71 = *v58;
              v72 = v58[1];
              v115 = v69;
              v114[0] = v70;
              v114[1] = v71;
              v114[2] = v72;
              v114[3] = v68;
              *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v68, 4))
                                                      - _mm_cvtsi128_si32(v68)),
                                         v114)
                                     + 1;
              *(_DWORD *)(v12 + 124) = v58[1].m128i_i32[2];
              *(_DWORD *)(v12 + 132) = v58[1].m128i_i32[3] + 1;
              v67 = v58[2].m128i_i16[4];
            }
            if ( v67 == 49 && v58[-1].m128i_i16[0] == 1 )
            {
              v73 = v58[2];
              v74 = v58[3].m128i_i64[0];
              v75 = v58[-1];
              v102 = (int)v104;
              v76 = *v58;
              v77 = v58[1];
              v117 = v74;
              v116[0] = v75;
              v116[1] = v76;
              v116[2] = v77;
              v116[3] = v73;
              *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v73, 4))
                                                      - _mm_cvtsi128_si32(v73)),
                                         v116)
                                     + 1;
              *(_DWORD *)(v12 + 128) = v58[1].m128i_i32[2];
              *(_DWORD *)(v12 + 136) = v58[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v97, v12, v60);
          }
          else
          {
            v57 = 1LL;
          }
          v58 = (__m128i *)((char *)v58 + 72);
          v78 = (int)v57 + (int)v104 < (unsigned int)v109;
          LODWORD(v104) = v57 + (_DWORD)v104;
          v52 = (unsigned int)v103;
          if ( !v78 )
            break;
        }
        v7 = v99;
      }
      *(_DWORD *)(v12 + 724) = v52;
      if ( v30 < 0 )
        goto LABEL_53;
      if ( v105 == -1 || v102 == -1 )
      {
        if ( (unsigned int)dword_1C024B170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
          goto LABEL_76;
        v92 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v101 = L"coordinate usage missing";
        v100[0] = *(const WCHAR **)(a2 + 216);
        v44 = RimDeviceTypeToRimInputTypeString(a2, v92);
        goto LABEL_75;
      }
      v24 = (__int64)v107;
      v28 = 9LL * v105;
      if ( v107[2].m128i_i32[18 * v105 + 3] != v107[2].m128i_i32[18 * v105 + 2] )
      {
        v28 = 9LL * v102;
        if ( v107[2].m128i_i32[18 * v102 + 3] != v107[2].m128i_i32[18 * v102 + 2] )
        {
          v79 = RIMGetQDCActivePathsData((unsigned int *)&v111, v28, (__int64)v107);
          v80 = *(_DWORD *)(v12 + 24);
          v81 = v79;
          v110 = v79;
          if ( v80 != 7 )
          {
            if ( v80 != 6 )
            {
              v102 = 0;
              *(_DWORD *)(a2 + 1336) = 1;
              RIMReadDigitizerToMonitorMappings(a2, a2 + 1336);
              rimFindMonitorForDigitizerWithQDCData(a2, v81, &v102);
              if ( *a4 == 4 )
              {
                v82 = *(_QWORD *)v101;
                DWORD2(v101) = *(_DWORD *)(v101 + 8);
                *(_QWORD *)&v101 = v82;
                if ( (int)ApiSetValidateDeviceSignature(
                            (_DWORD)v108,
                            v100[0],
                            (_DWORD)v7,
                            (_DWORD)a4,
                            v12,
                            (__int64)&v101,
                            v102) < 0 )
                {
                  v30 = -1073741668;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v28) = 3;
                    WPP_RECORDER_SF_(
                      (_DWORD)gRimLog,
                      v28,
                      1,
                      17,
                      (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
                  }
                  if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
                  {
                    v83 = *(unsigned __int8 *)(a2 + 48);
                    *(_QWORD *)&v101 = L"Failed to validate device signature";
                    v100[0] = *(const WCHAR **)(a2 + 216);
                    v99 = RimDeviceTypeToRimInputTypeString(a2, v83);
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                      v84,
                      byte_1C021C039,
                      v85,
                      v86,
                      &v99,
                      v100,
                      (const WCHAR **)&v101);
                  }
                  v38 = v97;
                  goto LABEL_54;
                }
                v87 = *(_DWORD *)(v12 + 312);
                if ( (v87 & 0x100) == 0 )
                  *(_DWORD *)(v12 + 312) = v87 & 0xFFFFFF7F;
              }
            }
            goto LABEL_131;
          }
          v89 = *(_QWORD *)v101;
          DWORD2(v101) = *(_DWORD *)(v101 + 8);
          *(_QWORD *)&v101 = v89;
          if ( (int)ApiSetValidateDeviceSignature((_DWORD)v108, v100[0], (_DWORD)v7, (_DWORD)a4, v12, (__int64)&v101, 0) >= 0 )
          {
LABEL_131:
            if ( *(_DWORD *)(v12 + 148) - *(_DWORD *)(v12 + 140) <= 1
              || *(_DWORD *)(v12 + 152) - *(_DWORD *)(v12 + 144) <= 1 )
            {
              v88 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
              *(_OWORD *)(v12 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v101, v88);
            }
            RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v12);
            RIMPopulateExtendedPointerDeviceProperties(a2, v12);
            if ( *(_DWORD *)(v12 + 24) != 7
              || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
            {
              v38 = v97;
              v30 = RIMGetDeviceButtons(v97, v12, (_DWORD)v7, (_DWORD)a4, v95);
              if ( v30 >= 0 )
              {
                if ( *(_DWORD *)(v12 + 24) != 7 )
                {
                  v101 = *(_OWORD *)(a2 + 208);
                  ApiSetRetrieveCalibrationData(v12, &v101);
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v28) = 3;
                WPP_RECORDER_SF_((_DWORD)gRimLog, v28, 1, 18, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
              }
              if ( a4[1] == 13
                && *a4 == 2
                && (unsigned int)RIMIsInputUsagePresent(v7, v28, 91LL)
                && (unsigned int)RIMIsInputUsagePresent(v7, v28, 145LL) )
              {
                *(_DWORD *)(v12 + 312) |= 0x10000u;
              }
              goto LABEL_54;
            }
            goto LABEL_76;
          }
          v30 = -1073741668;
          if ( (unsigned int)dword_1C024B170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
            goto LABEL_53;
          v90 = *(unsigned __int8 *)(a2 + 48);
          *(_QWORD *)&v101 = L"Failed to validate device signature";
          v100[0] = *(const WCHAR **)(a2 + 216);
          v32 = RimDeviceTypeToRimInputTypeString(a2, v90);
LABEL_52:
          v99 = v32;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
            v33,
            byte_1C021C039,
            v34,
            v35,
            &v99,
            v100,
            (const WCHAR **)&v101);
          goto LABEL_53;
        }
      }
      if ( (unsigned int)dword_1C024B170 <= 5 || !tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
      {
LABEL_76:
        v30 = -1073741668;
        goto LABEL_53;
      }
      v91 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v101 = L"coordinate range invalid";
      v100[0] = *(const WCHAR **)(a2 + 216);
      v44 = RimDeviceTypeToRimInputTypeString(a2, v91);
LABEL_75:
      v99 = v44;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v45,
        byte_1C021C039,
        v46,
        v47,
        &v99,
        v100,
        (const WCHAR **)&v101);
      goto LABEL_76;
    }
LABEL_68:
    if ( v26 != 1 )
      goto LABEL_20;
LABEL_69:
    v30 = -1073741808;
  }
LABEL_53:
  v38 = v97;
LABEL_54:
  RIMFreeQDCActivePathsData((__int64)v110, v28, v24);
  if ( v107 )
    Win32FreePool((__int64)v107, v39, v41);
  if ( v30 < 0 )
    goto LABEL_165;
  if ( *(_DWORD *)(v12 + 24) == 7 )
    v30 = RIMValidatePTPProperties(v106, v12);
  if ( v30 < 0 )
  {
LABEL_165:
    if ( *(_QWORD *)(v12 + 736) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
    RIMFreePointerDevice(v38);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(v38 + 532) += *(_DWORD *)(v12 + 720);
      *(_DWORD *)(v12 + 312) |= 0x400u;
      if ( *(_DWORD *)(v38 + 532) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
    }
    *(_DWORD *)(v12 + 744) = 100;
    *(_QWORD *)(v12 + 752) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v12;
    *(_QWORD *)(v12 + 16) = a2;
    v42 = *(_QWORD **)(v38 + 440);
    if ( *v42 != v38 + 432 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 872) = v42;
    *(_QWORD *)(v12 + 864) = v38 + 432;
    *v42 = v12 + 864;
    v93 = v108;
    *(_QWORD *)(v38 + 440) = v12 + 864;
    *(_QWORD *)(v12 + 736) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v93, a2, (int)v12 + 864)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v94) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v94, 1, 19, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  return (unsigned int)v30;
}
