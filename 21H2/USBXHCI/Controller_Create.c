/*
 * XREFs of Controller_Create @ 0x1C00702D4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006D740 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000597C (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Device_IsSecureDevice @ 0x1C0015008 (Device_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1C0016778 (DynamicLock_Create.c)
 *     RtlStringCopyWorkerA @ 0x1C0018A60 (RtlStringCopyWorkerA.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018D38 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_QuerySupportedDSMs @ 0x1C0018DC8 (Controller_QuerySupportedDSMs.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     RtlStringCchCopyA @ 0x1C002F1D4 (RtlStringCchCopyA.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C00328D8 (Controller_ReferenceTrustletProcess.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006DA94 (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrievePciData @ 0x1C007215C (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C00728B8 (Controller_GetDeviceEnumerator.c)
 *     Controller_SetLogIdentifier @ 0x1C0072AA4 (Controller_SetLogIdentifier.c)
 *     Controller_CreateSecureObject @ 0x1C0075C90 (Controller_CreateSecureObject.c)
 *     Controller_RetrieveAcpiData @ 0x1C0076294 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C00764E8 (Controller_RetrieveUrsData.c)
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
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // edx
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  int v30; // r9d
  unsigned int v31; // r10d
  unsigned int v32; // r10d
  size_t v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v35[24]; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+54h] [rbp-ACh]
  __int128 v38; // [rsp+58h] [rbp-A8h]
  void *v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  void *v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h]
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+9Ch] [rbp-64h]
  KIRQL (__fastcall *v48)(__int64); // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int128 v51; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-30h]
  __int128 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 *v55; // [rsp+F8h] [rbp-8h]
  _QWORD v56[32]; // [rsp+100h] [rbp+0h] BYREF
  char pszSrc[8]; // [rsp+200h] [rbp+100h] BYREF
  char v58[4]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v59; // [rsp+20Ch] [rbp+10Ch]
  char v60; // [rsp+20Eh] [rbp+10Eh]
  __int128 v61; // [rsp+210h] [rbp+110h]
  __int128 v62; // [rsp+220h] [rbp+120h]
  char pszDest[16]; // [rsp+230h] [rbp+130h] BYREF

  v45 = -1LL;
  v47 = 0;
  HIDWORD(v40) = 0;
  *(_DWORD *)&v35[4] = 0;
  *(_QWORD *)&v35[16] = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v61 = 0LL;
  v55 = a4;
  v62 = 0LL;
  v44 = a3;
  *(_OWORD *)pszDest = 0LL;
  v7 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616);
  v43 = 0;
  v8 = v7(WdfDriverGlobals, a1, off_1C00613D8);
  IsSecureDevice = Device_IsSecureDevice(v8);
  *(_QWORD *)&v61 = 48LL;
  v10 = IsSecureDevice;
  pszDest[0] = 0;
  *(_QWORD *)&v62 = 0LL;
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v58 = 0;
  v59 = 0;
  v60 = 0;
  v54 = 0LL;
  HIDWORD(v62) = 16;
  v51 = 0LL;
  BYTE8(v62) = 0;
  v52 = 0LL;
  *((_QWORD *)&v61 + 1) = 512LL;
  v53 = 0LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  v11 = 1;
  v39 = off_1C0061428;
  *(_QWORD *)v35 = 56LL;
  *(_QWORD *)&v35[8] = Controller_WdfEvtCleanupCallback;
  *(_QWORD *)&v35[16] = 0LL;
  v36 = 1;
  v37 = 1;
  v38 = 0LL;
  memset(v56, 0, 0xF8uLL);
  v56[0] = -4294967048LL;
  *(_QWORD *)((char *)&v56[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  LODWORD(v56[9]) = 0;
  BYTE4(v56[12]) = 0;
  BYTE1(v56[13]) = 0;
  BYTE6(v56[13]) = 0;
  WORD2(v56[10]) = 0;
  v56[11] = 0LL;
  LODWORD(v56[12]) = 0;
  RtlStringCopyWorkerA((NTSTRSAFE_PSTR)&v56[14] + 3, v12, v13, v14, v33);
  v56[4] = UsbDevice_UcxEvtDeviceAdd;
  v56[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v56[5] = Controller_UcxEvtReset;
  v56[1] = Controller_UcxEvtQueryUsbCapability;
  v56[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v56[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v56[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  if ( v10 )
  {
    memset(&v56[6], 0, 24);
  }
  else
  {
    v56[7] = Crashdump_UcxEvtGetDumpData;
    v56[8] = Crashdump_UcxEvtFreeDumpData;
    v56[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2);
  if ( !DeviceEnumerator )
  {
    AcpiData = Controller_RetrievePciData(a1, a2, &v51, &v45);
    if ( AcpiData >= 0 )
    {
LABEL_5:
      *(_QWORD *)((char *)&v56[9] + 4) = v51;
      WORD2(v56[10]) = WORD4(v51);
      v56[11] = __PAIR64__(v52, HIDWORD(v51));
      LODWORD(v56[12]) = DWORD1(v52);
      LODWORD(v56[9]) = 1;
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 95;
LABEL_29:
    v18 = 2;
LABEL_31:
    WPP_RECORDER_SF_d(a2, v18, 4, v30, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, AcpiData);
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
      v30 = 96;
      goto LABEL_30;
    }
  }
  else
  {
    AcpiData = Controller_RetrieveUrsData(
                 a1,
                 a2,
                 (unsigned int)&v43,
                 (unsigned int)pszSrc,
                 (__int64)&v51,
                 (__int64)&v45);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v30 = 97;
      goto LABEL_29;
    }
    v11 = v43;
    if ( v43 != 2 )
      goto LABEL_5;
  }
  LODWORD(v56[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v56[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v56[13] + 1, v31, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v56[13] + 6, v32, &v58[2]);
LABEL_6:
  v17 = v36;
  if ( v10 )
    v17 = 2;
  v36 = v17;
  AcpiData = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _BYTE *, __int64 *))qword_1C00627A8)(
               UcxDriverGlobals,
               a1,
               v56,
               v35,
               &v34);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 98;
    goto LABEL_30;
  }
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v34,
          off_1C0061428);
  *(_QWORD *)v19 = a1;
  *(_QWORD *)(v19 + 32) = v19 + 24;
  *(_QWORD *)(v19 + 24) = v19 + 24;
  *(_QWORD *)(v19 + 8) = v34;
  *(_QWORD *)(v19 + 328) = v45;
  *(_QWORD *)(v19 + 72) = a2;
  *(_DWORD *)(v19 + 176) = v44;
  *(_DWORD *)(v19 + 244) = v11;
  *(_BYTE *)(v19 + 553) = v10;
  *(_QWORD *)(v19 + 112) = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                                         WdfDriverGlobals,
                                         a1,
                                         off_1C00613D8)
                                     + 96);
  if ( *(_DWORD *)(v19 + 244) == 1 )
  {
    v20 = v52;
    *(_OWORD *)(v19 + 248) = v51;
    v21 = v53;
    *(_OWORD *)(v19 + 264) = v20;
    *(_QWORD *)&v20 = v54;
    *(_OWORD *)(v19 + 280) = v21;
    *(_QWORD *)(v19 + 296) = v20;
    *(_BYTE *)(v19 + 304) = 0;
    *(_BYTE *)(v19 + 309) = 0;
    *(_BYTE *)(v19 + 314) = 0;
  }
  else
  {
    *(_QWORD *)(v19 + 304) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v19 + 312) = *(_DWORD *)v58;
    *(_WORD *)(v19 + 316) = v59;
    *(_BYTE *)(v19 + 318) = v60;
    *(_DWORD *)(v19 + 248) = 0x7FFFFFFF;
    *(_DWORD *)(v19 + 252) = 0x7FFFFFFF;
    *(_WORD *)(v19 + 256) = 0;
    *(_QWORD *)(v19 + 260) = 0LL;
    *(_DWORD *)(v19 + 268) = 0;
  }
  Controller_SetLogIdentifier(v19);
  v47 = 0;
  *(_DWORD *)&v35[20] = 0;
  v49 = 0LL;
  *v55 = v19;
  v39 = off_1C0061068;
  v50 = 0LL;
  v48 = Controller_WdfEvtWatchdogTimerFunc;
  *((_QWORD *)&v38 + 1) = 0LL;
  *(_DWORD *)v35 = 56;
  v36 = 1;
  v37 = 1;
  v46 = 40;
  BYTE4(v49) = 1;
  *(_OWORD *)&v35[4] = 0LL;
  if ( v10 )
  {
    LODWORD(v49) = 0;
    v36 = 2;
  }
  else
  {
    LODWORD(v49) = 5000;
  }
  *(_QWORD *)&v38 = v34;
  DWORD2(v49) = 1000;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, _BYTE *, __int64))(WdfFunctions_01023 + 2544))(
               WdfDriverGlobals,
               &v46,
               v35,
               v19 + 360);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 99;
    goto LABEL_30;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(v19 + 360),
               off_1C0061068) = MEMORY[0xFFFFF78000000014];
  v39 = 0LL;
  v40 = 24LL;
  v36 = 1;
  v38 = (unsigned __int64)v34;
  v42 = 1LL;
  v41 = Controller_IdleTimeoutUpdateWorker;
  memset(v35, 0, sizeof(v35));
  *(_DWORD *)v35 = 56;
  v37 = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v40,
               v35,
               v19 + 520);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 100;
    goto LABEL_30;
  }
  v39 = 0LL;
  v40 = 24LL;
  v36 = 1;
  v38 = (unsigned __int64)v34;
  v41 = Controller_AudioOffloadWnfStateUpdateWorker;
  memset(v35, 0, sizeof(v35));
  *(_DWORD *)v35 = 56;
  v37 = 1;
  v42 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v40,
               v35,
               v19 + 776);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 101;
    goto LABEL_30;
  }
  v39 = off_1C00610E0;
  v38 = (unsigned __int64)v34;
  v41 = Controller_TelemetryReportWorker;
  v36 = 1;
  v37 = 1;
  v42 = 1LL;
  memset(&v35[4], 0, 20);
  *(_DWORD *)v35 = 56;
  v40 = 24LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v40,
               v35,
               v19 + 368);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 102;
    goto LABEL_30;
  }
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v19 + 368),
          off_1C00610E0);
  KeInitializeMutex((PRKMUTEX)(v22 + 24), 0);
  *(_QWORD *)(v22 + 8) = v22;
  *(_QWORD *)v22 = v22;
  KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 16));
  AcpiData = DynamicLock_Create(v34, a2, v10, (__int64 *)(v19 + 616));
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 103;
    goto LABEL_30;
  }
  v39 = 0LL;
  v38 = (unsigned __int64)v34;
  memset(v35, 0, sizeof(v35));
  *(_DWORD *)v35 = 56;
  v36 = 1;
  v37 = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _BYTE *, __int64))(WdfFunctions_01023 + 104))(
               WdfDriverGlobals,
               v35,
               v19 + 632);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 104;
    goto LABEL_30;
  }
  v39 = off_1C00610E0;
  v38 = (unsigned __int64)v34;
  v41 = Controller_TimeSyncStartTrackingWorker;
  memset(&v35[4], 0, 20);
  *(_DWORD *)v35 = 56;
  v36 = 1;
  v37 = 1;
  v40 = 24LL;
  v42 = 1LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
               WdfDriverGlobals,
               &v40,
               v35,
               v19 + 656);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v30 = 105;
LABEL_30:
    LOBYTE(v18) = 2;
    goto LABEL_31;
  }
  *(_BYTE *)(v19 + 664) = 0;
  *(_QWORD *)(v19 + 648) = v19 + 640;
  *(_QWORD *)(v19 + 640) = v19 + 640;
  *(_BYTE *)(v19 + 608) = 0;
  KeQueryPerformanceCounter((PLARGE_INTEGER)(v19 + 728));
  *(_QWORD *)(v19 + 736) = 0LL;
  *(_QWORD *)(v19 + 744) = 0LL;
  *(_DWORD *)(v19 + 752) = 0;
  *(_DWORD *)(v19 + 624) = 0;
  Controller_QuerySupportedDSMs(v19);
  *(_OWORD *)(v19 + 336) = 0LL;
  Controller_PopulateDeviceFlags(v19, v23, v24);
  if ( (*(_BYTE *)(v19 + 336) & 0x10) != 0 )
  {
    AcpiData = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = 2;
      WPP_RECORDER_SF_(a2, v25, 4, 106, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    }
  }
  else
  {
    if ( !v10 )
    {
      v26 = 0;
LABEL_23:
      *(_DWORD *)(v19 + 556) = v26;
      *(_QWORD *)(v19 + 588) = 0LL;
      AcpiData = DynamicLock_Create(v34, a2, 0, (__int64 *)(v19 + 600));
      if ( AcpiData >= 0 )
        return (unsigned int)Controller_AllocateIrqlTrackingArray(v19, v18, v27, v28);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v30 = 107;
      goto LABEL_30;
    }
    AcpiData = Controller_ReferenceTrustletProcess((_QWORD *)v19);
    if ( AcpiData >= 0 )
    {
      AcpiData = Controller_CreateSecureObject(v19);
      if ( AcpiData >= 0 )
      {
        v26 = (*(_DWORD *)(v19 + 560) != 1) + 1;
        goto LABEL_23;
      }
    }
  }
  return (unsigned int)AcpiData;
}
