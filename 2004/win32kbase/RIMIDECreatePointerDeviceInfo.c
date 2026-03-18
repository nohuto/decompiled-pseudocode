/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x1C000CA18 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C000CF30 (RIMGetQDCActivePathsData.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0020888 (HMValidateSharedHandleNoRip.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0055420 (RIMGetVirtualDesktopPhysicalSize.c)
 *     RIMIsRunningOnDesktop @ 0x1C007118C (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C00A7820 (DrvGetWDDMAdapterInfo.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00AB3A0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00AECC4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00AEE94 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     RIMGetDeviceLocationInfo @ 0x1C016056C (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C01610AC (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C0161368 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C0161798 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C0162008 (RIMRetrieveLinkCollection.c)
 *     RIMPopulatePointerDevice @ 0x1C0164414 (RIMPopulatePointerDevice.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0166DD0 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0166EDC (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0167134 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0167AE8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C01690CC (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C01691EC (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C0169560 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C016DDDC (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0180ABC (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0180D64 (RIMCmFreePointerDeviceContacts.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A23D0 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A4354 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  char *v10; // r13
  __int128 v11; // xmm1
  struct _DEVICE_OBJECT *v12; // r12
  char *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  BOOL v16; // esi
  char *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  int v43; // edx
  __int64 *v44; // rax
  __int64 v45; // rax
  __int128 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  _QWORD *v51; // rbx
  _QWORD *v52; // rdx
  __int64 v53; // [rsp+28h] [rbp-B9h]
  char *v55; // [rsp+48h] [rbp-99h] BYREF
  __int64 v56; // [rsp+50h] [rbp-91h]
  PVOID Object; // [rsp+58h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-81h] BYREF
  PDEVICE_OBJECT v59[3]; // [rsp+68h] [rbp-79h] BYREF
  _OWORD v60[3]; // [rsp+80h] [rbp-61h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-31h]
  __int128 v62; // [rsp+C0h] [rbp-21h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-11h] BYREF

  v5 = 0;
  v6 = *(_OWORD *)(a4 + 56);
  v60[0] = *(_OWORD *)(a4 + 40);
  v8 = *(_OWORD *)(a4 + 72);
  v60[1] = v6;
  v10 = 0LL;
  v11 = *(_OWORD *)(a4 + 88);
  v12 = 0LL;
  v56 = a3;
  v60[2] = v8;
  v62 = 0LL;
  *(_QWORD *)&v63 = a5;
  v55 = 0LL;
  Object = 0LL;
  v59[0] = 0LL;
  Handle = 0LL;
  v61 = v11;
  v13 = (char *)Win32AllocPoolZInit(0x4C8uLL, 1668313938LL);
  v16 = v13 == 0LL;
  if ( *(_DWORD *)(a4 + 40) == 851969 && !RIMIsRunningOnDesktop() )
    v16 = 1;
  if ( v16 )
    goto LABEL_9;
  v17 = *(char **)(a2 + 1328);
  if ( v17 )
  {
    v18 = RawInputManagerDeviceObjectResolveHandle(v17, 3u, 1, (PVOID *)&v55);
    v10 = v55;
    if ( v18 < 0 )
    {
      *(_QWORD *)(a2 + 1328) = 0LL;
LABEL_8:
      v16 = 1;
LABEL_9:
      v21 = a1;
      goto LABEL_10;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v55 + 296), v19, v20, &Handle, &Object, v59) < 0 )
      goto LABEL_8;
    v12 = v59[0];
  }
  *((_DWORD *)v13 + 78) |= 8u;
  *((_QWORD *)v13 + 109) = v13 + 864;
  *((_QWORD *)v13 + 108) = v13 + 864;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v13, (struct tagHIDDESC *)a4, v14, v15);
  rimIDECheckConfidenceSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  v31 = *((_DWORD *)v13 + 78);
  if ( (*(_DWORD *)(v56 + 12) & 2) != 0 )
  {
    *((_DWORD *)v13 + 78) = v31 | 0x2000;
    RIMIDECheckScanTimeSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v13 + 210) = -1;
    *((_DWORD *)v13 + 78) = v31 | 0x80;
  }
  *((_DWORD *)v13 + 186) = 500;
  *((_QWORD *)v13 + 94) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v10 )
  {
    v32 = *((_QWORD *)v10 + 69);
    if ( v32 )
    {
      *(_WORD *)(a4 + 110) = *(_WORD *)(v32 + 110);
      *(_WORD *)(a4 + 112) = *(_WORD *)(*((_QWORD *)v10 + 69) + 112LL);
      *(_WORD *)(a4 + 114) = *(_WORD *)(*((_QWORD *)v10 + 69) + 114LL);
    }
    if ( v12 )
      RIMGetDeviceLocationInfo(v12, a2 + 2104, v29, v30);
  }
  v33 = v56;
  *((_DWORD *)v13 + 180) = *(_DWORD *)(v56 + 88);
  *((_QWORD *)v13 + 112) = *(_QWORD *)(v33 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v34 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v13 + 41) = v34;
    if ( v34 )
    {
      *((_WORD *)v13 + 161) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)v13 + 20, (PCUNICODE_STRING)(a2 + 208));
      v33 = v56;
    }
    else
    {
      v33 = v56;
      v16 = 1;
    }
  }
  v35 = *((_DWORD *)v13 + 6);
  if ( ((v35 - 3) & 0xFFFFFFFA) != 0 || v35 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v13, 0, v61, *(_QWORD *)(a4 + 16)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v43) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v43, 1, 10, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      }
      v16 = 1;
    }
    if ( v16 )
      goto LABEL_9;
  }
  else
  {
    *((_DWORD *)v13 + 190) = *(_DWORD *)(v33 + 128);
    v36 = Win32AllocPoolZInit(0x28uLL, 1785620818LL);
    *((_QWORD *)v13 + 89) = v36;
    if ( !v36 )
      v16 = 1;
    if ( v16 )
      goto LABEL_9;
    v37 = *(_QWORD *)(a4 + 16);
    LODWORD(v55) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v13, v37, (unsigned int *)&v55) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(
                            (__int64)v13,
                            *(struct _HIDP_PREPARSED_DATA **)(a4 + 16),
                            (unsigned int)v55) )
      {
LABEL_37:
        v16 = 1;
        goto LABEL_9;
      }
      if ( LOWORD(v60[0]) == 5 )
      {
        if ( WORD1(v60[0]) != 13 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
        ++*((_DWORD *)v13 + 180);
        *((_DWORD *)v13 + 6) = 7;
        *((_DWORD *)v13 + 226) = 3;
      }
    }
    else
    {
      DbgPrintWarning("Serial Device found!");
      if ( (*((_DWORD *)v13 + 78) & 0x2000) != 0 )
        goto LABEL_37;
    }
  }
  v42 = *((_DWORD *)v13 + 78);
  if ( (v42 & 2) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v53) = *((_DWORD *)v13 + 6);
    WPP_RECORDER_SF_Dd(
      (__int64)gRimLog,
      4u,
      1u,
      0xBu,
      (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
      v53,
      -__CFSHR__(v42, 8));
  }
  if ( (int)RIMCmAllocPointerDeviceContacts(v13, 1785620818LL) < 0 )
    goto LABEL_37;
  v21 = a1;
  if ( !(unsigned int)RIMPopulatePointerDevice(a1, (__int64)v13, *(_QWORD *)(v63 + 32), (__int16 *)v60) )
    v16 = 1;
LABEL_10:
  v25 = RIMGetQDCActivePathsData((unsigned int *)&v62);
  if ( v16 )
    goto LABEL_74;
  v26 = v56;
  if ( (unsigned int)(*((_DWORD *)v13 + 6) - 6) <= 1 )
  {
    *(_QWORD *)(v56 + 80) = 0LL;
LABEL_13:
    v27 = 0LL;
    goto LABEL_14;
  }
  v44 = *(__int64 **)(v56 + 80);
  if ( !v44 )
    goto LABEL_13;
  v27 = *v44;
LABEL_14:
  *(_QWORD *)(a2 + 1344) = v27;
  if ( *(_QWORD *)(v26 + 80) )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    *(_DWORD *)(a2 + 1352) = 6;
    DrvGetWDDMAdapterInfo(
      *(_QWORD *)(*(_QWORD *)(v26 + 80) + 240LL),
      1,
      (struct _LUID *)(a2 + 1868),
      (_DWORD *)(a2 + 1876));
LABEL_61:
    rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v25, 0LL, v28);
    goto LABEL_62;
  }
  if ( v10 )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v10 + 88), a2 + 1336, v23, v24);
    goto LABEL_61;
  }
LABEL_62:
  if ( (*((_DWORD *)v13 + 78) & 0x2000) == 0
    || *((_DWORD *)v13 + 37) - *((_DWORD *)v13 + 35) <= 1
    || *((_DWORD *)v13 + 38) - *((_DWORD *)v13 + 36) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1336) )
    {
      v45 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
      v46 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v63, v45);
    }
    else
    {
      v46 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v59);
    }
    v63 = *v46;
    *(_OWORD *)(v13 + 140) = v63;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v13, 0, (__int64)v25);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, v13);
  if ( (unsigned int)(*((_DWORD *)v13 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone()
    || LOWORD(v60[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13) < 0 )
  {
    v16 = 1;
LABEL_74:
    if ( v13 )
    {
      v47 = *((_QWORD *)v13 + 89);
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 24);
        if ( v48 )
          Win32FreePool(v48);
      }
      RIMCmFreePointerDeviceContacts(v13, v22, v23);
      v49 = *((_QWORD *)v13 + 41);
      if ( v49 )
        Win32FreePool(v49);
      if ( *((_QWORD *)v13 + 125) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13);
      Win32FreePool((__int64)v13);
    }
    goto LABEL_83;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_QWORD *)v13 + 92) = -1LL;
  *((_QWORD *)v13 + 2) = a2;
  *(_QWORD *)(a2 + 480) = v13;
  v51 = v13 + 864;
  v52 = *(_QWORD **)(v21 + 440);
  if ( *v52 != v21 + 432 )
    __fastfail(3u);
  *v51 = v21 + 432;
  v51[1] = v52;
  *v52 = v51;
  *(_QWORD *)(v21 + 440) = v51;
LABEL_83:
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v25);
  LOBYTE(v5) = !v16;
  return v5;
}
