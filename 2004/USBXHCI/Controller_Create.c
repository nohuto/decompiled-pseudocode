/*
 * XREFs of Controller_Create @ 0x1C006D970
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006F7E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00089CC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     Device_IsSecureDevice @ 0x1C0014234 (Device_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1C0015408 (DynamicLock_Create.c)
 *     RtlStringCopyWorkerA @ 0x1C0018204 (RtlStringCopyWorkerA.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018B0C (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_QuerySupportedDSMs @ 0x1C0018BAC (Controller_QuerySupportedDSMs.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     RtlStringCchCopyA @ 0x1C002E844 (RtlStringCchCopyA.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0032078 (Controller_ReferenceTrustletProcess.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006E8E0 (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrievePciData @ 0x1C0070F48 (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C00713FC (Controller_GetDeviceEnumerator.c)
 *     Controller_SetLogIdentifier @ 0x1C007150C (Controller_SetLogIdentifier.c)
 *     Controller_CreateSecureObject @ 0x1C007444C (Controller_CreateSecureObject.c)
 *     Controller_RetrieveAcpiData @ 0x1C0074A50 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0074CB0 (Controller_RetrieveUrsData.c)
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
  int v17; // eax
  int v18; // edx
  __int64 v19; // rdi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rbx
  int v23; // edx
  int v24; // eax
  int v25; // r8d
  int v26; // r9d
  int v28; // r9d
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
  v8 = v7(WdfDriverGlobals, a1, off_1C00603D8);
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
  v35 = off_1C0060428;
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
    if ( AcpiData >= 0 )
    {
LABEL_5:
      *(_QWORD *)((char *)&v51[9] + 4) = v46;
      WORD2(v51[10]) = WORD4(v46);
      v51[11] = __PAIR64__(v47, HIDWORD(v46));
      LODWORD(v51[12]) = DWORD1(v47);
      LODWORD(v51[9]) = 1;
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 95;
LABEL_29:
    v18 = 2;
LABEL_31:
    WPP_RECORDER_SF_d(a2, v18, 4, v28, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, AcpiData);
    return (unsigned int)AcpiData;
  }
  if ( DeviceEnumerator == 1 )
  {
    v11 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v28 = 96;
      goto LABEL_30;
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
      v28 = 97;
      goto LABEL_29;
    }
    v11 = v39;
    if ( v39 != 2 )
      goto LABEL_5;
  }
  LODWORD(v51[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v51[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v51[13] + 1, 5uLL, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v51[13] + 6, 5uLL, &v53[2]);
LABEL_6:
  v17 = v32;
  if ( v10 )
    v17 = 2;
  v32 = v17;
  AcpiData = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _BYTE *, __int64 *))qword_1C00616A8)(
               UcxDriverGlobals,
               a1,
               v51,
               v31,
               &v30);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 98;
    goto LABEL_30;
  }
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v30,
          off_1C0060428);
  *(_QWORD *)v19 = a1;
  *(_QWORD *)(v19 + 32) = v19 + 24;
  *(_QWORD *)(v19 + 24) = v19 + 24;
  *(_QWORD *)(v19 + 8) = v30;
  *(_QWORD *)(v19 + 328) = v41;
  *(_QWORD *)(v19 + 72) = a2;
  *(_DWORD *)(v19 + 176) = v40;
  *(_DWORD *)(v19 + 244) = v11;
  *(_BYTE *)(v19 + 537) = v10;
  *(_QWORD *)(v19 + 112) = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                                         WdfDriverGlobals,
                                         a1,
                                         off_1C00603D8)
                                     + 96);
  if ( *(_DWORD *)(v19 + 244) == 1 )
  {
    v20 = v47;
    *(_OWORD *)(v19 + 248) = v46;
    v21 = v48;
    *(_OWORD *)(v19 + 264) = v20;
    *(_QWORD *)&v20 = v49;
    *(_OWORD *)(v19 + 280) = v21;
    *(_QWORD *)(v19 + 296) = v20;
    *(_BYTE *)(v19 + 304) = 0;
    *(_BYTE *)(v19 + 309) = 0;
    *(_BYTE *)(v19 + 314) = 0;
  }
  else
  {
    *(_QWORD *)(v19 + 304) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v19 + 312) = *(_DWORD *)v53;
    *(_WORD *)(v19 + 316) = v54;
    *(_BYTE *)(v19 + 318) = v55;
    *(_DWORD *)(v19 + 248) = 0x7FFFFFFF;
    *(_DWORD *)(v19 + 252) = 0x7FFFFFFF;
    *(_WORD *)(v19 + 256) = 0;
    *(_QWORD *)(v19 + 260) = 0LL;
    *(_DWORD *)(v19 + 268) = 0;
  }
  Controller_SetLogIdentifier(v19);
  v42[1] = 0;
  *(_DWORD *)&v31[20] = 0;
  v44 = 0LL;
  *v50 = v19;
  v35 = off_1C0060068;
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
               v19 + 360);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 99;
    goto LABEL_30;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(v19 + 360),
               off_1C0060068) = MEMORY[0xFFFFF78000000014];
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
               v19 + 504);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 100;
    goto LABEL_30;
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
               v19 + 760);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 101;
    goto LABEL_30;
  }
  v35 = off_1C00600E0;
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
               v19 + 368);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 102;
    goto LABEL_30;
  }
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v19 + 368),
          off_1C00600E0);
  KeInitializeMutex((PRKMUTEX)(v22 + 24), 0);
  *(_QWORD *)(v22 + 8) = v22;
  *(_QWORD *)v22 = v22;
  KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 16));
  AcpiData = DynamicLock_Create(v30, a2, v10, (__int64 *)(v19 + 600));
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 103;
    goto LABEL_30;
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
               v19 + 616);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 104;
    goto LABEL_30;
  }
  v35 = off_1C00600E0;
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
               v19 + 640);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v28 = 105;
LABEL_30:
    LOBYTE(v18) = 2;
    goto LABEL_31;
  }
  *(_BYTE *)(v19 + 648) = 0;
  *(_QWORD *)(v19 + 632) = v19 + 624;
  *(_QWORD *)(v19 + 624) = v19 + 624;
  *(_BYTE *)(v19 + 592) = 0;
  KeQueryPerformanceCounter((PLARGE_INTEGER)(v19 + 712));
  *(_QWORD *)(v19 + 720) = 0LL;
  *(_QWORD *)(v19 + 728) = 0LL;
  *(_DWORD *)(v19 + 736) = 0;
  *(_DWORD *)(v19 + 608) = 0;
  Controller_QuerySupportedDSMs(v19);
  *(_OWORD *)(v19 + 336) = 0LL;
  Controller_PopulateDeviceFlags(v19);
  if ( (*(_BYTE *)(v19 + 336) & 0x10) != 0 )
  {
    AcpiData = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_(a2, v23, 4, 106, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
    }
  }
  else
  {
    if ( !v10 )
    {
      v24 = 0;
LABEL_23:
      *(_DWORD *)(v19 + 540) = v24;
      *(_QWORD *)(v19 + 572) = 0LL;
      AcpiData = DynamicLock_Create(v30, a2, v10, (__int64 *)(v19 + 584));
      if ( AcpiData >= 0 )
        return (unsigned int)Controller_AllocateIrqlTrackingArray(v19, v18, v25, v26);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v28 = 107;
      goto LABEL_30;
    }
    AcpiData = Controller_ReferenceTrustletProcess((_QWORD *)v19);
    if ( AcpiData >= 0 )
    {
      AcpiData = Controller_CreateSecureObject(v19);
      if ( AcpiData >= 0 )
      {
        v24 = (*(_DWORD *)(v19 + 544) != 1) + 1;
        goto LABEL_23;
      }
    }
  }
  return (unsigned int)AcpiData;
}
