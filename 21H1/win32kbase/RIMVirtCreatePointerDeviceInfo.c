/*
 * XREFs of RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18
 * Callers:
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     RIMGetDeviceParent @ 0x1C00222C4 (RIMGetDeviceParent.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMIsRunningOnDesktop @ 0x1C00657BC (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x1C0163E10 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     rimSetupPalmTelemetry @ 0x1C0164430 (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1C01662FC (RIMFreePointerDevice.c)
 *     RIMInitializeDeadzone @ 0x1C01676B8 (RIMInitializeDeadzone.c)
 *     RIMIsDeviceExcluded @ 0x1C0167884 (RIMIsDeviceExcluded.c)
 *     RIMVirtAssignTouchType @ 0x1C01688F4 (RIMVirtAssignTouchType.c)
 *     RIMVirtGetDeviceButtons @ 0x1C016944C (RIMVirtGetDeviceButtons.c)
 *     RIMVirtGetProductString @ 0x1C0169610 (RIMVirtGetProductString.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C016D120 (RIMGetMonitorPhysicalSize.c)
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01867BC (RIMCmAllocPointerDeviceContacts.c)
 *     RIMValidatePTPProperties @ 0x1C0188278 (RIMValidatePTPProperties.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A8130 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ApiSetRetrieveCalibrationData @ 0x1C01D296C (ApiSetRetrieveCalibrationData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMVirtCreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int16 *a4, ...)
{
  __int16 *v6; // rsi
  char *v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // r12
  __int64 v12; // rdx
  int ProductString; // r15d
  _UNKNOWN **v14; // rdx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v19; // cx
  BOOL v20; // eax
  __int64 v21; // r8
  int v22; // ecx
  int v23; // esi
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rcx
  _DWORD *v27; // rax
  struct _UNICODE_STRING *v28; // r9
  __int64 v29; // r8
  _DWORD *v30; // rdx
  _WORD *v31; // rcx
  __int64 v32; // r10
  __int16 v33; // ax
  int Buffer; // eax
  struct _UNICODE_STRING v35; // xmm1
  struct _UNICODE_STRING v36; // xmm0
  int v37; // eax
  __int64 v38; // rdx
  unsigned int *v39; // rax
  unsigned int v40; // ecx
  unsigned int v41; // edx
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  int v45; // eax
  __int128 v46; // xmm0
  struct _UNICODE_STRING v47; // xmm1
  struct _UNICODE_STRING v48; // xmm0
  struct _UNICODE_STRING v49; // xmm1
  struct _UNICODE_STRING v50; // xmm0
  struct _UNICODE_STRING v51; // xmm1
  struct _UNICODE_STRING v52; // xmm0
  int v53; // ecx
  struct _UNICODE_STRING v54; // xmm1
  int v55; // eax
  __int64 v56; // xmm0_8
  int v57; // ecx
  __int64 v58; // rcx
  int v59; // r8d
  _QWORD *v60; // rdx
  int v61; // edx
  struct _UNICODE_STRING v62[8]; // [rsp+48h] [rbp-89h] BYREF
  unsigned int *v63; // [rsp+C8h] [rbp-9h]
  const WCHAR *v64; // [rsp+D0h] [rbp-1h] BYREF
  __int128 v65[4]; // [rsp+D8h] [rbp+7h] BYREF
  unsigned int v66; // [rsp+138h] [rbp+67h]
  const WCHAR *v68; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 v70; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v68 = va_arg(va1, const WCHAR *);
  v70 = va_arg(va1, _QWORD);
  v66 = 0;
  v63 = 0LL;
  v65[0] = 0LL;
  v6 = a4;
  v7 = (char *)Win32AllocPoolZInit(0x4C8uLL, 0x63707352u);
  v8 = (__int64)v7;
  if ( !v7 )
    return 3221225628LL;
  v10 = v70;
  v11 = v7 + 864;
  v12 = v70;
  *((_DWORD *)v7 + 180) = *(_DWORD *)(v70 + 1096);
  *((_QWORD *)v7 + 109) = v7 + 864;
  *((_QWORD *)v7 + 108) = v7 + 864;
  ProductString = RIMVirtGetProductString(v7, v12);
  v14 = &WPP_RECORDER_INITIALIZED;
  if ( ProductString < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v14, 1, 44, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
    if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
    {
      v15 = *(unsigned __int8 *)(a2 + 48);
      v68 = L"Failed to retrieve productString";
      v64 = *(const WCHAR **)(a2 + 216);
      *(_QWORD *)&v62[0].Length = RimDeviceTypeToRimInputTypeString(a2, v15);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v16,
        byte_1C021BF4E,
        v17,
        v18,
        (const WCHAR **)v62,
        &v64,
        (const WCHAR **)va);
    }
  }
  *(_OWORD *)(a2 + 2104) = *(_OWORD *)(v10 + 1316);
  *(_OWORD *)(a2 + 2120) = *(_OWORD *)(v10 + 1332);
  *(_OWORD *)(a2 + 2136) = *(_OWORD *)(v10 + 1348);
  *(_OWORD *)(a2 + 2152) = *(_OWORD *)(v10 + 1364);
  *(_OWORD *)(a2 + 2168) = *(_OWORD *)(v10 + 1380);
  *(_OWORD *)(a2 + 2184) = *(_OWORD *)(v10 + 1396);
  *(_OWORD *)(a2 + 2200) = *(_OWORD *)(v10 + 1412);
  *(_OWORD *)(a2 + 2216) = *(_OWORD *)(v10 + 1428);
  *(_QWORD *)(a2 + 2232) = *(_QWORD *)(v10 + 1444);
  v19 = *v6;
  v62[0] = *(struct _UNICODE_STRING *)(v8 + 320);
  v20 = RIMIsDeviceExcluded(v19, v62);
  v21 = 0LL;
  if ( v20 )
    goto LABEL_17;
  v22 = *(_DWORD *)(a1 + 84);
  v23 = 1;
  v24 = (__int64)a4;
  if ( (v22 & 4) != 0 )
  {
    if ( *a4 == 2 )
    {
      *(_DWORD *)(v8 + 24) = 5;
      rimSetupPalmTelemetry(a1);
      if ( (int)RIMInitializeDeadzone() < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v25, 1, 45, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
        }
        gDeviceArbitrationType = 1;
      }
      goto LABEL_16;
    }
    if ( *a4 == 1 )
    {
      *(_DWORD *)(v8 + 24) = 6;
      if ( RIMIsRunningOnDesktop() )
        goto LABEL_16;
      goto LABEL_57;
    }
  }
  if ( (v22 & 0x18) != 0 && (unsigned __int16)(*a4 - 4) <= 1u )
  {
    *(_DWORD *)(v8 + 24) = 1;
    ProductString = RIMVirtAssignTouchType(v8, (__int64)a4, v10);
    if ( ProductString == -1073741668 )
      goto LABEL_63;
    v24 = 5LL;
    if ( *a4 == 5 )
    {
      v66 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 24) = 7;
    }
    v62[1] = *(struct _UNICODE_STRING *)(v10 + 436);
    v62[2] = *(struct _UNICODE_STRING *)(v10 + 452);
    v54 = v62[2];
    *(_QWORD *)&v62[3].Length = *(_QWORD *)(v10 + 468);
    v55 = *(_DWORD *)(v10 + 476);
    *(struct _UNICODE_STRING *)(v8 + 268) = v62[1];
    v56 = *(_QWORD *)&v62[3].Length;
    *(struct _UNICODE_STRING *)(v8 + 284) = v54;
    *(_QWORD *)(v8 + 300) = v56;
    *(_DWORD *)(v8 + 308) = v55;
    v57 = *(_DWORD *)(a1 + 84);
    if ( (v57 & 4) != 0 )
    {
      v21 = 0LL;
      if ( (unsigned int)(*(_DWORD *)(v8 + 24) - 5) <= 1 )
        v23 = 0;
    }
    else
    {
      v21 = 0LL;
    }
    if ( (v57 & 8) != 0 && *(_DWORD *)(v8 + 24) == 7 )
      v23 = 0;
    if ( (v57 & 0x10) != 0 && (unsigned int)(*(_DWORD *)(v8 + 24) - 1) <= 3 )
      v23 = 0;
    if ( !v23 )
    {
      *(_DWORD *)(v8 + 720) = *(_DWORD *)(v10 + 1096);
      *(_DWORD *)(v8 + 904) = *(_DWORD *)(v10 + 1248);
    }
    ProductString = 0;
    goto LABEL_56;
  }
  if ( (v22 & 0x20) != 0 && (*(_DWORD *)(a2 + 184) & 0x4000) != 0 )
  {
    v23 = 0;
LABEL_56:
    if ( v23 != 1 )
    {
LABEL_16:
      v6 = a4;
LABEL_17:
      v26 = 6LL;
      *(_DWORD *)(v8 + 312) ^= (*(_DWORD *)(v8 + 312) ^ (*(_DWORD *)(v10 + 508) << 7)) & 0x80;
      *(_DWORD *)(v8 + 840) = *(_DWORD *)(v10 + 1200);
      v27 = (_DWORD *)(v8 + 32);
      do
      {
        *v27 = -1;
        v27 += 4;
        --v26;
      }
      while ( v26 );
      if ( (int)RIMCmAllocPointerDeviceContacts(v8, 2020635474LL) >= 0 )
      {
        v28 = (struct _UNICODE_STRING *)(v8 + 28);
        v29 = v8 + 352;
        v30 = (_DWORD *)(v10 + 212);
        v31 = (_WORD *)(v10 + 672);
        v32 = 6LL;
        do
        {
          *(_DWORD *)&v62[1].Length = (unsigned __int16)*(v31 - 4);
          *(_DWORD *)(&v62[1].MaximumLength + 1) = *((_DWORD *)v31 - 1);
          v33 = *v31;
          v31 += 32;
          LOWORD(v62[1].Buffer) = v33;
          WORD1(v62[1].Buffer) = *(v31 - 30);
          HIDWORD(v62[1].Buffer) = (unsigned __int16)*(v31 - 28);
          *(_DWORD *)&v62[2].Length = *((_DWORD *)v31 - 13);
          *(_DWORD *)(&v62[2].MaximumLength + 1) = (unsigned __int16)*(v31 - 24);
          v62[2].Buffer = *(PWSTR *)(v31 - 22);
          v62[3] = *(struct _UNICODE_STRING *)(v31 - 18);
          *(_QWORD *)&v62[4].Length = *(_QWORD *)(v31 - 10);
          LODWORD(v62[4].Buffer) = (unsigned __int16)*(v31 - 6);
          Buffer = (int)v62[4].Buffer;
          v35 = v62[2];
          *(struct _UNICODE_STRING *)v29 = v62[1];
          v36 = v62[3];
          *(struct _UNICODE_STRING *)(v29 + 16) = v35;
          *(_QWORD *)&v35.Length = *(_QWORD *)&v62[4].Length;
          *(struct _UNICODE_STRING *)(v29 + 32) = v36;
          *(_QWORD *)(v29 + 48) = *(_QWORD *)&v35.Length;
          *(_DWORD *)(v29 + 56) = Buffer;
          v29 += 60LL;
          v62[0].Length = *((_WORD *)v30 - 4);
          v62[0].MaximumLength = *((_WORD *)v30 - 2);
          v37 = *v30;
          v30 += 5;
          *(_DWORD *)(&v62[0].MaximumLength + 1) = v37;
          v62[0].Buffer = (PWSTR)*((_QWORD *)v30 - 2);
          *v28++ = v62[0];
          --v32;
        }
        while ( v32 );
        *(_BYTE *)(v8 + 776) = *(_BYTE *)(v8 + 356);
        *(_OWORD *)(v8 + 140) = *(_OWORD *)(v10 + 340);
        *(_OWORD *)(v8 + 124) = *(_OWORD *)(v10 + 324);
        v38 = *(_DWORD *)(v8 + 312) & 0xFFFF7FFF | (*(_DWORD *)(v10 + 540) != 0 ? 0x8000 : 0);
        *(_DWORD *)(v8 + 312) = v38;
        LODWORD(v38) = v38 & 0xFFFEFFFF;
        *(_DWORD *)(v8 + 312) = v38 | (*(_DWORD *)(v10 + 544) != 0 ? 0x10000 : 0);
        *(_DWORD *)(v8 + 724) = *(_DWORD *)(v10 + 1100);
        v39 = RIMGetQDCActivePathsData((unsigned int *)v65, v38, v29);
        v40 = *(_DWORD *)(v8 + 24) - 6;
        v63 = v39;
        v11 = (_QWORD *)(v8 + 864);
        if ( v40 > 1 )
        {
          *(_DWORD *)(a2 + 1336) = 1;
          *(_QWORD *)(a2 + 1868) = *(_QWORD *)(v10 + 1304);
          *(_DWORD *)(a2 + 1880) = *(_DWORD *)(v10 + 1312);
          LODWORD(v68) = 0;
          rimFindMonitorForDigitizerWithQDCData(a2, v39, (const WCHAR **)va);
          if ( *v6 == 4 )
          {
            v41 = *(_DWORD *)(v8 + 312) & 0xFFFFFEFF | (*(_DWORD *)(v10 + 512) != 0 ? 0x100 : 0);
            *(_DWORD *)(v8 + 312) = v41;
            *(_DWORD *)(v8 + 312) = v41 & 0xFFFFFF7F | (*(_DWORD *)(v10 + 508) != 0 ? 0x80 : 0);
          }
        }
        if ( *(_DWORD *)(v8 + 148) - *(_DWORD *)(v8 + 140) <= 1 || *(_DWORD *)(v8 + 152) - *(_DWORD *)(v8 + 144) <= 1 )
        {
          v42 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
          *(_OWORD *)(v8 + 140) = *(_OWORD *)RIMGetMonitorPhysicalSize(v62, v42);
        }
        memset(&v62[1], 0, 0x70uLL);
        v43 = *(_OWORD *)(v10 + 376);
        v44 = *(_OWORD *)(v10 + 392);
        *(_DWORD *)&v62[1].Length = *(_DWORD *)(v10 + 356);
        v45 = *(_DWORD *)(v10 + 424);
        *(_OWORD *)(&v62[2].MaximumLength + 1) = v43;
        *(_DWORD *)(&v62[5].MaximumLength + 1) = v45;
        v46 = *(_OWORD *)(v10 + 408);
        *(_OWORD *)(&v62[3].MaximumLength + 1) = v44;
        v47 = v62[2];
        *(_OWORD *)(&v62[4].MaximumLength + 1) = v46;
        *(struct _UNICODE_STRING *)(v8 + 156) = v62[1];
        v48 = v62[3];
        *(struct _UNICODE_STRING *)(v8 + 172) = v47;
        v49 = v62[4];
        *(struct _UNICODE_STRING *)(v8 + 188) = v48;
        v50 = v62[5];
        *(struct _UNICODE_STRING *)(v8 + 204) = v49;
        v51 = v62[6];
        *(struct _UNICODE_STRING *)(v8 + 220) = v50;
        v52 = v62[7];
        *(struct _UNICODE_STRING *)(v8 + 236) = v51;
        *(struct _UNICODE_STRING *)(v8 + 252) = v52;
        RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v8);
        if ( *(_DWORD *)(v8 + 24) == 7
          && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v8) < 0 )
        {
          ProductString = -1073741668;
        }
        else
        {
          ProductString = RIMVirtGetDeviceButtons(v53, v8, v21, (_DWORD)v6, v10);
          if ( ProductString >= 0 )
          {
            if ( *(_DWORD *)(v8 + 24) != 7 )
            {
              v62[0] = *(struct _UNICODE_STRING *)(a2 + 208);
              ApiSetRetrieveCalibrationData(v8, v62);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v24, 1, 46, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
          }
        }
      }
      goto LABEL_63;
    }
  }
LABEL_57:
  ProductString = -1073741808;
LABEL_63:
  RIMFreeQDCActivePathsData((__int64)v63, v24, v21);
  if ( ProductString < 0 )
    goto LABEL_81;
  if ( *(_DWORD *)(v8 + 24) == 7 )
    ProductString = RIMValidatePTPProperties(v66, v8);
  if ( ProductString < 0 )
  {
LABEL_81:
    if ( *(_QWORD *)(v8 + 736) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v58);
    RIMFreePointerDevice(a1, v8);
  }
  else
  {
    *(_DWORD *)(a2 + 200) |= 0x80u;
    if ( (unsigned int)(*(_DWORD *)(v8 + 24) - 1) <= 3 )
    {
      *(_DWORD *)(a1 + 532) += *(_DWORD *)(v8 + 720);
      *(_DWORD *)(v8 + 312) |= 0x400u;
      if ( *(_DWORD *)(a1 + 532) > 0xA00u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v58);
    }
    *(_DWORD *)(v8 + 744) = 100;
    *(_QWORD *)(v8 + 752) = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(a2 + 480) = v8;
    *(_QWORD *)(v8 + 16) = a2;
    v60 = *(_QWORD **)(a1 + 440);
    if ( *v60 != a1 + 432 )
      __fastfail(3u);
    v11[1] = v60;
    *v11 = a1 + 432;
    *v60 = v11;
    *(_QWORD *)(a1 + 440) = v11;
    *(_QWORD *)(v8 + 736) = -1LL;
    if ( !(unsigned int)RIMGetDeviceParent(0LL, a2, v59)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v61) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v61, 1, 47, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  return (unsigned int)ProductString;
}
