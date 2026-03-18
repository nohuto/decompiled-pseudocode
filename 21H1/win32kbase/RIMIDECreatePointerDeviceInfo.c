/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C016FF48
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0047C60 (RIMGetVirtualDesktopPhysicalSize.c)
 *     RIMIsRunningOnDesktop @ 0x1C00657BC (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00A2D74 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C00B43F0 (DrvGetWDDMAdapterInfo.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01668BC (RIMGetDeviceLocationInfo.c)
 *     RIMGetPropertyCount @ 0x1C01673FC (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C01676B8 (RIMInitializeDeadzone.c)
 *     RIMIsParallelDevice @ 0x1C0167AE8 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C0168358 (RIMRetrieveLinkCollection.c)
 *     RIMPopulatePointerDevice @ 0x1C016A764 (RIMPopulatePointerDevice.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C016D120 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016D22C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C016F41C (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1C016F53C (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C016F8B0 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C0174104 (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01867BC (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0186A64 (RIMCmFreePointerDeviceContacts.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A8130 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AA0B4 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  char *v10; // r13
  __int128 v11; // xmm1
  struct _DEVICE_OBJECT *v12; // r12
  __int64 v13; // rdx
  char *v14; // rbx
  __int64 v15; // r8
  BOOL v16; // esi
  char *v17; // rcx
  int v18; // eax
  __int64 v19; // r12
  _QWORD *v20; // rdx
  __int64 v21; // r8
  unsigned int *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // ecx
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rax
  __int64 v35; // rax
  __int128 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  _QWORD *v43; // rbx
  __int64 v44; // [rsp+28h] [rbp-B9h]
  char *v46; // [rsp+48h] [rbp-99h] BYREF
  __int64 v47; // [rsp+50h] [rbp-91h]
  PVOID Object; // [rsp+58h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-81h] BYREF
  PDEVICE_OBJECT v50[3]; // [rsp+68h] [rbp-79h] BYREF
  _OWORD v51[3]; // [rsp+80h] [rbp-61h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-31h]
  __int128 v53; // [rsp+C0h] [rbp-21h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-11h] BYREF

  v5 = 0;
  v6 = *(_OWORD *)(a4 + 56);
  v51[0] = *(_OWORD *)(a4 + 40);
  v8 = *(_OWORD *)(a4 + 72);
  v51[1] = v6;
  v10 = 0LL;
  v11 = *(_OWORD *)(a4 + 88);
  v12 = 0LL;
  v47 = a3;
  v51[2] = v8;
  v53 = 0LL;
  *(_QWORD *)&v54 = a5;
  v46 = 0LL;
  Object = 0LL;
  v50[0] = 0LL;
  Handle = 0LL;
  v52 = v11;
  v14 = (char *)Win32AllocPoolZInit(0x4C8uLL, 0x63707352u);
  v16 = v14 == 0LL;
  if ( *(_DWORD *)(a4 + 40) == 851969 && !RIMIsRunningOnDesktop() )
    v16 = 1;
  if ( v16 )
    goto LABEL_9;
  v17 = *(char **)(a2 + 1328);
  if ( v17 )
  {
    v18 = RawInputManagerDeviceObjectResolveHandle(v17, 3u, 1, (PVOID *)&v46);
    v10 = v46;
    if ( v18 < 0 )
    {
      *(_QWORD *)(a2 + 1328) = 0LL;
LABEL_8:
      v16 = 1;
LABEL_9:
      v19 = a1;
      goto LABEL_10;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v46 + 296), v13, v15, &Handle, &Object, v50) < 0 )
      goto LABEL_8;
    v12 = v50[0];
  }
  *((_DWORD *)v14 + 78) |= 8u;
  *((_QWORD *)v14 + 109) = v14 + 864;
  *((_QWORD *)v14 + 108) = v14 + 864;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v14, (struct tagHIDDESC *)a4);
  rimIDECheckConfidenceSupport((__int64)v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  v25 = *((_DWORD *)v14 + 78);
  if ( (*(_DWORD *)(v47 + 12) & 2) != 0 )
  {
    *((_DWORD *)v14 + 78) = v25 | 0x2000;
    RIMIDECheckScanTimeSupport((__int64)v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v14 + 210) = -1;
    *((_DWORD *)v14 + 78) = v25 | 0x80;
  }
  *((_DWORD *)v14 + 186) = 500;
  *((_QWORD *)v14 + 94) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v10 )
  {
    v26 = *((_QWORD *)v10 + 69);
    if ( v26 )
    {
      *(_WORD *)(a4 + 110) = *(_WORD *)(v26 + 110);
      *(_WORD *)(a4 + 112) = *(_WORD *)(*((_QWORD *)v10 + 69) + 112LL);
      *(_WORD *)(a4 + 114) = *(_WORD *)(*((_QWORD *)v10 + 69) + 114LL);
    }
    if ( v12 )
      RIMGetDeviceLocationInfo(v12, a2 + 2104);
  }
  v27 = v47;
  *((_DWORD *)v14 + 180) = *(_DWORD *)(v47 + 88);
  *((_QWORD *)v14 + 112) = *(_QWORD *)(v27 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v28 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v14 + 41) = v28;
    if ( v28 )
    {
      *((_WORD *)v14 + 161) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)v14 + 20, (PCUNICODE_STRING)(a2 + 208));
      v27 = v47;
    }
    else
    {
      v27 = v47;
      v16 = 1;
    }
  }
  v29 = *((_DWORD *)v14 + 6);
  if ( ((v29 - 3) & 0xFFFFFFFA) != 0 || v29 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v14, 0, v52, *(_QWORD *)(a4 + 16)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 10, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
      }
      v16 = 1;
    }
    if ( v16 )
      goto LABEL_9;
  }
  else
  {
    *((_DWORD *)v14 + 190) = *(_DWORD *)(v27 + 128);
    v30 = Win32AllocPoolZInit(0x28uLL, 0x6A6E6952u);
    *((_QWORD *)v14 + 89) = v30;
    if ( !v30 )
      v16 = 1;
    if ( v16 )
      goto LABEL_9;
    v31 = *(_QWORD *)(a4 + 16);
    LODWORD(v46) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v14, v31, (unsigned int *)&v46) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(
                            (__int64)v14,
                            *(struct _HIDP_PREPARSED_DATA **)(a4 + 16),
                            (unsigned int)v46) )
      {
LABEL_37:
        v16 = 1;
        goto LABEL_9;
      }
      if ( LOWORD(v51[0]) == 5 )
      {
        if ( WORD1(v51[0]) != 13 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
        ++*((_DWORD *)v14 + 180);
        *((_DWORD *)v14 + 6) = 7;
        *((_DWORD *)v14 + 226) = 3;
      }
    }
    else
    {
      DbgPrintWarning("Serial Device found!");
      if ( (*((_DWORD *)v14 + 78) & 0x2000) != 0 )
        goto LABEL_37;
    }
  }
  v33 = *((_DWORD *)v14 + 78);
  if ( (v33 & 2) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v44) = *((_DWORD *)v14 + 6);
    WPP_RECORDER_SF_Dd(
      (__int64)gRimLog,
      4u,
      1u,
      0xBu,
      (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
      v44,
      -__CFSHR__(v33, 8));
  }
  if ( (int)RIMCmAllocPointerDeviceContacts(v14, 1785620818LL) < 0 )
    goto LABEL_37;
  v19 = a1;
  if ( !(unsigned int)RIMPopulatePointerDevice(a1, (__int64)v14, *(_QWORD *)(v54 + 32), (__int16 *)v51) )
    v16 = 1;
LABEL_10:
  v22 = RIMGetQDCActivePathsData((unsigned int *)&v53, v13, v15);
  if ( v16 )
    goto LABEL_74;
  v23 = v47;
  if ( (unsigned int)(*((_DWORD *)v14 + 6) - 6) <= 1 )
  {
    *(_QWORD *)(v47 + 80) = 0LL;
LABEL_13:
    v24 = 0LL;
    goto LABEL_14;
  }
  v34 = *(__int64 **)(v47 + 80);
  if ( !v34 )
    goto LABEL_13;
  v24 = *v34;
LABEL_14:
  *(_QWORD *)(a2 + 1344) = v24;
  if ( *(_QWORD *)(v23 + 80) )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    *(_DWORD *)(a2 + 1352) = 6;
    DrvGetWDDMAdapterInfo(
      *(_QWORD *)(*(_QWORD *)(v23 + 80) + 240LL),
      1,
      (struct _LUID *)(a2 + 1868),
      (_DWORD *)(a2 + 1876));
LABEL_61:
    rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v22, 0LL);
    goto LABEL_62;
  }
  if ( v10 )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v10 + 88), a2 + 1336);
    goto LABEL_61;
  }
LABEL_62:
  if ( (*((_DWORD *)v14 + 78) & 0x2000) == 0
    || *((_DWORD *)v14 + 37) - *((_DWORD *)v14 + 35) <= 1
    || *((_DWORD *)v14 + 38) - *((_DWORD *)v14 + 36) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1336) )
    {
      v35 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
      v36 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v54, v35);
    }
    else
    {
      v36 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v50);
    }
    v54 = *v36;
    *(_OWORD *)(v14 + 140) = v54;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v14, 0, (__int64)v22);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, v14);
  if ( (unsigned int)(*((_DWORD *)v14 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone()
    || LOWORD(v51[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v14) < 0 )
  {
    v16 = 1;
LABEL_74:
    if ( v14 )
    {
      v37 = *((_QWORD *)v14 + 89);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 24);
        if ( v38 )
          Win32FreePool(v38, (__int64)v20, v21);
      }
      RIMCmFreePointerDeviceContacts(v14, v20, v21);
      v41 = *((_QWORD *)v14 + 41);
      if ( v41 )
        Win32FreePool(v41, v39, v40);
      if ( *((_QWORD *)v14 + 125) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v14);
      Win32FreePool((__int64)v14, v39, v40);
    }
    goto LABEL_83;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_QWORD *)v14 + 92) = -1LL;
  *((_QWORD *)v14 + 2) = a2;
  *(_QWORD *)(a2 + 480) = v14;
  v43 = v14 + 864;
  v20 = *(_QWORD **)(v19 + 440);
  if ( *v20 != v19 + 432 )
    __fastfail(3u);
  *v43 = v19 + 432;
  v43[1] = v20;
  *v20 = v43;
  *(_QWORD *)(v19 + 440) = v43;
LABEL_83:
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v22, (__int64)v20, v21);
  LOBYTE(v5) = !v16;
  return v5;
}
