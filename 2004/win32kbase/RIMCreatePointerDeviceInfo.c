/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C015E948
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C000BD2C (RIMGetDeviceParent.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000CA18 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C000CF30 (RIMGetQDCActivePathsData.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0020888 (HMValidateSharedHandleNoRip.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0055BBC (RimDeviceTypeToRimInputTypeString.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMIsRunningOnDesktop @ 0x1C007118C (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C015DAC0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C015E0E0 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C015E4E4 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C015E918 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C015FFAC (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C016026C (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C016056C (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01606CC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0160E5C (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C01610AC (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C0161368 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C0161534 (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C0161684 (RIMIsEssentialUsage.c)
 *     RIMIsInputUsagePresent @ 0x1C0164230 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0165BE8 (rimHidP_GetSpecificValueCaps.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0166DD0 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0166EDC (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0167134 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0167AE8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C016DE50 (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0180ABC (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C0181CF8 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C0181DF4 (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C0182578 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A23D0 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C01CC9EC (ApiSetRetrieveCalibrationData.c)
 *     ApiSetValidateDeviceSignature @ 0x1C01CD88C (ApiSetValidateDeviceSignature.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // r14d
  int v28; // edx
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
  __int64 v42; // r9
  _QWORD *v43; // rcx
  int v44; // edx
  const wchar_t *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  _DWORD *v50; // rax
  __int64 v51; // r14
  __int64 v52; // rax
  _BYTE *v53; // rdx
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned int i; // r9d
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // xmm0_8
  __int64 v60; // r9
  __m128i *v61; // r14
  __int16 v62; // r15
  unsigned __int16 v63; // r15
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // rdx
  __m128i v67; // xmm1
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  __int16 v70; // ax
  __m128i v71; // xmm5
  __int64 v72; // xmm0_8
  __m128i v73; // xmm2
  __m128i v74; // xmm3
  __m128i v75; // xmm4
  __m128i v76; // xmm5
  __int64 v77; // xmm0_8
  __m128i v78; // xmm2
  __m128i v79; // xmm3
  __m128i v80; // xmm4
  bool v81; // cf
  unsigned int *v82; // rax
  int v83; // ecx
  unsigned int *v84; // rsi
  __int64 v85; // xmm0_8
  int v86; // edx
  int v87; // edx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // xmm0_8
  int v95; // edx
  __int64 v96; // rdx
  int v97; // edx
  int v98; // edx
  struct _DEVICE_OBJECT *v99; // rcx
  int v100; // edx
  int v101; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v102; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v103; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v104; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v105; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v106[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v107; // [rsp+70h] [rbp-90h] BYREF
  int v108; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v109; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *v110; // [rsp+90h] [rbp-70h] BYREF
  int v111; // [rsp+98h] [rbp-68h]
  unsigned int v112; // [rsp+9Ch] [rbp-64h]
  __m128i *v113; // [rsp+A0h] [rbp-60h]
  struct _DEVICE_OBJECT *v114; // [rsp+A8h] [rbp-58h]
  __int128 v115; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v116; // [rsp+C0h] [rbp-40h]
  __int128 v117; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v118[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v119; // [rsp+120h] [rbp+20h]
  _OWORD v120[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v121; // [rsp+170h] [rbp+70h]
  _OWORD v122[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v123; // [rsp+1C0h] [rbp+C0h]
  _DWORD v124[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v125[144]; // [rsp+220h] [rbp+120h] BYREF

  v7 = a3;
  v111 = -1;
  v108 = -1;
  v114 = (struct _DEVICE_OBJECT *)a5;
  v105 = a3;
  v103 = a1;
  *(_QWORD *)&v107 = a7;
  v106[0] = a6;
  v113 = 0LL;
  v102 = 0;
  memset(v125, 0, sizeof(v125));
  v104 = 0;
  v112 = 0;
  v116 = 0LL;
  v117 = 0LL;
  memset(v124, 0, 0x48uLL);
  v11 = Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225628LL;
  v14 = (__int64)v114;
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
    if ( (unsigned int)dword_1C0245170 > 5 && tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
    {
      v17 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v115 = L"Failed to retrieve productString";
      v110 = *(const WCHAR **)(a2 + 216);
      v109 = RimDeviceTypeToRimInputTypeString(a2, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_1C02164C9,
        v19,
        v20,
        &v109,
        &v110,
        (const WCHAR **)&v115);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(v14, a2 + 2104) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
  v25 = *a4;
  v115 = *(_OWORD *)(v12 + 320);
  if ( (unsigned int)RIMIsDeviceExcluded(v25, &v115) )
    goto LABEL_20;
  v26 = *(_DWORD *)(a1 + 84);
  v27 = 1;
  if ( (v26 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(v12 + 24) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v28, 1, 15, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_20;
    }
    if ( *a4 == 1 )
    {
      *(_DWORD *)(v12 + 24) = 6;
      if ( RIMIsRunningOnDesktop() )
        goto LABEL_20;
      goto LABEL_66;
    }
  }
  if ( (v26 & 0x18) == 0 || (unsigned __int16)(*a4 - 4) > 1u )
  {
    if ( (v26 & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
      goto LABEL_66;
    v27 = 0;
    goto LABEL_65;
  }
  *(_DWORD *)(v12 + 24) = 1;
  v30 = RIMAssignTouchType(v12, (__int64)v7);
  if ( v30 != -1073741668 )
  {
    if ( *a4 == 5 )
    {
      v112 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = 7;
    }
    v36 = *(_DWORD *)(v103 + 84);
    if ( (v36 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
      v27 = 0;
    if ( (v36 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
      v27 = 0;
    if ( (v36 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
      v27 = 0;
    if ( !v27 )
    {
      v30 = RIMGetMaxCountFeatureDetails(a2, v103, v12, (_DWORD)v7, (__int64)a4, (__int64)v114, (__int64)v106[0]);
      if ( v30 == -1073741668 )
      {
        if ( (unsigned int)dword_1C0245170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
          goto LABEL_50;
        v37 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v107 = L"Failed to get max count feature details";
        v106[0] = *(const WCHAR **)(a2 + 216);
        v32 = RimDeviceTypeToRimInputTypeString(a2, v37);
        goto LABEL_49;
      }
LABEL_20:
      v102 = 1;
      if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v124, (__int64)&v102, (__int64)v7) >= 0 )
      {
        if ( v124[10] >= v124[11] || v124[10] < 0 || v124[11] < 0xFFFF )
        {
          if ( (unsigned int)dword_1C0245170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
            goto LABEL_73;
          v44 = *(unsigned __int8 *)(a2 + 48);
          *(_QWORD *)&v107 = L"Bad ScanTime minimum";
          v106[0] = *(const WCHAR **)(a2 + 216);
          v45 = RimDeviceTypeToRimInputTypeString(a2, v44);
          goto LABEL_72;
        }
        *(_DWORD *)(v12 + 312) |= 0x80u;
        *(_DWORD *)(v12 + 840) = v124[11];
      }
      v102 = 0;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                            0,
                            0,
                            *(unsigned __int16 *)(v12 + 728),
                            0,
                            0LL,
                            (__int64)&v102,
                            (__int64)v7);
      v30 = SpecificValueCaps;
      if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      {
        if ( (unsigned int)dword_1C0245170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
          goto LABEL_50;
        v31 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v107 = L"Coordinate usage missing";
        v106[0] = *(const WCHAR **)(a2 + 216);
        v32 = RimDeviceTypeToRimInputTypeString(a2, v31);
        goto LABEL_49;
      }
      v49 = 6LL;
      v50 = (_DWORD *)(v12 + 32);
      do
      {
        *v50 = -1;
        v50 += 4;
        --v49;
      }
      while ( v49 );
      if ( (int)RIMCmAllocPointerDeviceContacts(v12, 2020635474LL) < 0 )
        goto LABEL_50;
      if ( (*(_DWORD *)(v12 + 312) & 2) != 0 )
      {
        if ( *(_WORD *)(*(_QWORD *)(v12 + 712) + 8LL) )
        {
          v104 = 2;
          v30 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 712) + 8LL),
                  0,
                  (__int64)v125,
                  (__int64)&v104,
                  (__int64)v7);
          if ( v30 < 0 )
            goto LABEL_73;
        }
      }
      v51 = v102 + (unsigned int)v104;
      LODWORD(v115) = v102 + v104;
      v52 = Win32AllocPool(72 * v51, 0x78707352u);
      v113 = (__m128i *)v52;
      if ( !v52 )
        goto LABEL_50;
      v30 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 728), 0, v52, (__int64)&v102, (__int64)v7);
      if ( v30 < 0 )
        goto LABEL_50;
      if ( (*(_DWORD *)(v12 + 312) & 2) == 0
        && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 728), v102, v7)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v53) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v53, 1, 16, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
      }
      v55 = 0;
      if ( v104 )
      {
        v54 = v102;
        v53 = v125;
        for ( i = 0; i < 2; ++i )
        {
          if ( (unsigned int)v54 >= (unsigned int)v51 )
            break;
          v57 = (__int64)v113;
          v58 = 9 * v54;
          *(__m128i *)((char *)v113 + 8 * v58) = *(__m128i *)v53;
          *(_OWORD *)(v57 + 8 * v58 + 16) = *((_OWORD *)v53 + 1);
          *(_OWORD *)(v57 + 8 * v58 + 32) = *((_OWORD *)v53 + 2);
          *(_OWORD *)(v57 + 8 * v58 + 48) = *((_OWORD *)v53 + 3);
          v59 = *((_QWORD *)v53 + 8);
          v53 += 72;
          *(_QWORD *)(v57 + 8 * v58 + 64) = v59;
          v54 = (unsigned int)(v54 + 1);
        }
        v55 = 0;
      }
      LODWORD(v110) = 0;
      LODWORD(v109) = 0;
      if ( (_DWORD)v51 )
      {
        v60 = 1LL;
        v61 = v113 + 1;
        while ( v55 < 6 )
        {
          if ( *(_DWORD *)(v12 + 24) == 4 && !v61->m128i_i8[0] )
          {
            v30 = -1073741668;
            break;
          }
          v62 = *a4;
          if ( *a4 == 2 )
            v62 = v60;
          v63 = v61[2].m128i_i16[4] | ((v61[-1].m128i_i16[0] | (unsigned __int16)(16 * v62)) << 8);
          if ( (unsigned int)RIMIsEssentialUsage(v63, v53, v54, v60) )
          {
            v64 = (unsigned int)v109;
            v65 = 60LL * (unsigned int)v109;
            v66 = 16LL * (unsigned int)v109;
            *(_WORD *)(v65 + v12 + 352) = v61[-1].m128i_i16[0];
            *(_WORD *)(v65 + v12 + 364) = v61[2].m128i_i16[4];
            *(_DWORD *)(v65 + v12 + 356) = v61[-1].m128i_u8[2];
            *(_WORD *)(v65 + v12 + 362) = v61[-1].m128i_i16[5];
            *(_DWORD *)(v65 + v12 + 368) = v61->m128i_u8[0];
            *(_DWORD *)(v65 + v12 + 384) = v61[1].m128i_i32[2];
            *(_DWORD *)(v65 + v12 + 388) = v61[1].m128i_i32[3];
            *(_DWORD *)(v65 + v12 + 392) = v61[2].m128i_i32[0];
            *(_DWORD *)(v65 + v12 + 396) = v61[2].m128i_i32[1];
            *(_WORD *)(v65 + v12 + 408) = v61->m128i_i16[1];
            *(_DWORD *)(v12 + 16 * (v64 + 2)) = v64;
            *(_WORD *)(v66 + v12 + 28) = v61[-1].m128i_i16[0];
            *(_WORD *)(v66 + v12 + 30) = v61[2].m128i_i16[4];
            v67 = *v61;
            v118[0] = v61[-1];
            v68 = v61[1];
            v118[1] = v67;
            v69 = v61[2];
            v118[2] = v68;
            v119 = v61[3].m128i_i64[0];
            v118[3] = v69;
            RIMRetrieveNormalizationRange(v63, v118, v12 + v66 + 36);
            v70 = v61[2].m128i_i16[4];
            LODWORD(v109) = (_DWORD)v109 + 1;
            if ( v70 == 48 && v61[-1].m128i_i16[0] == 1 )
            {
              v71 = v61[2];
              v72 = v61[3].m128i_i64[0];
              v73 = v61[-1];
              v111 = (int)v110;
              v74 = *v61;
              v75 = v61[1];
              v121 = v72;
              v120[0] = v73;
              v120[1] = v74;
              v120[2] = v75;
              v120[3] = v71;
              *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v71, 4))
                                                      - _mm_cvtsi128_si32(v71)),
                                         v120)
                                     + 1;
              *(_DWORD *)(v12 + 124) = v61[1].m128i_i32[2];
              *(_DWORD *)(v12 + 132) = v61[1].m128i_i32[3] + 1;
              v70 = v61[2].m128i_i16[4];
            }
            if ( v70 == 49 && v61[-1].m128i_i16[0] == 1 )
            {
              v76 = v61[2];
              v77 = v61[3].m128i_i64[0];
              v78 = v61[-1];
              v108 = (int)v110;
              v79 = *v61;
              v80 = v61[1];
              v123 = v77;
              v122[0] = v78;
              v122[1] = v79;
              v122[2] = v80;
              v122[3] = v76;
              *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v76, 4))
                                                      - _mm_cvtsi128_si32(v76)),
                                         v122)
                                     + 1;
              *(_DWORD *)(v12 + 128) = v61[1].m128i_i32[2];
              *(_DWORD *)(v12 + 136) = v61[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v103, v12, v63);
          }
          else
          {
            v60 = 1LL;
          }
          v61 = (__m128i *)((char *)v61 + 72);
          v81 = (int)v60 + (int)v110 < (unsigned int)v115;
          LODWORD(v110) = v60 + (_DWORD)v110;
          v55 = (unsigned int)v109;
          if ( !v81 )
            break;
        }
        v7 = v105;
      }
      *(_DWORD *)(v12 + 724) = v55;
      if ( v30 < 0 )
        goto LABEL_50;
      if ( v111 == -1 || v108 == -1 )
      {
        if ( (unsigned int)dword_1C0245170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
          goto LABEL_73;
        v98 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v107 = L"coordinate usage missing";
        v106[0] = *(const WCHAR **)(a2 + 216);
        v45 = RimDeviceTypeToRimInputTypeString(a2, v98);
        goto LABEL_72;
      }
      if ( v113[2].m128i_i32[18 * v111 + 3] != v113[2].m128i_i32[18 * v111 + 2]
        && v113[2].m128i_i32[18 * v108 + 3] != v113[2].m128i_i32[18 * v108 + 2] )
      {
        v82 = RIMGetQDCActivePathsData((unsigned int *)&v117);
        v83 = *(_DWORD *)(v12 + 24);
        v84 = v82;
        v116 = v82;
        if ( v83 != 7 )
        {
          if ( v83 != 6 )
          {
            v108 = 0;
            *(_DWORD *)(a2 + 1336) = 1;
            RIMReadDigitizerToMonitorMappings(a2, a2 + 1336);
            rimFindMonitorForDigitizerWithQDCData(a2, v84, &v108);
            if ( *a4 == 4 )
            {
              v85 = *(_QWORD *)v107;
              DWORD2(v107) = *(_DWORD *)(v107 + 8);
              *(_QWORD *)&v107 = v85;
              if ( (int)ApiSetValidateDeviceSignature(
                          (_DWORD)v114,
                          v106[0],
                          (_DWORD)v7,
                          (_DWORD)a4,
                          v12,
                          (__int64)&v107,
                          v108) < 0 )
              {
                v30 = -1073741668;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v86) = 3;
                  WPP_RECORDER_SF_(
                    (_DWORD)gRimLog,
                    v86,
                    1,
                    17,
                    (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
                }
                if ( (unsigned int)dword_1C0245170 > 5 && tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
                {
                  v87 = *(unsigned __int8 *)(a2 + 48);
                  *(_QWORD *)&v107 = L"Failed to validate device signature";
                  v106[0] = *(const WCHAR **)(a2 + 216);
                  v105 = RimDeviceTypeToRimInputTypeString(a2, v87);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                    v88,
                    byte_1C02164C9,
                    v89,
                    v90,
                    &v105,
                    v106,
                    (const WCHAR **)&v107);
                }
                v38 = v103;
                goto LABEL_51;
              }
              v91 = *(_DWORD *)(v12 + 312);
              if ( (v91 & 0x100) == 0 )
                *(_DWORD *)(v12 + 312) = v91 & 0xFFFFFF7F;
            }
          }
          goto LABEL_128;
        }
        v94 = *(_QWORD *)v107;
        DWORD2(v107) = *(_DWORD *)(v107 + 8);
        *(_QWORD *)&v107 = v94;
        if ( (int)ApiSetValidateDeviceSignature((_DWORD)v114, v106[0], (_DWORD)v7, (_DWORD)a4, v12, (__int64)&v107, 0) >= 0 )
        {
LABEL_128:
          if ( *(_DWORD *)(v12 + 148) - *(_DWORD *)(v12 + 140) <= 1
            || *(_DWORD *)(v12 + 152) - *(_DWORD *)(v12 + 144) <= 1 )
          {
            v92 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
            *(_OWORD *)(v12 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v107, v92);
          }
          RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v12);
          RIMPopulateExtendedPointerDeviceProperties(a2, v12);
          if ( *(_DWORD *)(v12 + 24) != 7
            || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
          {
            v38 = v103;
            v30 = RIMGetDeviceButtons(v103, v12, (_DWORD)v7, (_DWORD)a4, v101);
            if ( v30 >= 0 )
            {
              if ( *(_DWORD *)(v12 + 24) != 7 )
              {
                v107 = *(_OWORD *)(a2 + 208);
                ApiSetRetrieveCalibrationData(v12, &v107);
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v93) = 3;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v93, 1, 18, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
            }
            if ( a4[1] == 13
              && *a4 == 2
              && (unsigned int)RIMIsInputUsagePresent(v7, v93, 91LL)
              && (unsigned int)RIMIsInputUsagePresent(v7, v96, 145LL) )
            {
              *(_DWORD *)(v12 + 312) |= 0x10000u;
            }
            goto LABEL_51;
          }
          goto LABEL_73;
        }
        v30 = -1073741668;
        if ( (unsigned int)dword_1C0245170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
          goto LABEL_50;
        v95 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v107 = L"Failed to validate device signature";
        v106[0] = *(const WCHAR **)(a2 + 216);
        v32 = RimDeviceTypeToRimInputTypeString(a2, v95);
LABEL_49:
        v105 = v32;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v33,
          byte_1C02164C9,
          v34,
          v35,
          &v105,
          v106,
          (const WCHAR **)&v107);
        goto LABEL_50;
      }
      if ( (unsigned int)dword_1C0245170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
      {
LABEL_73:
        v30 = -1073741668;
        goto LABEL_50;
      }
      v97 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v107 = L"coordinate range invalid";
      v106[0] = *(const WCHAR **)(a2 + 216);
      v45 = RimDeviceTypeToRimInputTypeString(a2, v97);
LABEL_72:
      v105 = v45;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v46,
        byte_1C02164C9,
        v47,
        v48,
        &v105,
        v106,
        (const WCHAR **)&v107);
      goto LABEL_73;
    }
LABEL_65:
    if ( v27 != 1 )
      goto LABEL_20;
LABEL_66:
    v30 = -1073741808;
  }
LABEL_50:
  v38 = v103;
LABEL_51:
  RIMFreeQDCActivePathsData((__int64)v116);
  if ( v113 )
    Win32FreePool((__int64)v113);
  if ( v30 < 0 )
    goto LABEL_162;
  if ( *(_DWORD *)(v12 + 24) == 7 )
    v30 = RIMValidatePTPProperties(v112, v12);
  if ( v30 < 0 )
  {
LABEL_162:
    if ( *(_QWORD *)(v12 + 736) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
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
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
    }
    *(_DWORD *)(v12 + 744) = 100;
    *(_QWORD *)(v12 + 752) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v12;
    *(_QWORD *)(v12 + 16) = a2;
    v43 = *(_QWORD **)(v38 + 440);
    if ( *v43 != v38 + 432 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 872) = v43;
    *(_QWORD *)(v12 + 864) = v38 + 432;
    *v43 = v12 + 864;
    v99 = v114;
    *(_QWORD *)(v38 + 440) = v12 + 864;
    *(_QWORD *)(v12 + 736) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v99, a2, (int)v12 + 864)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v100) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v100, 1, 19, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  return (unsigned int)v30;
}
