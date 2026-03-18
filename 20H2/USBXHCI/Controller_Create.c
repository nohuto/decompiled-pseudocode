/*
 * XREFs of Controller_Create @ 0x1C006C504
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0071640 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00093AC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RtlStringCopyWorkerA @ 0x1C0015314 (RtlStringCopyWorkerA.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001536C (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_QuerySupportedDSMs @ 0x1C00157D0 (Controller_QuerySupportedDSMs.c)
 *     Device_IsSecureDevice @ 0x1C0015934 (Device_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1C0016A48 (DynamicLock_Create.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     RtlStringCchCopyA @ 0x1C002FD24 (RtlStringCchCopyA.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0033558 (Controller_ReferenceTrustletProcess.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006D074 (Controller_PopulateDeviceFlags.c)
 *     Controller_SetLogIdentifier @ 0x1C006DA58 (Controller_SetLogIdentifier.c)
 *     Controller_RetrievePciData @ 0x1C006DAF0 (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C006DE04 (Controller_GetDeviceEnumerator.c)
 *     Controller_CreateSecureObject @ 0x1C007591C (Controller_CreateSecureObject.c)
 *     Controller_RetrieveAcpiData @ 0x1C0075F20 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0076180 (Controller_RetrieveUrsData.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, void *); // rax
  __int64 v8; // rax
  bool IsSecureDevice; // al
  bool v10; // r13
  int v11; // r12d
  size_t v12; // rdx
  size_t *v13; // r8
  STRSAFE_PCNZCH v14; // r9
  int DeviceEnumerator; // eax
  int AcpiData; // ebx
  int v17; // r9d
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdi
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rbx
  int v24; // edx
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  size_t v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v31[24]; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+54h] [rbp-ACh]
  __int128 v34; // [rsp+58h] [rbp-A8h]
  void *v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  void *v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+88h] [rbp-78h] BYREF
  int v40; // [rsp+8Ch] [rbp-74h]
  __int64 v41; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v42[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall *v43)(__int64); // [rsp+A0h] [rbp-60h]
  __int128 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int128 v46; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-30h]
  __int128 v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int64 *v50; // [rsp+F8h] [rbp-8h]
  _QWORD v51[32]; // [rsp+100h] [rbp+0h] BYREF
  char pszSrc[8]; // [rsp+200h] [rbp+100h] BYREF
  char v53[4]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v54; // [rsp+20Ch] [rbp+10Ch]
  char v55; // [rsp+20Eh] [rbp+10Eh]
  __int128 v56; // [rsp+210h] [rbp+110h]
  __int128 v57; // [rsp+220h] [rbp+120h]
  char pszDest[16]; // [rsp+230h] [rbp+130h] BYREF

  v41 = -1LL;
  *(_DWORD *)&v31[4] = 0;
  *(_QWORD *)&v31[16] = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v56 = 0LL;
  v50 = a4;
  v57 = 0LL;
  v40 = a3;
  *(_OWORD *)pszDest = 0LL;
  v7 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616);
  v39 = 0;
  v8 = v7(WdfDriverGlobals, a1, off_1C00613D8);
  IsSecureDevice = Device_IsSecureDevice(v8);
  *(_QWORD *)&v56 = 48LL;
  v10 = IsSecureDevice;
  pszDest[0] = 0;
  *(_QWORD *)&v57 = 0LL;
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v53 = 0;
  v54 = 0;
  v55 = 0;
  v49 = 0LL;
  HIDWORD(v57) = 16;
  v46 = 0LL;
  BYTE8(v57) = 0;
  v47 = 0LL;
  *((_QWORD *)&v56 + 1) = 512LL;
  v48 = 0LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  v11 = 1;
  v35 = off_1C0061428;
  *(_QWORD *)v31 = 56LL;
  *(_QWORD *)&v31[8] = Controller_WdfEvtCleanupCallback;
  *(_QWORD *)&v31[16] = 0LL;
  v32 = 1;
  v33 = 1;
  v34 = 0LL;
  memset(v51, 0, 0xF8uLL);
  v51[0] = -4294967048LL;
  *(_QWORD *)((char *)&v51[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  LODWORD(v51[9]) = 0;
  BYTE4(v51[12]) = 0;
  BYTE1(v51[13]) = 0;
  BYTE6(v51[13]) = 0;
  WORD2(v51[10]) = 0;
  v51[11] = 0LL;
  LODWORD(v51[12]) = 0;
  RtlStringCopyWorkerA((NTSTRSAFE_PSTR)&v51[14] + 3, v12, v13, v14, v29);
  v51[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v51[4] = UsbDevice_UcxEvtDeviceAdd;
  v51[5] = Controller_UcxEvtReset;
  v51[1] = Controller_UcxEvtQueryUsbCapability;
  v51[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v51[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v51[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  if ( v10 )
  {
    memset(&v51[6], 0, 24);
  }
  else
  {
    v51[7] = Crashdump_UcxEvtGetDumpData;
    v51[8] = Crashdump_UcxEvtFreeDumpData;
    v51[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2);
  if ( !DeviceEnumerator )
  {
    AcpiData = Controller_RetrievePciData(a1, a2, &v46, &v41);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 95;
LABEL_8:
        v18 = 2;
LABEL_9:
        WPP_RECORDER_SF_d(a2, v18, 4, v17, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, AcpiData);
        return (unsigned int)AcpiData;
      }
      return (unsigned int)AcpiData;
    }
    goto LABEL_19;
  }
  if ( DeviceEnumerator == 1 )
  {
    v11 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v17 = 96;
      goto LABEL_14;
    }
  }
  else
  {
    AcpiData = Controller_RetrieveUrsData(
                 a1,
                 a2,
                 (unsigned int)&v39,
                 (unsigned int)pszSrc,
                 (__int64)&v46,
                 (__int64)&v41);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v17 = 97;
      goto LABEL_8;
    }
    v11 = v39;
    if ( v39 != 2 )
    {
LABEL_19:
      *(_QWORD *)((char *)&v51[9] + 4) = v46;
      WORD2(v51[10]) = WORD4(v46);
      v51[11] = __PAIR64__(v47, HIDWORD(v46));
      LODWORD(v51[12]) = DWORD1(v47);
      LODWORD(v51[9]) = 1;
      goto LABEL_21;
    }
  }
  LODWORD(v51[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v51[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v51[13] + 1, 5uLL, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v51[13] + 6, 5uLL, &v53[2]);
LABEL_21:
  v19 = v32;
  if ( v10 )
    v19 = 2;
  v32 = v19;
  AcpiData = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _BYTE *, __int64 *))qword_1C0062788)(
               UcxDriverGlobals,
               a1,
               v51,
               v31,
               &v30);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 98;
    goto LABEL_14;
  }
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v30,
          off_1C0061428);
  *(_QWORD *)v20 = a1;
  *(_QWORD *)(v20 + 32) = v20 + 24;
  *(_QWORD *)(v20 + 24) = v20 + 24;
  *(_QWORD *)(v20 + 8) = v30;
  *(_QWORD *)(v20 + 328) = v41;
  *(_QWORD *)(v20 + 72) = a2;
  *(_DWORD *)(v20 + 176) = v40;
  *(_DWORD *)(v20 + 244) = v11;
  *(_BYTE *)(v20 + 553) = v10;
  *(_QWORD *)(v20 + 112) = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                                         WdfDriverGlobals,
                                         a1,
                                         off_1C00613D8)
                                     + 96);
  if ( *(_DWORD *)(v20 + 244) == 1 )
  {
    v21 = v47;
    *(_OWORD *)(v20 + 248) = v46;
    v22 = v48;
    *(_OWORD *)(v20 + 264) = v21;
    *(_QWORD *)&v21 = v49;
    *(_OWORD *)(v20 + 280) = v22;
    *(_QWORD *)(v20 + 296) = v21;
    *(_BYTE *)(v20 + 304) = 0;
    *(_BYTE *)(v20 + 309) = 0;
    *(_BYTE *)(v20 + 314) = 0;
  }
  else
  {
    *(_QWORD *)(v20 + 304) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v20 + 312) = *(_DWORD *)v53;
    *(_WORD *)(v20 + 316) = v54;
    *(_BYTE *)(v20 + 318) = v55;
    *(_DWORD *)(v20 + 248) = 0x7FFFFFFF;
    *(_DWORD *)(v20 + 252) = 0x7FFFFFFF;
    *(_WORD *)(v20 + 256) = 0;
    *(_QWORD *)(v20 + 260) = 0LL;
    *(_DWORD *)(v20 + 268) = 0;
  }
  Controller_SetLogIdentifier(v20);
  v42[1] = 0;
  *(_DWORD *)&v31[20] = 0;
  v44 = 0LL;
  *v50 = v20;
  v35 = off_1C0061068;
  v45 = 0LL;
  v43 = Controller_WdfEvtWatchdogTimerFunc;
  *((_QWORD *)&v34 + 1) = 0LL;
  *(_DWORD *)v31 = 56;
  v32 = 1;
  v33 = 1;
  v42[0] = 40;
  BYTE4(v44) = 1;
  *(_OWORD *)&v31[4] = 0LL;
  if ( v10 )
  {
    LODWORD(v44) = 0;
    v32 = 2;
  }
  else
  {
    LODWORD(v44) = 5000;
  }
  *(_QWORD *)&v34 = v30;
  DWORD2(v44) = 1000;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _BYTE *, __int64))(WdfFunctions_01023 + 2544))(
               WdfDriverGlobals,
               v42,
               v31,
               v20 + 360);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 99;
    goto LABEL_14;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(v20 + 360),
               off_1C0061068) = MEMORY[0xFFFFF78000000014];
  v35 = 0LL;
  v36 = 24LL;
  v32 = 1;
  v34 = (unsigned __int64)v30;
  v38 = 1LL;
  v37 = Controller_IdleTimeoutUpdateWorker;
  memset(v31, 0, sizeof(v31));
  *(_DWORD *)v31 = 56;
  v33 = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v36,
               v31,
               v20 + 520);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 100;
    goto LABEL_14;
  }
  v35 = 0LL;
  v36 = 24LL;
  v32 = 1;
  v34 = (unsigned __int64)v30;
  v37 = Controller_AudioOffloadWnfStateUpdateWorker;
  memset(v31, 0, sizeof(v31));
  *(_DWORD *)v31 = 56;
  v33 = 1;
  v38 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v36,
               v31,
               v20 + 776);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 101;
    goto LABEL_14;
  }
  v35 = off_1C00610E0;
  v34 = (unsigned __int64)v30;
  v37 = Controller_TelemetryReportWorker;
  v32 = 1;
  v33 = 1;
  v38 = 1LL;
  memset(&v31[4], 0, 20);
  *(_DWORD *)v31 = 56;
  v36 = 24LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v36,
               v31,
               v20 + 368);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 102;
    goto LABEL_14;
  }
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v20 + 368),
          off_1C00610E0);
  KeInitializeMutex((PRKMUTEX)(v23 + 24), 0);
  *(_QWORD *)(v23 + 8) = v23;
  *(_QWORD *)v23 = v23;
  KeInitializeSpinLock((PKSPIN_LOCK)(v23 + 16));
  AcpiData = DynamicLock_Create(v30, a2, v10, (__int64 *)(v20 + 616));
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 103;
    goto LABEL_14;
  }
  v35 = 0LL;
  v34 = (unsigned __int64)v30;
  memset(v31, 0, sizeof(v31));
  *(_DWORD *)v31 = 56;
  v32 = 1;
  v33 = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _BYTE *, __int64))(WdfFunctions_01023 + 104))(
               WdfDriverGlobals,
               v31,
               v20 + 632);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 104;
    goto LABEL_14;
  }
  v35 = off_1C00610E0;
  v34 = (unsigned __int64)v30;
  v37 = Controller_TimeSyncStartTrackingWorker;
  memset(&v31[4], 0, 20);
  *(_DWORD *)v31 = 56;
  v32 = 1;
  v33 = 1;
  v36 = 24LL;
  v38 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v36,
               v31,
               v20 + 656);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v17 = 105;
    goto LABEL_14;
  }
  *(_BYTE *)(v20 + 664) = 0;
  *(_QWORD *)(v20 + 648) = v20 + 640;
  *(_QWORD *)(v20 + 640) = v20 + 640;
  *(_BYTE *)(v20 + 608) = 0;
  KeQueryPerformanceCounter((PLARGE_INTEGER)(v20 + 728));
  *(_QWORD *)(v20 + 736) = 0LL;
  *(_QWORD *)(v20 + 744) = 0LL;
  *(_DWORD *)(v20 + 752) = 0;
  *(_DWORD *)(v20 + 624) = 0;
  Controller_QuerySupportedDSMs(v20);
  *(_OWORD *)(v20 + 336) = 0LL;
  Controller_PopulateDeviceFlags(v20);
  if ( (*(_BYTE *)(v20 + 336) & 0x10) != 0 )
  {
    AcpiData = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_(a2, v24, 4, 106, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
    }
    return (unsigned int)AcpiData;
  }
  if ( v10 )
  {
    AcpiData = Controller_ReferenceTrustletProcess((_QWORD *)v20);
    if ( AcpiData < 0 )
      return (unsigned int)AcpiData;
    AcpiData = Controller_CreateSecureObject(v20);
    if ( AcpiData < 0 )
      return (unsigned int)AcpiData;
    v25 = (*(_DWORD *)(v20 + 560) != 1) + 1;
  }
  else
  {
    v25 = 0;
  }
  *(_DWORD *)(v20 + 556) = v25;
  *(_QWORD *)(v20 + 588) = 0LL;
  AcpiData = DynamicLock_Create(v30, a2, 0, (__int64 *)(v20 + 600));
  if ( AcpiData >= 0 )
    return (unsigned int)Controller_AllocateIrqlTrackingArray(v20, v18, v26, v27);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 107;
LABEL_14:
    LOBYTE(v18) = 2;
    goto LABEL_9;
  }
  return (unsigned int)AcpiData;
}
