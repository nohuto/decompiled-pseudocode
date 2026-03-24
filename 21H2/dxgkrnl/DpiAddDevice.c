/*
 * XREFs of DpiAddDevice @ 0x1C017CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018FF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0020414 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C0021EB0 (DpiGetDeviceRegistryPaths.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_ReportWddm2_6ToDriver_Amd__private_ReportDeviceUsage @ 0x1C00283E4 (Feature_ReportWddm2_6ToDriver_Amd__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage @ 0x1C0028448 (Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Nvidia__private_ReportDeviceUsage @ 0x1C00284AC (Feature_ReportWddm2_6ToDriver_Nvidia__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C00524E0 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C0059684 (DpiDxgkDdiLinkDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpEvalAcpiMethod @ 0x1C0167EE0 (DpEvalAcpiMethod.c)
 *     DpiFdoDetectPostDevice @ 0x1C017B1B0 (DpiFdoDetectPostDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C017EFCC (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C017FB90 (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C0180610 (DpiGetDevicePropertyString.c)
 *     DpiReadPnpRegistryValue @ 0x1C01842D4 (DpiReadPnpRegistryValue.c)
 *     DpiDxgkDdiAddDevice @ 0x1C019E04C (DpiDxgkDdiAddDevice.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C019E7D4 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiGetAgpStatus @ 0x1C019EE74 (DpiGetAgpStatus.c)
 *     DpiGetVgaStatus @ 0x1C019F0D8 (DpiGetVgaStatus.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C019FEB4 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C0220AF8 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220BE8 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0220DE0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220F50 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiSetDeviceUsageType @ 0x1C02C8374 (DpiSetDeviceUsageType.c)
 *     DpiFdoResetFdo @ 0x1C02CBC74 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D6578 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02D7CD0 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02D84C0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02D8A60 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3)
{
  char *DeviceExtension; // rbx
  char *v6; // r14
  _DWORD *DriverObjectExtension; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 started; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  const UNICODE_STRING *p_DriverName; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  ULONG v21; // edi
  int v22; // r12d
  __int64 v23; // rax
  char v24; // r15
  struct _KMUTANT *v25; // rdi
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  void (__fastcall *v28)(_QWORD); // rax
  void (__fastcall *v29)(_QWORD); // rax
  void (__fastcall *v30)(_QWORD); // rax
  void (__fastcall *v31)(_QWORD); // rax
  void *v32; // rcx
  __int64 v33; // rcx
  struct _DEVICE_OBJECT *v34; // rcx
  char v35; // r15
  int DevicePropertyString; // eax
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  int RegistryValues; // eax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  NTSTATUS v44; // eax
  char v45; // al
  struct _DEVICE_OBJECT *v46; // r12
  PDEVICE_OBJECT v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  bool v51; // zf
  int DeviceRegistryPaths; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // r12
  int v57; // eax
  int v58; // ecx
  NTSTATUS DeviceProperty; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rsi
  __int64 v64; // rax
  _DWORD *v65; // rdi
  NTSTATUS v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rsi
  __int64 v71; // rax
  struct _DEVICE_OBJECT *v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v79; // al
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  struct _DEVICE_OBJECT *v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  PVOID PoolWithTag; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r9
  __int64 v91; // rax
  unsigned __int16 *v92; // rcx
  int v93; // edx
  int v94; // edi
  char v95; // al
  int AgpStatus; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  char v105; // al
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  struct _DEVICE_OBJECT *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rax
  char v124; // al
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rcx
  char *v128; // rdi
  unsigned int v129; // edx
  __int16 v130; // r10
  const wchar_t **v131; // r9
  char *v132; // rax
  signed __int64 v133; // rcx
  __int16 v134; // r10
  const wchar_t **v135; // r9
  const wchar_t *v136; // rax
  char *v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  _DWORD *v141; // rdx
  unsigned __int64 v142; // r8
  __int64 v143; // rcx
  int v144; // eax
  int v145; // eax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  char **v150; // rcx
  _DWORD *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // rax
  NTSTATUS v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  _DWORD *v161; // rax
  _DWORD *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rax
  _QWORD *v170; // rax
  _QWORD *v171; // rcx
  PVOID *v172; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v174; // rdi
  unsigned int v175; // ebx
  struct _DEVICE_OBJECT *v176; // r14
  int v177; // eax
  __int64 v178; // rcx
  __int64 v179; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  char v182; // [rsp+41h] [rbp-BFh]
  char v183; // [rsp+43h] [rbp-BDh]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+48h] [rbp-B8h] BYREF
  char v185; // [rsp+50h] [rbp-B0h]
  char v186; // [rsp+51h] [rbp-AFh]
  char v187; // [rsp+52h] [rbp-AEh]
  char v188; // [rsp+53h] [rbp-ADh]
  char v189; // [rsp+54h] [rbp-ACh]
  char v190; // [rsp+55h] [rbp-ABh]
  char v191; // [rsp+56h] [rbp-AAh] BYREF
  char v192; // [rsp+57h] [rbp-A9h]
  char v193; // [rsp+58h] [rbp-A8h]
  char v194; // [rsp+59h] [rbp-A7h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  int v196; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT TargetDevice; // [rsp+68h] [rbp-98h]
  unsigned int v198; // [rsp+70h] [rbp-90h] BYREF
  int v199; // [rsp+74h] [rbp-8Ch]
  int v200; // [rsp+78h] [rbp-88h] BYREF
  ULONG ReturnedProductType; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v202; // [rsp+80h] [rbp-80h] BYREF
  void *Source1; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  __int64 v205; // [rsp+98h] [rbp-68h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+A0h] [rbp-60h]
  int v207; // [rsp+A8h] [rbp-58h]
  int v208; // [rsp+ACh] [rbp-54h]
  const wchar_t *v209; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v210[2]; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING String1; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v212; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v213; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v214; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v215; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v216; // [rsp+110h] [rbp+10h] BYREF
  __int64 v217; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v218[14]; // [rsp+130h] [rbp+30h] BYREF
  int v219[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v220; // [rsp+1B0h] [rbp+B0h]
  __int64 v221; // [rsp+1B8h] [rbp+B8h] BYREF
  int v222; // [rsp+1C0h] [rbp+C0h]
  _DWORD v223[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v224[24]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v225; // [rsp+1F0h] [rbp+F0h]
  int v226; // [rsp+1F8h] [rbp+F8h]
  int v227; // [rsp+1FCh] [rbp+FCh]
  int v228; // [rsp+200h] [rbp+100h]
  int v229; // [rsp+204h] [rbp+104h]
  int v230; // [rsp+208h] [rbp+108h]
  int v231; // [rsp+20Ch] [rbp+10Ch]
  _DWORD VersionInformation[72]; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v233[2]; // [rsp+330h] [rbp+230h]
  const wchar_t *v234; // [rsp+338h] [rbp+238h] BYREF
  int v235; // [rsp+340h] [rbp+240h]
  const wchar_t *v236; // [rsp+348h] [rbp+248h]
  int v237; // [rsp+350h] [rbp+250h]
  const wchar_t *v238; // [rsp+358h] [rbp+258h]
  int v239; // [rsp+360h] [rbp+260h]
  const wchar_t *v240; // [rsp+368h] [rbp+268h]
  int v241; // [rsp+370h] [rbp+270h]
  const wchar_t *v242; // [rsp+378h] [rbp+278h]
  __int128 v243; // [rsp+380h] [rbp+280h] BYREF
  __int128 v244; // [rsp+390h] [rbp+290h]
  int v245; // [rsp+3A0h] [rbp+2A0h]
  __int128 v246; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v247; // [rsp+3B8h] [rbp+2B8h]
  wchar_t v248; // [rsp+3C0h] [rbp+2C0h]
  _OWORD v249[2]; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v250; // [rsp+3E8h] [rbp+2E8h]
  wchar_t v251; // [rsp+3F0h] [rbp+2F0h]
  _OWORD v252[2]; // [rsp+3F8h] [rbp+2F8h] BYREF
  wchar_t v253; // [rsp+418h] [rbp+318h]
  _OWORD v254[2]; // [rsp+420h] [rbp+320h] BYREF
  __int64 v255; // [rsp+440h] [rbp+340h]
  int v256; // [rsp+448h] [rbp+348h]
  _OWORD v257[2]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v258; // [rsp+470h] [rbp+370h]
  _OWORD v259[4]; // [rsp+480h] [rbp+380h] BYREF
  int v260; // [rsp+4C0h] [rbp+3C0h]

  v221 = 0LL;
  v222 = 0;
  DeviceExtension = 0LL;
  v246 = *(_OWORD *)L"\\Driver\\VGPU";
  v248 = aDriverVgpu[12];
  v6 = 0LL;
  v247 = *(_QWORD *)L"VGPU";
  v215.Buffer = (wchar_t *)&v246;
  v252[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v253 = aDriverWddmwarp[16];
  v212.Buffer = (wchar_t *)v252;
  String1.Buffer = (wchar_t *)v257;
  v257[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v251 = aDriverBasicdis[20];
  v258 = *(_QWORD *)L"der";
  v216.Buffer = (wchar_t *)v249;
  v249[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v256 = *(_DWORD *)L"r";
  v252[1] = *(_OWORD *)L"WddmWarp";
  TargetDevice = DeviceObject;
  DriverObject = ClientIdentificationAddress;
  v250 = *(_QWORD *)L"play";
  v202 = 0LL;
  v257[1] = *(_OWORD *)L"BasicRender";
  v194 = 0;
  DeviceObjecta = 0LL;
  v254[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  ResultLength = 0;
  v249[1] = *(_OWORD *)L"BasicDisplay";
  v183 = 1;
  LOBYTE(v199) = 0;
  v255 = *(_QWORD *)L"ender";
  v259[0] = *(_OWORD *)L"\\Driver\\VirtualComputeAccelerator";
  v192 = 0;
  v193 = 0;
  v182 = 0;
  v188 = 0;
  v186 = 0;
  v189 = 0;
  v191 = 0;
  v187 = 0;
  v190 = 0;
  v185 = 0;
  v196 = 3;
  *(_QWORD *)&v215.Length = 1703960LL;
  *(_QWORD *)&v212.Length = 2228256LL;
  *(_QWORD *)&String1.Length = 2621478LL;
  *(_QWORD *)&v216.Length = 2752552LL;
  v254[1] = *(_OWORD *)L"VirtualRender";
  *(_QWORD *)&v213.Length = 2883626LL;
  v213.Buffer = (wchar_t *)v254;
  v259[1] = *(_OWORD *)L"VirtualComputeAccelerator";
  v260 = *(_DWORD *)L"r";
  v259[3] = *(_OWORD *)L"celerator";
  v259[2] = *(_OWORD *)L"omputeAccelerator";
  *(_QWORD *)&v214.Length = 4456514LL;
  v214.Buffer = (wchar_t *)v259;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(64LL, &EventEnterDpiAddDevice, a3, ClientIdentificationAddress, DeviceObject, 0);
  v217 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v10 = (__int64)DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    LODWORD(started) = -1073741811;
    v170 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v170[3] = 275LL;
    v170[4] = 21LL;
    v170[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v170);
    goto LABEL_270;
  }
  v11 = DpiDxgkDdiAddDevice(DriverObjectExtension, DeviceObject, &v202);
  started = v11;
  if ( v11 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    v16 = *(_QWORD *)(v10 + 144);
LABEL_9:
    *(_QWORD *)(v15 + 24) = v16;
    *(_QWORD *)(v15 + 32) = started;
LABEL_10:
    WdLogEvent5_WdError(v15);
LABEL_270:
    v56 = 0;
    v24 = 0;
    goto LABEL_271;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v194 = 1;
  if ( !RtlCompareUnicodeString(&String1, p_DriverName, 1u) )
  {
    v19 = 1LL;
    v20 = 1;
    v182 = 1;
    v186 = 1;
    goto LABEL_16;
  }
  if ( !RtlCompareUnicodeString(&v212, p_DriverName, 1u) )
  {
    v186 = 1;
LABEL_15:
    v20 = 0;
    goto LABEL_16;
  }
  if ( !RtlCompareUnicodeString(&v213, p_DriverName, 1u) || !RtlCompareUnicodeString(&v214, p_DriverName, 1u) )
  {
    v185 = 1;
    goto LABEL_15;
  }
  if ( !RtlCompareUnicodeString(&v215, p_DriverName, 1u) )
  {
    v189 = 1;
    goto LABEL_15;
  }
  if ( RtlCompareUnicodeString(&v216, p_DriverName, 1u) )
  {
    v190 = byte_1C00B2B1F;
    v187 = *(_BYTE *)(v10 + 134);
    v198 = 0;
    memset(v218, 0, sizeof(v218));
    v39 = *(_QWORD *)(v10 + 48);
    v218[2] = L"Start";
    LODWORD(v218[1]) = 292;
    v218[3] = &v198;
    LODWORD(v218[4]) = 67108868;
    LODWORD(v218[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v39, v218, 0LL, 0LL);
    started = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_63;
    if ( v198 == 3 )
      goto LABEL_15;
    v41 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v41 + 24) = v198;
    WdLogEvent5_WdError(v41);
    LODWORD(started) = -1073741637;
LABEL_75:
    v24 = 0;
    goto LABEL_20;
  }
  Source1 = 0LL;
  v188 = 1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           DeviceObject,
                           DevicePropertyHardwareID,
                           PagedPool,
                           (__int64)&ResultLength);
  started = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_63;
  v37 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v182 = 1;
    if ( byte_1C00B2B12 )
    {
      v183 = 0;
      LODWORD(started) = -1073741637;
      v38 = WdLogNewEntry5_WdEvent(v19, v18);
      *(_QWORD *)(v38 + 24) = 0LL;
      WdLogEvent5_WdEvent(v38);
    }
  }
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( (int)started < 0 )
    goto LABEL_75;
  v20 = v182;
LABEL_16:
  if ( v202 )
  {
    v21 = 5944;
    v196 = 0;
    v22 = 2;
    if ( *(_QWORD *)(v10 + 616) )
    {
      if ( v20 )
      {
        LODWORD(started) = -1073741637;
        v23 = WdLogNewEntry5_WdError(0LL, v18);
        *(_QWORD *)(v23 + 24) = *(_QWORD *)(v10 + 616);
        *(_QWORD *)(v23 + 32) = -1073741637LL;
        goto LABEL_19;
      }
      v42 = DpiDxgkDdiLinkDevice(v10, (__int64)TargetDevice, v202, (int *)&v221);
      started = v42;
      if ( v42 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(0LL, v43);
        v16 = *(_QWORD *)(v10 + 616);
        goto LABEL_9;
      }
      if ( HIDWORD(v221) > 0x100 )
      {
        LODWORD(started) = -1073741756;
        v23 = WdLogNewEntry5_WdError(0LL, v43);
        *(_QWORD *)(v23 + 24) = -1073741756LL;
        goto LABEL_19;
      }
      if ( HIDWORD(v221) && !(_BYTE)v222 )
      {
        v21 = 2744;
        v196 = 1;
        v22 = 3;
      }
    }
  }
  else
  {
    v196 = 2;
    v21 = 496;
    v22 = 4;
    if ( v20 )
    {
      LODWORD(started) = -1073741637;
      v23 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v23 + 24) = -1073741637LL;
LABEL_19:
      WdLogEvent5_WdError(v23);
      v24 = 0;
      goto LABEL_20;
    }
  }
  v44 = IoCreateDevice(DriverObject, v21, 0LL, 0x23u, v187 == 0 ? 0x100 : 0, 0, &DeviceObjecta);
  started = v44;
  if ( v44 < 0 )
  {
LABEL_63:
    v15 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v15 + 24) = started;
    goto LABEL_10;
  }
  v196 |= (unsigned int)DeviceObjecta & 0xFFFF00;
  DeviceExtension = (char *)DeviceObjecta->DeviceExtension;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_DWORD *)DeviceExtension + 5) = v22;
  *((_QWORD *)DeviceExtension + 3) = DeviceObjecta;
  *((_QWORD *)DeviceExtension + 4) = DeviceObjecta;
  *((_QWORD *)DeviceExtension + 5) = v10;
  *((_QWORD *)DeviceExtension + 6) = v202;
  DeviceExtension[480] = v182;
  v45 = v185;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v45;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v46 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v47 = IoAttachDeviceToDeviceStack(DeviceObjecta, v46);
  *((_QWORD *)DeviceExtension + 20) = v47;
  if ( !v47 )
  {
    LODWORD(started) = -1073741810;
    v50 = WdLogNewEntry5_WdError(v49, v48);
    *(_QWORD *)(v50 + 24) = -1073741810LL;
    WdLogEvent5_WdError(v50);
    v24 = 0;
    goto LABEL_20;
  }
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  v51 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  if ( !v51 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
  {
    v24 = 1;
    goto LABEL_228;
  }
  v6 = DeviceExtension;
  DeviceExtension[2693] = v186;
  DeviceExtension[1154] = v188;
  DeviceExtension[1158] = v187;
  DeviceExtension[2694] = v189;
  DeviceExtension[2695] = v190;
  *((_DWORD *)DeviceExtension + 680) = 0;
  *((_QWORD *)DeviceExtension + 36) = DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_1C00B2B11 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = DpiFdoHandleStopDevice;
  *(_QWORD *)(DeviceExtension + 500) = v221;
  *((_DWORD *)DeviceExtension + 127) = v222;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObjecta, (__int64)v46, v10);
  started = DeviceRegistryPaths;
  if ( DeviceRegistryPaths < 0 )
    goto LABEL_95;
  if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
  {
    if ( *(_QWORD *)(v10 + 232) )
    {
      v57 = DpiAcpiRegisterAcpiCallbacks(DeviceObjecta);
      v58 = (unsigned __int8)v199;
      if ( v57 >= 0 )
        v58 = 1;
      v199 = v58;
    }
    DeviceExtension[1156] = 1;
  }
  DeviceProperty = IoGetDeviceProperty(v46, DevicePropertyBusNumber, 4u, DeviceExtension + 1144, &ResultLength);
  v63 = DeviceProperty;
  if ( DeviceProperty < 0 )
  {
    v64 = WdLogNewEntry5_WdWarning(v61, v60, v62);
    *(_QWORD *)(v64 + 24) = v63;
    WdLogEvent5_WdWarning(v64);
    *((_DWORD *)DeviceExtension + 286) = -1;
  }
  v65 = DeviceExtension + 1148;
  v66 = IoGetDeviceProperty(v46, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength);
  v70 = v66;
  if ( v66 < 0 || *v65 == -1 )
  {
    v71 = WdLogNewEntry5_WdWarning(v68, v67, v69);
    *(_QWORD *)(v71 + 24) = v70;
    WdLogEvent5_WdWarning(v71);
    *v65 = -1;
  }
  v72 = TargetDevice;
  LODWORD(started) = IoGetDeviceProperty(
                       TargetDevice,
                       DevicePropertyBusTypeGuid,
                       0x10u,
                       DeviceExtension + 544,
                       &ResultLength);
  if ( (int)started < 0 || ResultLength < 0x10 )
  {
    v75 = WdLogNewEntry5_WdEvent(v74, v73);
    *(_QWORD *)(v75 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v75);
    *((GUID *)DeviceExtension + 34) = GUID_BUS_TYPE_INVALID;
  }
  if ( !v182 )
  {
    v76 = DpiFdoDetectPostDevice((__int64)DeviceObjecta, &v191);
    started = v76;
    if ( v76 < 0 )
    {
LABEL_95:
      v55 = WdLogNewEntry5_WdError(v54, v53);
      *(_QWORD *)(v55 + 24) = started;
      WdLogEvent5_WdError(v55);
      v24 = 0;
      v56 = 0;
      goto LABEL_271;
    }
    if ( v191 )
    {
      v77 = WdLogNewEntry5_WdEvent(v54, v53);
      *(_QWORD *)(v77 + 24) = DeviceObjecta;
      WdLogEvent5_WdEvent(v77);
      *((_WORD *)DeviceExtension + 576) = 257;
      byte_1C00B2E80 = 1;
      if ( byte_1C00B2B11 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v72);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v72 = TargetDevice;
      }
    }
  }
  v200 = 0;
  v79 = (int)DpiReadPnpRegistryValue(DeviceObjecta, L"SoftGPUAdapter", &v200, 4LL) >= 0 && v200;
  DeviceExtension[2692] = v79;
  if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
  {
    v82 = WdLogNewEntry5_WdEvent(v81, v80);
    *(_QWORD *)(v82 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v82);
    v83 = TargetDevice;
    v24 = 1;
    DpiQueryBusInterface(TargetDevice, (__int64)(DeviceExtension + 560));
    if ( !*((_QWORD *)DeviceExtension + 77) )
    {
      LODWORD(started) = -1073741127;
      v86 = WdLogNewEntry5_WdError(v85, v84);
      *(_QWORD *)(v86 + 24) = -1073741127LL;
      WdLogEvent5_WdError(v86);
LABEL_123:
      v24 = 0;
      goto LABEL_20;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 139) = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(started) = -1073741801;
      v91 = WdLogNewEntry5_WdLowResource(v89, v88, 0LL, v90);
      *(_QWORD *)(v91 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v91);
      goto LABEL_123;
    }
    (*((void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension + 77))(
      *((_QWORD *)DeviceExtension + 71),
      0LL,
      PoolWithTag,
      0LL,
      256);
    v92 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
    *((_DWORD *)DeviceExtension + 280) = 1;
    v93 = *v92;
    *((_DWORD *)DeviceExtension + 281) = v93;
    v94 = v92[1];
    *((_DWORD *)DeviceExtension + 282) = v94;
    *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v92 + 8);
    if ( (v92[7] & 0x7F) == 0 )
    {
      *((_DWORD *)DeviceExtension + 283) = v92[22];
      *((_DWORD *)DeviceExtension + 284) = v92[23];
    }
    if ( v93 != 22611 || (v95 = 1, v94 != 4097) )
      v95 = 0;
    DeviceExtension[2696] = v95;
    DpiQueryBusInterface(v83, (__int64)(DeviceExtension + 624));
    DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
    AgpStatus = DpiGetAgpStatus(DeviceObjecta);
    v100 = AgpStatus;
    if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
    {
      v101 = WdLogNewEntry5_WdWarning(v98, v97, v99);
      *(_QWORD *)(v101 + 24) = v100;
      WdLogEvent5_WdWarning(v101);
    }
    LODWORD(started) = DpiGetVgaStatus(DeviceObjecta);
    v105 = DeviceExtension[1152];
    if ( (int)started < 0 )
    {
      if ( v105 )
      {
        v107 = WdLogNewEntry5_WdWarning(v103, v102, v104);
        *(_QWORD *)(v107 + 24) = DeviceObjecta;
        WdLogEvent5_WdWarning(v107);
      }
    }
    else if ( v105
           || !byte_1C00B2E80
           && (v106 = WdLogNewEntry5_WdWarning(v103, v102, v104),
               *(_QWORD *)(v106 + 24) = DeviceObjecta,
               WdLogEvent5_WdWarning(v106),
               DeviceExtension[1152] = 1,
               byte_1C00B2E81 = 1,
               DeviceExtension[1152]) )
    {
      if ( byte_1C00B2B16 )
        DeviceExtension[1155] = 1;
    }
    goto LABEL_199;
  }
  if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
  {
    v220 = 0LL;
    v110 = WdLogNewEntry5_WdEvent(v109, v108);
    *(_QWORD *)(v110 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v110);
    if ( !DeviceExtension[1156] )
    {
LABEL_144:
      LODWORD(started) = -1073741637;
      v111 = WdLogNewEntry5_WdError(v103, v102);
      *(_QWORD *)(v111 + 24) = -1073741637LL;
      WdLogEvent5_WdError(v111);
      v24 = 0;
      goto LABEL_20;
    }
    *((_DWORD *)DeviceExtension + 280) = 2;
    v245 = 0;
    BYTE1(v219[2]) = 0;
    HIWORD(v219[2]) = 0;
    strcpy((char *)v219, "AeiC_HID");
    v219[3] = 0;
    v243 = 0LL;
    v244 = 0LL;
    v112 = DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFFLL, v219, 0x18u, &v243, 0x24u);
    v115 = v112;
    if ( v112 >= 0 )
    {
      *(_QWORD *)(DeviceExtension + 1124) = v244;
    }
    else
    {
      v116 = WdLogNewEntry5_WdError(v114, v113);
      *(_QWORD *)(v116 + 24) = v115;
      WdLogEvent5_WdError(v116);
    }
    v245 = 0;
    strcpy((char *)v219, "AeiC_SUB");
    BYTE1(v219[2]) = 0;
    HIWORD(v219[2]) = 0;
    v219[3] = 0;
    v243 = 0LL;
    v244 = 0LL;
    if ( (int)DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFFLL, v219, 0x18u, &v243, 0x24u) >= 0 )
    {
      *(_QWORD *)(DeviceExtension + 1132) = v244;
    }
    else
    {
      v119 = WdLogNewEntry5_WdEvent(v118, v117);
      *(_QWORD *)(v119 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdEvent(v119);
    }
    v245 = 0;
    strcpy((char *)v219, "AeiC_HRV");
    BYTE1(v219[2]) = 0;
    HIWORD(v219[2]) = 0;
    v219[3] = 0;
    v243 = 0LL;
    v244 = 0LL;
    LODWORD(started) = DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFFLL, v219, 0x18u, &v243, 0x24u);
    if ( (int)started >= 0 )
    {
      *((_DWORD *)DeviceExtension + 285) = (unsigned __int16)v244;
    }
    else
    {
      v120 = WdLogNewEntry5_WdEvent(v103, v102);
      *(_QWORD *)(v120 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdEvent(v120);
      LODWORD(started) = 0;
    }
    if ( DeviceExtension[1152] )
    {
      v121 = IoGetAttachedDeviceReference(TargetDevice);
      started = (int)DpiSetDeviceUsageType(v121);
      ObfDereferenceObject(v121);
      if ( (int)started < 0 )
      {
        v122 = WdLogNewEntry5_WdError(v103, v102);
        *(_QWORD *)(v122 + 24) = started;
        WdLogEvent5_WdError(v122);
        LODWORD(started) = 0;
      }
    }
  }
  else
  {
    if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      v123 = WdLogNewEntry5_WdEvent(v103, v102);
      *(_QWORD *)(v123 + 24) = DeviceObjecta;
      WdLogEvent5_WdEvent(v123);
      v24 = 1;
      if ( DeviceExtension[2694] )
      {
        *((_DWORD *)DeviceExtension + 281) = 5140;
        *((_QWORD *)DeviceExtension + 141) = 705LL;
        *((_DWORD *)DeviceExtension + 284) = 0;
        *((_DWORD *)DeviceExtension + 285) = 1;
      }
      *((_DWORD *)DeviceExtension + 280) = 4;
      goto LABEL_199;
    }
    if ( DeviceExtension[1158] )
    {
      *((_DWORD *)DeviceExtension + 281) = 5140;
      *((_QWORD *)DeviceExtension + 141) = 139LL;
      *((_QWORD *)DeviceExtension + 142) = 0LL;
      *((_DWORD *)DeviceExtension + 280) = 0;
    }
    else if ( DeviceExtension[480] )
    {
      *((_DWORD *)DeviceExtension + 280) = 3;
      *((_DWORD *)DeviceExtension + 281) = 5140;
      if ( !DeviceExtension[1154] )
      {
        v24 = 1;
        if ( DeviceExtension[2693] )
          *((_DWORD *)DeviceExtension + 282) = 140;
        goto LABEL_199;
      }
      *((_DWORD *)DeviceExtension + 282) = 141;
    }
    else
    {
      v124 = DeviceExtension[2695];
      if ( !v124 && !g_OSTestSigningEnabled )
        goto LABEL_144;
      v51 = g_OSTestSigningEnabled == 0;
      *((_DWORD *)DeviceExtension + 280) = 3;
      if ( !v51 && !v124 )
      {
        P = 0LL;
        v125 = DpiGetDevicePropertyString(v72, DevicePropertyCompatibleIDs, PagedPool, (__int64)&ResultLength);
        started = v125;
        if ( v125 >= 0 && (v128 = (char *)P) != 0LL )
        {
          v129 = 0;
          if ( DeviceExtension[2692] )
          {
            *((_DWORD *)DeviceExtension + 281) = 5140;
            v130 = *(_WORD *)v128;
            v131 = &v234;
            v234 = L"SoftGPU_Full_D3D12";
            v236 = L"SoftGPU_Full_D3D9L";
            v238 = L"SoftGPU_Rod";
            v240 = L"SoftGPU_Dod";
            v242 = L"SoftGPU_MCDM";
            v233[0] = 135;
            v235 = 128;
            v237 = 136;
            v239 = 137;
            v241 = 134;
            while ( 1 )
            {
              v132 = (char *)*v131;
              if ( v130 )
                break;
LABEL_181:
              if ( !*(_WORD *)v132 )
                goto LABEL_184;
              ++v129;
              v131 += 2;
              if ( v129 >= 5 )
                goto LABEL_183;
            }
            v133 = v128 - v132;
            while ( *(_WORD *)v132 )
            {
              if ( *(_WORD *)&v132[v133] == *(_WORD *)v132 )
              {
                v132 += 2;
                if ( *(_WORD *)&v132[v133] )
                  continue;
              }
              goto LABEL_181;
            }
LABEL_184:
            *((_DWORD *)DeviceExtension + 282) = v233[4 * v129];
          }
          else
          {
            v134 = *(_WORD *)P;
            v209 = L"MCDMTestDevice";
            v135 = &v209;
            v207 = 5140;
            v208 = 256;
            v210[0] = 2697;
            while ( 1 )
            {
              v136 = *v135;
              if ( v134 )
                break;
LABEL_191:
              if ( !*v136 )
                goto LABEL_194;
              ++v129;
              v135 += 3;
              if ( v129 )
                goto LABEL_195;
            }
            v137 = (char *)((_BYTE *)P - (_BYTE *)v136);
            while ( *v136 )
            {
              if ( *(_WORD *)&v137[(_QWORD)v136] == *v136 )
              {
                if ( *(_WORD *)&v137[(_QWORD)++v136] )
                  continue;
              }
              goto LABEL_191;
            }
LABEL_194:
            *((_DWORD *)DeviceExtension + 281) = *(&v207 + 6 * (int)v129);
            *((_DWORD *)DeviceExtension + 282) = *(&v208 + 6 * (int)v129);
            DeviceExtension[v210[6 * v129]] = 1;
LABEL_195:
            if ( !*((_DWORD *)DeviceExtension + 282) )
            {
              ExFreePoolWithTag(v128, 0);
              goto LABEL_144;
            }
          }
LABEL_183:
          ExFreePoolWithTag(v128, 0);
        }
        else
        {
          v138 = WdLogNewEntry5_WdError(v127, v126);
          *(_QWORD *)(v138 + 24) = started;
          WdLogEvent5_WdError(v138);
        }
      }
    }
  }
  v24 = 1;
LABEL_199:
  if ( !DeviceExtension[1152] && !DeviceExtension[480] && DeviceExtension[1154] )
  {
    v139 = WdLogNewEntry5_WdEvent(v103, v102);
    *(_QWORD *)(v139 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v139);
    LODWORD(started) = -1071774664;
LABEL_203:
    v24 = 0;
    goto LABEL_20;
  }
  if ( DeviceExtension[2692] && DeviceExtension[2693] )
  {
    LODWORD(started) = -1073741811;
    v140 = WdLogNewEntry5_WdError(v103, v102);
    *(_QWORD *)(v140 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v140);
    goto LABEL_203;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 181);
  v141 = DeviceExtension + 1312;
  *((_WORD *)DeviceExtension + 648) = 64;
  v142 = 7LL;
  if ( (((_BYTE)DeviceExtension + 32) & 4) != 0 )
  {
    *v141 = 1;
    v142 = 6LL;
    v141 = DeviceExtension + 1316;
  }
  memset64(v141, 0x100000001uLL, v142 >> 1);
  if ( (v142 & 1) != 0 )
    v141[v142 - 1] = 1;
  KeInitializeDpc((PRKDPC)(DeviceExtension + 1384), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, DeviceObjecta);
  KeInitializeMutex((PRKMUTEX)DeviceExtension + 45, 0);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2600), 0);
  *((_QWORD *)DeviceExtension + 314) = DeviceExtension + 2504;
  *((_QWORD *)DeviceExtension + 313) = DeviceExtension + 2504;
  *((_QWORD *)DeviceExtension + 324) = DeviceExtension + 2584;
  *((_QWORD *)DeviceExtension + 323) = DeviceExtension + 2584;
  *((_QWORD *)DeviceExtension + 339) = DeviceExtension + 2704;
  *((_QWORD *)DeviceExtension + 338) = DeviceExtension + 2704;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1264), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 153) = 0LL;
  *((_DWORD *)DeviceExtension + 292) = 1;
  *((_QWORD *)DeviceExtension + 147) = 0LL;
  *((_DWORD *)DeviceExtension + 296) = 0;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1192), SynchronizationEvent, 0);
  *((_DWORD *)DeviceExtension + 681) = 49156;
  if ( *(_DWORD *)(v10 + 28) >= 0xB003u
    && !(unsigned __int8)ExQueryFastCacheDevLicense(v143)
    && !DeviceExtension[1154]
    && !DeviceExtension[480] )
  {
    v144 = *((_DWORD *)DeviceExtension + 281);
    if ( v144 == 4098 )
    {
      Feature_ReportWddm2_6ToDriver_Amd__private_ReportDeviceUsage();
      v144 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v144 == 4318 )
    {
      Feature_ReportWddm2_6ToDriver_Nvidia__private_ReportDeviceUsage();
      v144 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v144 == 32902 )
      Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage();
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v145 = DpiFdoInitializeFdo(DeviceObjecta);
      started = v145;
      if ( v145 < 0 )
        goto LABEL_95;
      v192 = 1;
    }
    else if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)DeviceObjecta->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
LABEL_228:
  KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 126) )
    {
      v146 = DpiLdaLinkDeviceToChain(DeviceObjecta);
      started = v146;
      if ( v146 < 0 )
      {
        v149 = WdLogNewEntry5_WdError(v148, v147);
        *(_QWORD *)(v149 + 24) = started;
        WdLogEvent5_WdError(v149);
        v56 = 0;
        goto LABEL_271;
      }
    }
  }
  v150 = *(char ***)(v10 + 64);
  if ( *v150 != (char *)(v10 + 56) )
    goto LABEL_279;
  *(_QWORD *)DeviceExtension = v10 + 56;
  *((_QWORD *)DeviceExtension + 1) = v150;
  *v150 = DeviceExtension;
  *(_QWORD *)(v10 + 64) = DeviceExtension;
  ++*(_DWORD *)(v10 + 128);
  v56 = 1;
  if ( !*((_QWORD *)DeviceExtension + 21) )
  {
    v151 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    v155 = 0LL;
    *((_QWORD *)DeviceExtension + 21) = v151;
    if ( !v151 )
    {
LABEL_235:
      LODWORD(started) = -1073741801;
      v156 = WdLogNewEntry5_WdLowResource(v155, v152, v153, v154);
      *(_QWORD *)(v156 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v156);
      goto LABEL_273;
    }
    v151[26] = 1;
    *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) = 0;
    v157 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    started = v157;
    if ( v157 < 0 )
    {
      v160 = WdLogNewEntry5_WdError(v159, v158);
      *(_QWORD *)(v160 + 24) = started;
LABEL_238:
      WdLogEvent5_WdError(v160);
      goto LABEL_271;
    }
    v193 = 1;
  }
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
  if ( v6 )
  {
    if ( !*((_QWORD *)v6 + 182) )
    {
      v161 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 182) = v161;
      if ( !v161 )
        goto LABEL_235;
      v161[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 182));
    }
    if ( !*((_QWORD *)v6 + 183) )
    {
      v162 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 183) = v162;
      if ( !v162 )
        goto LABEL_235;
      v162[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 183));
    }
    *((_DWORD *)v6 + 368) = 0;
    memset(v6 + 1480, 0, 0x400uLL);
  }
  KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
  *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
  v24 = 0;
  if ( v6 )
  {
    *((_QWORD *)v6 + 17) = DpiFdoDispatchPower;
    if ( v6[1152] )
    {
      *(_BYTE *)(*((_QWORD *)v6 + 21) + 108LL) = 1;
      AcquireMiniportListMutex();
      if ( qword_1C00B2DB8 && qword_1C00B2DB8 != qword_1C00B2DC0 )
      {
        v167 = WdLogNewEntry5_WdError(v166, v165);
        *(_QWORD *)(v167 + 24) = DeviceObjecta;
        *(_QWORD *)(v167 + 32) = (int)started;
        WdLogEvent5_WdError(v167);
      }
      qword_1C00B2DB8 = (__int64)DeviceObjecta;
      v168 = *((_QWORD *)v6 + 6);
      v205 = 0LL;
      started = (int)DpiDxgkDdiExchangePreStartInfo(v10, v168, &v205);
      _InterlockedExchange64(&qword_1C00B2B50, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (int)started < 0 )
      {
        v160 = WdLogNewEntry5_WdError(v164, v163);
        *(_QWORD *)(v160 + 24) = *(_QWORD *)(v10 + 1144);
        *(_QWORD *)(v160 + 32) = started;
        goto LABEL_238;
      }
      if ( *((_DWORD *)v6 + 4) == 1953656900 && *((_DWORD *)v6 + 5) == 2 )
      {
        v163 = 1LL;
        v164 = HIDWORD(v205) >> 1;
        LOBYTE(v164) = (v205 & 0x200000000LL) != 0;
        v6[2741] = BYTE4(v205) & 1;
        v6[2742] = v164;
      }
    }
  }
  if ( v182 && v188 )
  {
    qword_1C00B2DC0 = (__int64)DeviceObjecta;
    if ( !qword_1C00B2DB8 )
      qword_1C00B2DB8 = (__int64)DeviceObjecta;
    memset(&VersionInformation[1], 0, 0x118uLL);
    VersionInformation[0] = 284;
    if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0
      && (ReturnedProductType = 0,
          RtlGetProductInfo(
            VersionInformation[1],
            VersionInformation[2],
            LOWORD(VersionInformation[69]),
            HIWORD(VersionInformation[69]),
            &ReturnedProductType))
      && ReturnedProductType == 187
      || (unsigned int)ExGetFirmwareType() == 2
      || byte_1C00B2B13 )
    {
      *(_WORD *)(v6 + 2741) = 257;
    }
  }
  DeviceObjecta->Flags |= 4u;
  DeviceObjecta->Flags |= 0x2000u;
  DeviceObjecta->Flags &= ~0x4000u;
  DeviceObjecta->Flags &= ~0x80u;
  v169 = WdLogNewEntry5_WdEvent(v164, v163);
  *(_QWORD *)(v169 + 24) = DeviceObjecta;
  WdLogEvent5_WdEvent(v169);
LABEL_271:
  if ( (int)started >= 0 )
    goto LABEL_291;
  if ( v56 == 1 )
  {
LABEL_273:
    v25 = (struct _KMUTANT *)(v10 + 72);
    KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v171 = *(_QWORD **)DeviceExtension;
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v172 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v172 == DeviceExtension )
      {
        *v172 = v171;
        v171[1] = v172;
        --*(_DWORD *)(v10 + 128);
        if ( v6 && *((_DWORD *)v6 + 126) )
          DpiLdaUnLinkDeviceFromChain(DeviceObjecta);
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
        goto LABEL_21;
      }
    }
LABEL_279:
    __fastfail(3u);
  }
LABEL_20:
  v25 = (struct _KMUTANT *)(v10 + 72);
LABEL_21:
  if ( v24 == 1 )
    KeReleaseMutex(v25, 0);
  if ( DeviceObjecta )
  {
    if ( v192 == 1 )
      DpiFdoResetFdo(DeviceObjecta);
    if ( v6 )
    {
      v26 = (_DWORD *)*((_QWORD *)v6 + 182);
      if ( v26 && v26[2] == 1 )
      {
        ExFreePoolWithTag(v26, 0);
        *((_QWORD *)v6 + 182) = 0LL;
      }
      v27 = (_DWORD *)*((_QWORD *)v6 + 183);
      if ( v27 && v27[2] == 1 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v6 + 183) = 0LL;
      }
      if ( (_BYTE)v199 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(DeviceObjecta);
      v28 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 73);
      if ( v28 )
      {
        v28(*((_QWORD *)v6 + 71));
        memset(v6 + 560, 0, 0x40uLL);
      }
      v29 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 81);
      if ( v29 )
      {
        v29(*((_QWORD *)v6 + 79));
        *((_OWORD *)v6 + 39) = 0LL;
        *((_OWORD *)v6 + 40) = 0LL;
        *((_OWORD *)v6 + 41) = 0LL;
      }
      v30 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 87);
      if ( v30 )
      {
        v30(*((_QWORD *)v6 + 85));
        memset(v6 + 672, 0, 0xB8uLL);
      }
      v31 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 110);
      if ( v31 )
      {
        v31(*((_QWORD *)v6 + 108));
        memset(v6 + 856, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 33);
      v32 = (void *)*((_QWORD *)v6 + 139);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        *((_QWORD *)v6 + 139) = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v33 = *((_QWORD *)DeviceExtension + 21);
      if ( v33 )
      {
        if ( v193 == 1 )
        {
          ExDeleteResourceLite((PERESOURCE)v33);
          v33 = *((_QWORD *)DeviceExtension + 21);
        }
        if ( *(_DWORD *)(v33 + 104) == 1 )
        {
          ExFreePoolWithTag((PVOID)v33, 0);
          *((_QWORD *)DeviceExtension + 21) = 0LL;
        }
      }
      v34 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
      if ( v34 )
        IoDetachDevice(v34);
    }
    IoDeleteDevice(DeviceObjecta);
    DeviceObjecta = 0LL;
  }
  if ( v194 == 1 )
  {
    DpiDxgkDdiRemoveDevice(v10, v202);
    v35 = v183;
  }
  else
  {
    v35 = v183;
    if ( !v183 )
      goto LABEL_291;
    if ( *(_QWORD *)(v10 + 1344) )
    {
      DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1LL);
      v174 = DiagnosticInfoArgs;
      if ( DiagnosticInfoArgs )
      {
        v175 = *(_DWORD *)(DiagnosticInfoArgs + 216);
        v176 = TargetDevice;
        *(_QWORD *)DiagnosticInfoArgs = v202;
        if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v10 + 1344))(v176, DiagnosticInfoArgs) >= 0 )
        {
          if ( *(_DWORD *)(v174 + 220) > v175 )
            *(_DWORD *)(v174 + 220) = 0;
          DxgCreateLiveDumpWithDriverBlob(
            v176,
            0x1B0u,
            *(int *)(v174 + 8),
            (int)started,
            0LL,
            0LL,
            (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v174);
          v35 = 0;
        }
        DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v174);
      }
    }
  }
  if ( v35 && (_DWORD)started != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)started, 0LL, 0LL, 0);
LABEL_291:
  memset(v224, 0, sizeof(v224));
  v227 = 0;
  v177 = DxgkDiagCalcDuration1us(&v217);
  v223[0] = 6;
  v229 = v196;
  v223[1] = 64;
  v226 = 0;
  v225 = 0LL;
  memset(v224, 0, sizeof(v224));
  v228 = 34;
  v230 = v177;
  v231 = started;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v223, 0x100000000LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    *(_DWORD *)Exclusive = started;
    McTemplateK0ppq_EtwWriteTransfer(
      v178,
      &EventExitDpiAddDevice,
      v179,
      DriverObject,
      TargetDevice,
      *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
