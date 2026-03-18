/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1C015C3E8
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C0009F48 (RIMGetDeviceParent.c)
 *     RIMGetQDCActivePathsData @ 0x1C000CC40 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000E3A8 (RIMFreeQDCActivePathsData.c)
 *     RIMIsRunningOnDesktop @ 0x1C00369D0 (RIMIsRunningOnDesktop.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00B5C88 (RimDeviceTypeToRimInputTypeString.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00BBA08 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C015B560 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C015BB80 (rimSetupPalmTelemetry.c)
 *     RIMAssignTouchType @ 0x1C015BF84 (RIMAssignTouchType.c)
 *     RIMCheckPressureUsageStatus @ 0x1C015C3B8 (RIMCheckPressureUsageStatus.c)
 *     RIMFreePointerDevice @ 0x1C015DA4C (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1C015DD0C (RIMGetDeviceButtons.c)
 *     RIMGetDeviceLocationInfo @ 0x1C015E00C (RIMGetDeviceLocationInfo.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015E16C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E8FC (RIMGetProductString.c)
 *     RIMGetPropertyCount @ 0x1C015EB4C (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C015EE08 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C015EFD4 (RIMIsDeviceExcluded.c)
 *     RIMIsEssentialUsage @ 0x1C015F124 (RIMIsEssentialUsage.c)
 *     RIMIsInputUsagePresent @ 0x1C0161CD0 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163688 (rimHidP_GetSpecificValueCaps.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0164870 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016497C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165588 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C016B91C (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C017E68C (RIMCmAllocPointerDeviceContacts.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C017F8C8 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C017F9C4 (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1C0180148 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A0050 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C01CA66C (ApiSetRetrieveCalibrationData.c)
 *     ApiSetValidateDeviceSignature @ 0x1C01CB50C (ApiSetValidateDeviceSignature.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // ecx
  unsigned int *v86; // rsi
  __int64 v87; // xmm0_8
  int v88; // edx
  int v89; // edx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // xmm0_8
  int v97; // edx
  __int64 v98; // rdx
  int v99; // edx
  int v100; // edx
  struct _DEVICE_OBJECT *v101; // rcx
  int v102; // edx
  int v103; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v104; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v105; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v106; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v107; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v108[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v109; // [rsp+70h] [rbp-90h] BYREF
  int v110; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *v111; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *v112; // [rsp+90h] [rbp-70h] BYREF
  int v113; // [rsp+98h] [rbp-68h]
  unsigned int v114; // [rsp+9Ch] [rbp-64h]
  __m128i *v115; // [rsp+A0h] [rbp-60h]
  struct _DEVICE_OBJECT *v116; // [rsp+A8h] [rbp-58h]
  __int128 v117; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v118; // [rsp+C0h] [rbp-40h]
  __int128 v119; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v120[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v121; // [rsp+120h] [rbp+20h]
  _OWORD v122[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v123; // [rsp+170h] [rbp+70h]
  _OWORD v124[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v125; // [rsp+1C0h] [rbp+C0h]
  _DWORD v126[20]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v127[144]; // [rsp+220h] [rbp+120h] BYREF

  v7 = a3;
  v113 = -1;
  v110 = -1;
  v116 = (struct _DEVICE_OBJECT *)a5;
  v107 = a3;
  v105 = a1;
  *(_QWORD *)&v109 = a7;
  v108[0] = a6;
  v115 = 0LL;
  v104 = 0;
  memset(v127, 0, sizeof(v127));
  v106 = 0;
  v114 = 0;
  v118 = 0LL;
  v119 = 0LL;
  memset(v126, 0, 0x48uLL);
  v11 = Win32AllocPoolZInit(0x4C8uLL, 0x63707352u);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225628LL;
  v14 = (__int64)v116;
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
    if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
    {
      v17 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v117 = L"Failed to retrieve productString";
      v112 = *(const WCHAR **)(a2 + 216);
      v111 = RimDeviceTypeToRimInputTypeString(a2, v17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v18,
        byte_1C021465A,
        v19,
        v20,
        &v111,
        &v112,
        (const WCHAR **)&v117);
    }
  }
  if ( (int)RIMGetDeviceLocationInfo(v14, a2 + 2112) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
  v25 = *a4;
  v117 = *(_OWORD *)(v12 + 320);
  if ( (unsigned int)RIMIsDeviceExcluded(v25, &v117) )
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
      v114 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = 7;
    }
    v36 = *(_DWORD *)(v105 + 84);
    if ( (v36 & 4) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 5) <= 1 )
      v27 = 0;
    if ( (v36 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
      v27 = 0;
    if ( (v36 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
      v27 = 0;
    if ( !v27 )
    {
      v30 = RIMGetMaxCountFeatureDetails(a2, v105, v12, (_DWORD)v7, (__int64)a4, (__int64)v116, (__int64)v108[0]);
      if ( v30 == -1073741668 )
      {
        if ( (unsigned int)dword_1C0243170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
          goto LABEL_50;
        v37 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v109 = L"Failed to get max count feature details";
        v108[0] = *(const WCHAR **)(a2 + 216);
        v32 = RimDeviceTypeToRimInputTypeString(a2, v37);
        goto LABEL_49;
      }
LABEL_20:
      v104 = 1;
      if ( (int)rimHidP_GetSpecificValueCaps(0, 13, 0, 86, (__int64)v126, (__int64)&v104, (__int64)v7) >= 0 )
      {
        if ( v126[10] >= v126[11] || v126[10] < 0 || v126[11] < 0xFFFF )
        {
          if ( (unsigned int)dword_1C0243170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
            goto LABEL_73;
          v44 = *(unsigned __int8 *)(a2 + 48);
          *(_QWORD *)&v109 = L"Bad ScanTime minimum";
          v108[0] = *(const WCHAR **)(a2 + 216);
          v45 = RimDeviceTypeToRimInputTypeString(a2, v44);
          goto LABEL_72;
        }
        *(_DWORD *)(v12 + 312) |= 0x80u;
        *(_DWORD *)(v12 + 840) = v126[11];
      }
      v104 = 0;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                            0,
                            0,
                            *(unsigned __int16 *)(v12 + 728),
                            0,
                            0LL,
                            (__int64)&v104,
                            (__int64)v7);
      v30 = SpecificValueCaps;
      if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
      {
        if ( (unsigned int)dword_1C0243170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
          goto LABEL_50;
        v31 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v109 = L"Coordinate usage missing";
        v108[0] = *(const WCHAR **)(a2 + 216);
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
          v106 = 2;
          v30 = rimHidP_GetSpecificValueCaps(
                  0,
                  0,
                  *(unsigned __int16 *)(*(_QWORD *)(v12 + 712) + 8LL),
                  0,
                  (__int64)v127,
                  (__int64)&v106,
                  (__int64)v7);
          if ( v30 < 0 )
            goto LABEL_73;
        }
      }
      v51 = v104 + (unsigned int)v106;
      LODWORD(v117) = v104 + v106;
      v52 = Win32AllocPool(72 * v51, 0x78707352u);
      v115 = (__m128i *)v52;
      if ( !v52 )
        goto LABEL_50;
      v30 = rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v12 + 728), 0, v52, (__int64)&v104, (__int64)v7);
      if ( v30 < 0 )
        goto LABEL_50;
      if ( (*(_DWORD *)(v12 + 312) & 2) == 0
        && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 728), v104, v7)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v53) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v53, 1, 16, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
      }
      v55 = 0;
      if ( v106 )
      {
        v54 = v104;
        v53 = v127;
        for ( i = 0; i < 2; ++i )
        {
          if ( (unsigned int)v54 >= (unsigned int)v51 )
            break;
          v57 = (__int64)v115;
          v58 = 9 * v54;
          *(__m128i *)((char *)v115 + 8 * v58) = *(__m128i *)v53;
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
      LODWORD(v112) = 0;
      LODWORD(v111) = 0;
      if ( (_DWORD)v51 )
      {
        v60 = 1LL;
        v61 = v115 + 1;
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
            v64 = (unsigned int)v111;
            v65 = 60LL * (unsigned int)v111;
            v66 = 16LL * (unsigned int)v111;
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
            v120[0] = v61[-1];
            v68 = v61[1];
            v120[1] = v67;
            v69 = v61[2];
            v120[2] = v68;
            v121 = v61[3].m128i_i64[0];
            v120[3] = v69;
            RIMRetrieveNormalizationRange(v63, v120, v12 + v66 + 36);
            v70 = v61[2].m128i_i16[4];
            LODWORD(v111) = (_DWORD)v111 + 1;
            if ( v70 == 48 && v61[-1].m128i_i16[0] == 1 )
            {
              v71 = v61[2];
              v72 = v61[3].m128i_i64[0];
              v73 = v61[-1];
              v113 = (int)v112;
              v74 = *v61;
              v75 = v61[1];
              v123 = v72;
              v122[0] = v73;
              v122[1] = v74;
              v122[2] = v75;
              v122[3] = v71;
              *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v71, 4))
                                                      - _mm_cvtsi128_si32(v71)),
                                         v122)
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
              v110 = (int)v112;
              v79 = *v61;
              v80 = v61[1];
              v125 = v77;
              v124[0] = v78;
              v124[1] = v79;
              v124[2] = v80;
              v124[3] = v76;
              *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                         (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v76, 4))
                                                      - _mm_cvtsi128_si32(v76)),
                                         v124)
                                     + 1;
              *(_DWORD *)(v12 + 128) = v61[1].m128i_i32[2];
              *(_DWORD *)(v12 + 136) = v61[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v105, v12, v63);
          }
          else
          {
            v60 = 1LL;
          }
          v61 = (__m128i *)((char *)v61 + 72);
          v81 = (int)v60 + (int)v112 < (unsigned int)v117;
          LODWORD(v112) = v60 + (_DWORD)v112;
          v55 = (unsigned int)v111;
          if ( !v81 )
            break;
        }
        v7 = v107;
      }
      *(_DWORD *)(v12 + 724) = v55;
      if ( v30 < 0 )
        goto LABEL_50;
      if ( v113 == -1 || v110 == -1 )
      {
        if ( (unsigned int)dword_1C0243170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
          goto LABEL_73;
        v100 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v109 = L"coordinate usage missing";
        v108[0] = *(const WCHAR **)(a2 + 216);
        v45 = RimDeviceTypeToRimInputTypeString(a2, v100);
        goto LABEL_72;
      }
      if ( v115[2].m128i_i32[18 * v113 + 3] != v115[2].m128i_i32[18 * v113 + 2]
        && v115[2].m128i_i32[18 * v110 + 3] != v115[2].m128i_i32[18 * v110 + 2] )
      {
        v82 = RIMGetQDCActivePathsData((unsigned int *)&v119);
        v85 = *(_DWORD *)(v12 + 24);
        v86 = v82;
        v118 = v82;
        if ( v85 != 7 )
        {
          if ( v85 != 6 )
          {
            v110 = 0;
            *(_DWORD *)(a2 + 1344) = 1;
            RIMReadDigitizerToMonitorMappings(a2, a2 + 1344);
            rimFindMonitorForDigitizerWithQDCData(a2, v86, &v110);
            if ( *a4 == 4 )
            {
              v87 = *(_QWORD *)v109;
              DWORD2(v109) = *(_DWORD *)(v109 + 8);
              *(_QWORD *)&v109 = v87;
              if ( (int)ApiSetValidateDeviceSignature(
                          (_DWORD)v116,
                          v108[0],
                          (_DWORD)v7,
                          (_DWORD)a4,
                          v12,
                          (__int64)&v109,
                          v110) < 0 )
              {
                v30 = -1073741668;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v88) = 3;
                  WPP_RECORDER_SF_(
                    (_DWORD)gRimLog,
                    v88,
                    1,
                    17,
                    (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
                }
                if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
                {
                  v89 = *(unsigned __int8 *)(a2 + 48);
                  *(_QWORD *)&v109 = L"Failed to validate device signature";
                  v108[0] = *(const WCHAR **)(a2 + 216);
                  v107 = RimDeviceTypeToRimInputTypeString(a2, v89);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                    v90,
                    byte_1C021465A,
                    v91,
                    v92,
                    &v107,
                    v108,
                    (const WCHAR **)&v109);
                }
                v38 = v105;
                goto LABEL_51;
              }
              v93 = *(_DWORD *)(v12 + 312);
              if ( (v93 & 0x100) == 0 )
                *(_DWORD *)(v12 + 312) = v93 & 0xFFFFFF7F;
            }
          }
          goto LABEL_128;
        }
        v96 = *(_QWORD *)v109;
        DWORD2(v109) = *(_DWORD *)(v109 + 8);
        *(_QWORD *)&v109 = v96;
        if ( (int)ApiSetValidateDeviceSignature((_DWORD)v116, v108[0], (_DWORD)v7, (_DWORD)a4, v12, (__int64)&v109, 0) >= 0 )
        {
LABEL_128:
          if ( *(_DWORD *)(v12 + 148) - *(_DWORD *)(v12 + 140) <= 1
            || *(_DWORD *)(v12 + 152) - *(_DWORD *)(v12 + 144) <= 1 )
          {
            v94 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1352), 1LL, v83, v84);
            *(_OWORD *)(v12 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(&v109, v94);
          }
          RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v12);
          RIMPopulateExtendedPointerDeviceProperties(a2, v12);
          if ( *(_DWORD *)(v12 + 24) != 7
            || (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v12) >= 0 )
          {
            v38 = v105;
            v30 = RIMGetDeviceButtons(v105, v12, (_DWORD)v7, (_DWORD)a4, v103);
            if ( v30 >= 0 )
            {
              if ( *(_DWORD *)(v12 + 24) != 7 )
              {
                v109 = *(_OWORD *)(a2 + 208);
                ApiSetRetrieveCalibrationData(v12, &v109);
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v95) = 3;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v95, 1, 18, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
            }
            if ( a4[1] == 13
              && *a4 == 2
              && (unsigned int)RIMIsInputUsagePresent(v7, v95, 91LL)
              && (unsigned int)RIMIsInputUsagePresent(v7, v98, 145LL) )
            {
              *(_DWORD *)(v12 + 312) |= 0x10000u;
            }
            goto LABEL_51;
          }
          goto LABEL_73;
        }
        v30 = -1073741668;
        if ( (unsigned int)dword_1C0243170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
          goto LABEL_50;
        v97 = *(unsigned __int8 *)(a2 + 48);
        *(_QWORD *)&v109 = L"Failed to validate device signature";
        v108[0] = *(const WCHAR **)(a2 + 216);
        v32 = RimDeviceTypeToRimInputTypeString(a2, v97);
LABEL_49:
        v107 = v32;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v33,
          byte_1C021465A,
          v34,
          v35,
          &v107,
          v108,
          (const WCHAR **)&v109);
        goto LABEL_50;
      }
      if ( (unsigned int)dword_1C0243170 <= 5 || !tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
      {
LABEL_73:
        v30 = -1073741668;
        goto LABEL_50;
      }
      v99 = *(unsigned __int8 *)(a2 + 48);
      *(_QWORD *)&v109 = L"coordinate range invalid";
      v108[0] = *(const WCHAR **)(a2 + 216);
      v45 = RimDeviceTypeToRimInputTypeString(a2, v99);
LABEL_72:
      v107 = v45;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v46,
        byte_1C021465A,
        v47,
        v48,
        &v107,
        v108,
        (const WCHAR **)&v109);
      goto LABEL_73;
    }
LABEL_65:
    if ( v27 != 1 )
      goto LABEL_20;
LABEL_66:
    v30 = -1073741808;
  }
LABEL_50:
  v38 = v105;
LABEL_51:
  RIMFreeQDCActivePathsData((__int64)v118);
  if ( v115 )
    Win32FreePool((__int64)v115);
  if ( v30 < 0 )
    goto LABEL_162;
  if ( *(_DWORD *)(v12 + 24) == 7 )
    v30 = RIMValidatePTPProperties(v114, v12);
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
    v101 = v116;
    *(_QWORD *)(v38 + 440) = v12 + 864;
    *(_QWORD *)(v12 + 736) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(v101, a2, (int)v12 + 864)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v102) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v102, 1, 19, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  return (unsigned int)v30;
}
